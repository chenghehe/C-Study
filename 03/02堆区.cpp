//#include<iostream>
//
//using namespace std;
//
//
//int* func() {
//	/// <summary>
//	/// ����new�ؼ���	���Խ����ݿ��ٵ�����
//	///	ָ��	����Ҳ�Ǿֲ�����������ջ����ָ�뱣������ݷ��ڶ���
//	/// </summary>
//	/// <returns></returns>
//	int* p = new int(100);
//
//	delete p;		//�ͷ��ڴ�ռ䣬�������޷��ڷ��ʸĵ�ַ
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
//	delete[]arr;		//�ͷ������ڴ�ռ䣬��Ҫ����[]
//	for (int i = 0; i < /*sizeof(arr)/sizeof(arr[i])*/10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	//�ڶ�����������
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
