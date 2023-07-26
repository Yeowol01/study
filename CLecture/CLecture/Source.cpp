#include <stdio.h>

#pragma region 재귀 함수

// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다.

void Function()
{
	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생합니다.
	printf("함수 호출\n");
	Function();
}

#pragma endregion

void CountDown(int count)
{
	/*/
	// 방어 코드
	if (count <= 0)
	{
		return;
	}

	printf("count의 값 : %d\n", count);
	CountDown(count - 1);
	printf("안녕하세요\n");
	/*/
}

// 팩토리얼

// !5(120) !4(24) !3(6)
// 3! = 1 * 2 * 3
// 4! = 1 * 2 * 3 * 4

int Factorial(int count)
{
	if (count <= 1)
	{
		return 1;
	}
	else
	{
		return count * Factorial(count - 1);
	}
	printf("3!의 값 : %d\n", Factorial(3));
}

int main()
{
	// CountDown(3);

	int data = 10;

	int* ptr = &data;

	// 0a 00 00 00

	// 16 진수
	// a = 10

	// 빅 엔디안 방식
	
	// 리틀 엔디안 방식
	// 낮은 주소에 데이터의 낮은 바이트(LSB, Least Significant Bit)부터 저장하는 방법입니다.

	// 직접한 팩토리얼
	/*/
	int i, a = 1;

	for (i = 1; i <= 7; i++)
		a *= i;

	printf("7! 의 값 : %d\n", a);
	/*/

	// 프로그램이 정상적으로 종료되었을 때 0이라는 값을 반환합니다
	return 0;
}