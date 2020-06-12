//#include<iostream>
//
//using namespace std;
//
//
//int* func() {
//	/// <summary>
//	/// 利用new关键字	可以将数据开辟到堆区
//	///	指针	本质也是局部变量，放在栈区上指针保存的数据放在堆区
//	/// </summary>
//	/// <returns></returns>
//	int* p = new int(100);
//
//	delete p;		//释放内存空间，这样就无法在访问改地址
//	return p;
//}
//int main() {
//
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 100 + i;
//	}
//	for (int i = 0; i < /*sizeof(arr)/sizeof(arr[i])*/10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	delete[]arr;		//释放数据内存空间，需要加上[]
//	for (int i = 0; i < /*sizeof(arr)/sizeof(arr[i])*/10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	//在堆区开辟数据
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//
//
//	system("pause");
//
//}
