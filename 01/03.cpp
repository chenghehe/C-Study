//#include<iostream>
//#include<string>
//#include<stdlib.h>		//�����
//#include<ctime>
//
//using namespace std;
//
//int main() {
//
//	////����1��100�����
//	//int num = rand() % 100 + 1;
//	//cout << "num��ֵ��" << num << endl;
//
//	////������������  ���õ�ǰϵͳʱ���������������ֹÿ���������һ��
//	//srand((unsigned int)time(NULL));
//	//num = rand() % 100 + 1;
//	//cout << "num��ֵ��" << num << endl;
//
//#pragma region ˮ�ɻ���
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
//#pragma endregion ˮ�ɻ���
//
//
//	////����
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//cout << "��������ռ�õ��ڴ�ռ䣺" << sizeof(arr) << endl;
//	//cout << "ÿ��Ԫ��ռ�õ��ڴ�ռ䣺" << sizeof(arr[0]) << endl;
//	//cout << "����ĸ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
//	//cout << "������׵�ַΪ��" << arr << endl;
//	//cout << "������׵�ַΪ��" << (int)arr << endl;
//	//cout << "�����е�һ��Ԫ�صĵ�ַΪ��" << (int)&arr[0] << endl;
//	//cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << (int)&arr[1] << endl;
//
//	//ȡ�����ֵ
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
//	//������β����
//	/*int temp = 0;
//	int startIndex = 0;
//	int endIndex = lenght - 1;
//	temp = arr[endIndex];
//	arr[endIndex] = arr[startIndex];
//	arr[startIndex] = temp;
//	cout << "����ǰ��" << endl;
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
//	cout << "���ú�" << endl;
//	for (int i = 0; i < lenght; i++)
//	{
//		cout << arr[i] << endl;
//	}*/
//
//	//ð������
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