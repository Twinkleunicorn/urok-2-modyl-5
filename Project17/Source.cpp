#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>
void task1()
{
	int a[21] = { 1 };
	for (size_t i = 1; i < 21; i++)
	{
		a[i] = 50 + rand() % 50;
		printf("�������� ���� %d ��������:%d\n", i, a[i]);
	}
}
void task3()
{

}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	int flag;

	do
	{
		system("cls");

		printf("������� ����� ������: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		/*case 4:
		{
			task4();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		case 6:
		{
			task6();
		}
		break;
		case 7:
		{
			task7();
		}
		break;
		case 8:
		{
			task8();
		}
		break;*/
		default:
			break;
		}

		printf("������ ����������?1/0\n");
		scanf_s("%d", &flag);

	} while (flag == 1);
}