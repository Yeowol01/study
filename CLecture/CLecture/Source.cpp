#include <stdio.h>

#pragma region ��� �Լ�

// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��Դϴ�.

void Function()
{
	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������ �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��մϴ�.
	printf("�Լ� ȣ��\n");
	Function();
}

#pragma endregion

void CountDown(int count)
{
	/*/
	// ��� �ڵ�
	if (count <= 0)
	{
		return;
	}

	printf("count�� �� : %d\n", count);
	CountDown(count - 1);
	printf("�ȳ��ϼ���\n");
	/*/
}

// ���丮��

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
	printf("3!�� �� : %d\n", Factorial(3));
}

int main()
{
	// CountDown(3);

	int data = 10;

	int* ptr = &data;

	// 0a 00 00 00

	// 16 ����
	// a = 10

	// �� ����� ���
	
	// ��Ʋ ����� ���
	// ���� �ּҿ� �������� ���� ����Ʈ(LSB, Least Significant Bit)���� �����ϴ� ����Դϴ�.

	// ������ ���丮��
	/*/
	int i, a = 1;

	for (i = 1; i <= 7; i++)
		a *= i;

	printf("7! �� �� : %d\n", a);
	/*/

	// ���α׷��� ���������� ����Ǿ��� �� 0�̶�� ���� ��ȯ�մϴ�
	return 0;
}