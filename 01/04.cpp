#include<iostream>

using namespace std;

int main() {

	//��λ����
	//1.��һ��������ʽ
	//int arr[2][3];
	//arr[0][0] = 1;
	//arr[0][1] = 2;
	//arr[0][2] = 3;
	//arr[1][0] = 4;
	//arr[1][1] = 5;
	//arr[1][2] = 6;

	/*for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << endl;
		}
	}*/

	//2.�ڶ���������ʽ
	//int arr1[2][3] = { {1,2,3},{4,5,6} };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr1[i][j] << endl;
	//	}
	//}

	////3.������������ʽ
	//int arr1[2][3] = { 1,2,3,4,5,6 };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr1[i][j] << endl;
	//	}
	//}

	//4.��4��������ʽ
	/*int arr1[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << endl;
		}
	}*/


	//int arr[2][3] = { {1,2,3},{4,5,6} };
	//cout << "��ά����ռ�õ��ڴ�ռ䣺" << sizeof(arr) << endl;
	//cout << "��ά�����һ��ռ�õ��ڴ�ռ䣺" << sizeof(arr[0]) << endl;
	//cout << "��ά�����һ�е�һ�и�Ԫ��ռ�õ��ڴ�ռ䣺" << sizeof(arr[0][0]) << endl;
	//cout << "��ά������������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//cout << "��ά������������" << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << "��ά������׵�ַ��" << (int)arr << endl;
	//cout << "��ά�����һ�е��׵�ַ��" << (int)arr[0] << endl;
	//cout << "��ά����ڶ��е��׵�ַ��" << (int)arr[1] << endl;
	//cout << "��ά�����һ��Ԫ�ص��׵�ַ��" << (int)&arr[0][0] << endl;
	//cout << "��ά����ڶ���Ԫ�ص��׵�ַ��" << (int)&arr[0][1] << endl;


	int arr1[3][3] = { {100,100,100},{90,50,70},{60,80,75} };
	int hanglength = (sizeof(arr1) / sizeof(arr1[0]));		//����
	int lielength = sizeof(arr1[0]) / sizeof(arr1[0][0]);		//����
	//����ÿ���ܺ�
	for (int i = 0; i < hanglength; i++)
	{
		int temp = 0;
		for (int j = 0; j < lielength; j++)
		{
			temp += arr1[i][j];
		}
		cout << temp << endl;
	}
	system("pause");
}