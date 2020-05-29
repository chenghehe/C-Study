//#include<iostream>
//
//using namespace std;
//
///// <summary>
///// 变量值的替换
///// </summary>
///// <param name="a"></param>
///// <param name="b"></param>
//void EitElenemt(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
///// <summary>
///// 冒泡排序
///// </summary>
///// <param name="arr">数组首地址</param>
///// <param name="len">数组长度</param>
//void bubbleSort(int* arr, int len) {
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,6,5,2,8,3,1,2,5,33,69,7,5521,469,75,93 };
//
//	//int* p = arr;		//arr是数组的首地址，第一个元素的地址
//	////cout << *p << endl;	//打印第一个元素
//
//	////p++;
//	////cout << *p << endl;	//第二个元素
//
//	////循环输出
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	cout << *p << endl;
//	//	p++;
//	//}
//
//	/*int a = 10;
//	int b = 20;
//	EitElenemt(&a, &b);
//	cout << "a的值：" << a << endl;
//	cout << "b的值：" << b << endl;*/
//
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("pause");
//}