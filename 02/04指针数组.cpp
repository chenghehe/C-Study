//#include<iostream>
//
//using namespace std;
//
///// <summary>
///// ����ֵ���滻
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
///// ð������
///// </summary>
///// <param name="arr">�����׵�ַ</param>
///// <param name="len">���鳤��</param>
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
//	//int* p = arr;		//arr��������׵�ַ����һ��Ԫ�صĵ�ַ
//	////cout << *p << endl;	//��ӡ��һ��Ԫ��
//
//	////p++;
//	////cout << *p << endl;	//�ڶ���Ԫ��
//
//	////ѭ�����
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//{
//	//	cout << *p << endl;
//	//	p++;
//	//}
//
//	/*int a = 10;
//	int b = 20;
//	EitElenemt(&a, &b);
//	cout << "a��ֵ��" << a << endl;
//	cout << "b��ֵ��" << b << endl;*/
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