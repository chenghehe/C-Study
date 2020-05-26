#include<iostream>
#include<string>
#include<stdlib.h>		//随机数
#include<ctime>

using namespace std;

int main() {

	////生成1到100随机数
	//int num = rand() % 100 + 1;
	//cout << "num的值：" << num << endl;

	////添加随机数种子  利用当前系统时间生成随机数，防止每次随机数都一样
	//srand((unsigned int)time(NULL));
	//num = rand() % 100 + 1;
	//cout << "num的值：" << num << endl;

#pragma region 水仙花数

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

#pragma endregion 水仙花数


	//数组
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "整个数组占用的内存空间：" << sizeof(arr) << endl;
	cout << "每个元素占用的内存空间：" << sizeof(arr[0]) << endl;
	cout << "数组的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "数组的首地址为：" << arr << endl;
	cout << "数组的首地址为：" << (int)arr << endl;
	cout << "数组中第一个元素的地址为：" << (int)arr[0] << endl;
	cout << "数组中第二个元素的地址为：" << (int)arr[1] << endl;


	system("pause");
}