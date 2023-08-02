#pragma once
#include <stdio.h>
#include <math.h>

#pragma region ����ü

// ���� ���� ������ �ϳ��� �������� ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

struct Player
{
	float x;
	float y;
};

struct Enemy
{
	float x;
	float y;
};


/*/
struct GameObject
{
	//int health; // 4
	//char grade; // 1
	// Padding  // 3
	//double x;   // 8


	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.
};
/*/
#pragma endregion


int main()
{
#pragma region ����ü ����
	/*/
	struct GameObject gmaeObject;

	gmaeObject.health = 100;
	gmaeObject.x = 3.45;

	printf("gmaeObject.health�� �� : %d\n", gmaeObject.health);
	printf("gmaeObject.x�� �� : %lf\n", gmaeObject.x);


	struct GameObject object = { 300,6.25 };

	printf("gmaeObject.health�� �� : %d\n", object.health);
	printf("gmaeObject.x�� �� : %lf\n", object.x);
	/*/
#pragma endregion

#pragma region ����Ʈ �е�

	// ��� ������ �޸𸮿� CPU�� ���� �� �ѹ��� ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	//printf("GameObject�� ũ�� : %d\n", sizeof(struct GameObject));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.

#pragma endregion

#pragma region ������ �Լ�

	int result = pow(5, 2);
	float decimal = 100.0f;

	// sqrt : ��ȯ�ϴ� ������ long double, double, float
	decimal = sqrt(decimal);

	printf("result ������ ��� : %d\n", result);
	printf("decimal ������ ��� : %f\n", decimal);

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	struct Player player = { 0,0 };
	struct Enemy enemy = { 10,20 };
	float distance = 0.0f;
	distance = sqrt(pow((player.x - enemy.x), 2) + pow((player.y - enemy.y), 2));

	printf("�� �������� �Ÿ� : %f\n", distance);

	// ����� ���
	/*/
	struct Player player = { 1.0f,2.0f };
	struct Enemy enemy = { 3.0f,4.0f };

	float x = player.x - enemy.x;
	float y = player.y - enemy.y;

	double distance = sqrt(pow(x, 2) + pow(y, 2));

	printf("�� ������Ʈ ������ �Ÿ� : %lf\n", distance);
	/*/
#pragma endregion




	return 0;
}