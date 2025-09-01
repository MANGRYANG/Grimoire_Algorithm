/*
* Array ��� ���� �ڵ�
*/

#include <iostream>
#include <array>

int main(void)
{
	// Array STL ��� ����
	// Array�� ���� ũ���� �迭�� �ٷ�� �����̳ʷ�, ����� ��ҵ��� �������� �޸� ��Ͽ� ��ġ�Ѵ�.
	std::array<int, 5> arr = { 1, 2, 3, 4, 5 };

	// Array�� ��ҿ��� �ε����� ����Ͽ� ������ �� �ִ�. �ε��� ������ �ð� ���⵵�� O(1)�̴�. (�������� �޸� ��Ͽ� ��ġ�ϱ� ����)
	std::cout << "The first element : " << arr[0] << std::endl;
	
	// �ε����� ����� ������ ������ ����� ���ܸ� �߻���Ű�� �ʱ� ������, ������ ������ ���� at() �޼��带 ����ϴ� ���� ����.
	// at() �޼���� ������ ����� ���� �� std::out_of_range ���ܸ� �߻���Ų��.
	std::cout << "The second element : " << arr.at(1) << std::endl;
	// �߸��� �ε��� ���� ����
	try
	{
		std::cout << "wrong element : " << arr.at(10) << std::endl; // std::out_of_range ���� �߻�
	}
	// ���� ó��
	catch (const std::out_of_range& e)
	{
		std::cerr << "Out of range error: " << e.what() << std::endl;
	}

	// Array���� ����� ���� �����ϴ� �͵� �ε����� at() �޼��带 ����Ͽ� �����ϴ�.
	// �ε����� ����� ���ٰ� ���������� at() �޼��带 ����ϴ� ���� �����ϸ�, �ð� ���⵵�� O(1)�̴�.
	arr[2] = 10; // �� ��° ��Ҹ� 10���� ����
	std::cout << "The third element after change : " << arr[2] << std::endl;
	arr.at(3) = 20; // �� ��° ��Ҹ� 20���� ����
	std::cout << "The fourth element after change : " << arr.at(3) << std::endl;

	// Array�� ��� ��Ҹ� ������ ������ ä��� �޼���� fill() �޼��尡 �ִ�. ����� ������ŭ ���� �����ϱ� ������ �ð� ���⵵�� O(n)�̴�.
	arr.fill(0); // ��� ��Ҹ� 0���� ä��
	std::cout << "Array after fill(0) : " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " \
		<< arr[3] << ", " << arr[4] << std::endl;

	// Array�� ũ��� size() �޼��带 ����Ͽ� ���� �� �ִ�.
	// Array�� ũ��� ������ ������ �����Ǳ� ������, size() �޼����� �ð� ���⵵�� O(1)�̴�.
	std::cout << "Array size : " << arr.size() << std::endl; // �迭�� ũ�� ���

	return 0;
}