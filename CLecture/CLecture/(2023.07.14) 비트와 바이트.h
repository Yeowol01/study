#pragma once

#include <stdio.h>
#include <limits.h>
#include <cfloat>

void main()
{

	// crtl + k + u (주석 해제)

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며,
	// 0 또는 1의 조합으로 논리 계산을 수행하는 단위입니다.

	// 10 = 2 진수 [0][0][0][0][1][0][1][0]
	// 15 = 2 진수 [0][0][0][0][1][1][1][1]
	int value = 15;

	// 10 진수를 2 진수로 변환하는 과정
	// 10 진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// 비트 연산자란?
	// 비트 단위로 논리 연산을 수행하기 위해 수행하는 연산자입니다.

	/* <- 시작


	// AND 연산자(&)
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.
	int a = 10; // [0][0][0][0] [1][0][1][0]
	int b = 7;  // [0][0][0][0] [0][1][1][1]
				// -------------------------
				// [0][0][0][0] [0][0][1][0]

	printf("a 변수와 b 변수를 AND 연산한 결과 : %d\n", a & b);

	// OR 연산자(|)
	// 두개의 피연산자 중 하나라도 1이 있다면 1을 반환하는 연산자입니다.
	int x = 13; // [0][0][0][0] [1][1][0][1]
	int y = 5;  // [0][0][0][0] [0][1][0][1]
				// -------------------------
				// [0][0][0][0] [1][1][0][1]

	printf("x 변수와 y 변수를 OR 연산한 결과 : %d\n", x | y);

	// XOR 연산자(^)
	// 두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면 1을 반환하는 연산자입니다.
	int c = 11; // [0][0][0][0] [1][0][1][1]
	int d = 9;  // [0][0][0][0] [1][0][0][1]
				// -------------------------
				// [0][0][0][0] [0][0][1][0]

	printf("c 변수와 d 변수를 XOR 연산한 결과 : %d\n", c ^ d);

	// NOT 연산자(~)
	// 비트를 반전하는 연산자입니다.

	int data = 11;// [0][0][0][0] [1][0][1][1]
				  // -------------------------
				  // [1][1][1][1] [0][1][0][0]

				  // -128 + 64 + 32 + 16 + 4

	// 첫 번째 비트는 부호를 나타내는 비트이며, 첫 번째 비트에 1이라는 값이 있다면 음수를 의미합니다.

	printf("data 변수를 NOT 연산한 결과 : %d\n", ~data);

	*/ // < - 전체 주석이 끝나는 부분

#pragma endregion

#pragma region 오버픞로우와 언더플로우

	// 오버플로우 : 특정한 자료형이 표현할 수 있는 최대값의 범위를 넘어서 연산을 수행하는 과정입니다.

	// char  1 byte -> -128 ~ 127
	// short 2 byte -> -32768 ~ 32767

	char score = 129;

	// 오버플로우의 경우 최대값보다 더 많은 값을 저장하게 되면 최소값부터 최대값을 넘어간 만큼 다시 계산합니다.
	//printf("score 변수의 값 : %d\n", score);



	// 언더플로우 : 특정한 자료형이 표현할 수 있는 최소값의 범위를 넘어서 연산을 수행하는 과정입니다.

	char count = -129;
	float decimal = FLT_MAX + FLT_MAX;

	// 최소값보다 더 작은 값을 저장하게 되면 최대값부터 최소값을 넘어간 만큼 다시 계산합니다.
	//printf("count 변수의 값 : %d\n", count);

	// 실수형 자료형은 오버플로우가 발생하면 infinity라는 값으로 출력됩니다.
	printf("decimal 변수의 값 : %f\n", decimal);

#pragma endregion
}




