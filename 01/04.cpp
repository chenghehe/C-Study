#include<iostream>

using namespace std;

int main() {

	//二位数组
	//1.第一种声明方式
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

	//2.第二种声明方式
	//int arr1[2][3] = { {1,2,3},{4,5,6} };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr1[i][j] << endl;
	//	}
	//}

	////3.第三种声明方式
	//int arr1[2][3] = { 1,2,3,4,5,6 };
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr1[i][j] << endl;
	//	}
	//}

	//4.第4种声明方式
	/*int arr1[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << endl;
		}
	}*/


	//int arr[2][3] = { {1,2,3},{4,5,6} };
	//cout << "二维数组占用的内存空间：" << sizeof(arr) << endl;
	//cout << "二维数组第一行占用的内存空间：" << sizeof(arr[0]) << endl;
	//cout << "二维数组第一行第一列个元素占用的内存空间：" << sizeof(arr[0][0]) << endl;
	//cout << "二维数组列数量：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//cout << "二维数组行数量：" << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << "二维数组的首地址：" << (int)arr << endl;
	//cout << "二维数组第一行的首地址：" << (int)arr[0] << endl;
	//cout << "二维数组第二行的首地址：" << (int)arr[1] << endl;
	//cout << "二维数组第一个元素的首地址：" << (int)&arr[0][0] << endl;
	//cout << "二维数组第二个元素的首地址：" << (int)&arr[0][1] << endl;


	int arr1[3][3] = { {100,100,100},{90,50,70},{60,80,75} };
	int hanglength = (sizeof(arr1) / sizeof(arr1[0]));		//行数
	int lielength = sizeof(arr1[0]) / sizeof(arr1[0][0]);		//列数
	//计算每行总和
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