/*
* Array 사용 예시 코드
*/

#include <iostream>
#include <array>

int main(void)
{
	// Array STL 사용 예시
	// Array는 고정 크기의 배열을 다루는 컨테이너로, 저장된 요소들이 연속적인 메모리 블록에 위치한다.
	std::array<int, 5> arr = { 1, 2, 3, 4, 5 };

	// Array의 요소에는 인덱스를 사용하여 접근할 수 있다. 인덱스 접근의 시간 복잡도는 O(1)이다. (연속적인 메모리 블록에 위치하기 때문)
	std::cout << "The first element : " << arr[0] << std::endl;
	
	// 인덱스를 사용한 접근은 범위를 벗어나도 예외를 발생시키지 않기 때문에, 안전한 접근을 위해 at() 메서드를 사용하는 것이 좋다.
	// at() 메서드는 범위를 벗어나는 접근 시 std::out_of_range 예외를 발생시킨다.
	std::cout << "The second element : " << arr.at(1) << std::endl;
	// 잘못된 인덱스 접근 예시
	try
	{
		std::cout << "wrong element : " << arr.at(10) << std::endl; // std::out_of_range 예외 발생
	}
	// 예외 처리
	catch (const std::out_of_range& e)
	{
		std::cerr << "Out of range error: " << e.what() << std::endl;
	}

	// Array에서 요소의 값을 변경하는 것도 인덱스나 at() 메서드를 사용하여 가능하다.
	// 인덱스를 사용한 접근과 마찬가지로 at() 메서드를 사용하는 것이 안전하며, 시간 복잡도는 O(1)이다.
	arr[2] = 10; // 세 번째 요소를 10으로 변경
	std::cout << "The third element after change : " << arr[2] << std::endl;
	arr.at(3) = 20; // 네 번째 요소를 20으로 변경
	std::cout << "The fourth element after change : " << arr.at(3) << std::endl;

	// Array의 모든 요소를 동일한 값으로 채우는 메서드로 fill() 메서드가 있다. 요소의 개수만큼 값을 복사하기 때문에 시간 복잡도는 O(n)이다.
	arr.fill(0); // 모든 요소를 0으로 채움
	std::cout << "Array after fill(0) : " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " \
		<< arr[3] << ", " << arr[4] << std::endl;

	// Array의 크기는 size() 메서드를 사용하여 얻을 수 있다.
	// Array의 크기는 컴파일 시점에 결정되기 때문에, size() 메서드의 시간 복잡도는 O(1)이다.
	std::cout << "Array size : " << arr.size() << std::endl; // 배열의 크기 출력

	return 0;
}