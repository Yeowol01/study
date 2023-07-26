#pragma once
#include <stdio.h>

#pragma region 매크로

// 프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정입니다.

#define SIZE 5

	// 전처리기란?
	// 프로그램이 컴파일되기 이전에 프로그램에 대한 사전 처리하는 과정입니다.

#pragma endregion


void main()
{

#pragma region 포인터 상수화


	//float data = 99.865f;
	//int * pointer = NULL;

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로 정해지며, 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.
	//printf("pointer 변수의 크기 : %d\n", sizeof(pointer));

	// 포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과 포인터 변수의 자료형이 일치해야 합니다.
	// pointer = &data; // ERROR

	// 상수 지시 포인터
	/*/
	int hp = 100;
	int mp = 50;

	const int* cPtr = &hp;

	printf("cPtr이 가리키는 값 : %d\n", *cPtr);

	// 포인터 변수를 상수로 선언하여, 포인터가 변수가 가리키고 있는 주소에 존재하는 값을 변경할 수 없습니다.
	// *cPtr = 999; (ERROR)

	cPtr = &mp;

	mp = 999;

	printf("cPtr이 가리키는 값 : %d\n", *cPtr);

	// 포인터로 참조되어 있는 변수는 상수화에 대한 영향을 받지 않습니다.

	//printf("cPtr이 가리키는 값 : %d\n", *cPtr);
	/*/

	// 상수 포인터
	/*/
	float decimal1 = 5.75f;
	float dicimal2 = 9.99f;

	float* const floatPtr = &decimal1;

	// 포인터 상수는 포인터 변수가 상수화되어 새로운 주소값을 저장할 수 없습니다.
	// floatPtr = &decimal2; ERROR

	*floatPtr = 16.825f;

	printf("floatPtr이 가리키는 값 : %f\n", *floatPtr);
	/*/

#pragma endregion

#pragma region 매크로

	// 매크로의 경우 자료형이 존재하지 않으므로 메모리 공간을 가지고 있지 않습니다.

	//for (int i =0; i < SIZE; i++)
	//{
	//	printf("채집 중...\n");
	//}
	//
	//for (int i = 0; i < SIZE; i++)
	//{
	//	printf("스킬 숙련 중...\n");
	//}
	//
	//for (int i = 0; i < SIZE; i++)
	//{
	//	printf("사냥 중...\n");
	//}

#pragma endregion



}



