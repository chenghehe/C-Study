#include<iostream>
#include<string>
#include<stdlib.h>		//�����
#include<ctime>

using namespace std;

int main() {

	////����1��100�����
	//int num = rand() % 100 + 1;
	//cout << "num��ֵ��" << num << endl;

	////������������  ���õ�ǰϵͳʱ���������������ֹÿ���������һ��
	//srand((unsigned int)time(NULL));
	//num = rand() % 100 + 1;
	//cout << "num��ֵ��" << num << endl;

#pragma region ˮ�ɻ���

	/*int num = 100;
	int a = 0;
	int b = 0;
	int c = 0;
	do
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a * a * a + b * b * b + c * c * c == num)
			cout << num << endl;
		num++;
	} while (num <= 999);*/

	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "x" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}*/

#pragma endregion ˮ�ɻ���


	//����
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "��������ռ�õ��ڴ�ռ䣺" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ�õ��ڴ�ռ䣺" << sizeof(arr[0]) << endl;
	cout << "����ĸ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "������׵�ַΪ��" << arr << endl;
	cout << "������׵�ַΪ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�صĵ�ַΪ��" << (int)arr[0] << endl;
	cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << (int)arr[1] << endl;


	system("pause");
}