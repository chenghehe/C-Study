//#include<iostream>
//#include<string>
//#include<stdlib.h>		//随机数
//#include<ctime>
//
//using namespace std;
//
//int main() {
//
//	////生成1到100随机数
//	//int num = rand() % 100 + 1;
//	//cout << "num的值：" << num << endl;
//
//	////添加随机数种子  利用当前系统时间生成随机数，防止每次随机数都一样
//	//srand((unsigned int)time(NULL));
//	//num = rand() % 100 + 1;
//	//cout << "num的值：" << num << endl;
//
//#pragma region 水仙花数
//
//	/*int num = 100;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	do
//	{
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//		if (a * a * a + b * b * b + c * c * c == num)
//			cout << num << endl;
//		num++;
//	} while (num <= 999);*/
//
//	/*for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << i << "x" << j << "=" << i * j << "\t";
//		}
//		cout << endl;
//	}*/
//
//#pragma endregion 水仙花数
//
//
//	////数组
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//cout << "整个数组占用的内存空间：" << sizeof(arr) << endl;
//	//cout << "每个元素占用的内存空间：" << sizeof(arr[0]) << endl;
//	//cout << "数组的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	//cout << "数组的首地址为：" << arr << endl;
//	//cout << "数组的首地址为：" << (int)arr << endl;
//	//cout << "数组中第一个元素的地址为：" << (int)&arr[0] << endl;
//	//cout << "数组中第二个元素的地址为：" << (int)&arr[1] << endl;
//
//	//取出最大值
//	//int arr[] = { 300,500,600,700,200,560,950 ,650 };
//	//int lenght = sizeof(arr) / sizeof(arr[0]);
//	//int max = 0;
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	if (arr[i] > max)
//	//		max = arr[i];
//	//}
//	//cout << max << endl;
//
//	//数组首尾重置
//	/*int temp = 0;
//	int startIndex = 0;
//	int endIndex = lenght - 1;
//	temp = arr[endIndex];
//	arr[endIndex] = arr[startIndex];
//	arr[startIndex] = temp;
//	cout << "逆置前：" << endl;
//	for (int i = 0; i < lenght; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//
//	while (startIndex < endIndex)
//	{
//		temp = arr[endIndex];
//		arr[endIndex] = arr[startIndex];
//		arr[startIndex] = temp;
//		endIndex--;
//		startIndex++;
//	}
//	cout << "逆置后：" << endl;
//	for (int i = 0; i < lenght; i++)
//	{
//		cout << arr[i] << endl;
//	}*/
//
//	//冒泡排序
//	int arr[] = { 1,5,6,9,10,8,16,23,55,96,20,45,63,7,33,65,3 };
//	int lenght = sizeof(arr) / sizeof(arr[0]);
//	int temp = 0;
//	for (int i = 0; i < lenght; i++)
//	{
//		for (int j = 0; j < lenght - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < lenght; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("pause");
//}