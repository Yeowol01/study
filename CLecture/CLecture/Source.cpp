#include <stdio.h>


int main()
{
#pragma region 이중 포인터
	/*/
	int data = 100;

	int* ptr1 = &data;
	
	int** ptr2 = &ptr1;

	**ptr2 = 999;

	printf("data의 값 : %d\n", data);
	printf("**ptr2의 값 : %d\n", **ptr2);
	/*/

	/*/
	int a = 10;
	int b = 20;

	int* aPtr1 = &a;
	int** aPtr2 = &aPtr1;

	int* bPtr1 = &b;
	int** bPtr2 = &bPtr1;

	int* temp= *bPtr2;
	*bPtr2 = *aPtr2;
	*aPtr2 = temp;

	printf("**aPtr2가 가리키는 값 : %d\n", **aPtr2);
	printf("**bPtr2가 가리키는 값 : %d\n", **bPtr2);
	/*/

#pragma endregion

#pragma region 약수
	
	/*/
	int num;
	printf("입력할 숫자");
	scanf_s("%d", &num);

	printf("%d의 약수\n", num);
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
		}
	}
	/*/

	// 강사님 방법
	/*/
	int value = 0;
	
	scanf_s("%d", &value);

	for (int i = 1; i <= value; i++)
	{
		if (value % i == 0)
		{
			printf("%d ", i);
		}
	}
	/*/
#pragma endregion



	return 0;
}