//#include <iostream>
//
//using namespace std;
//
////ʵ�������������ĺ���
//void swap(int& a, int& b) {
//	int c = b;
//	b = a;
//	a = c;
//}
//
////����ģ�嶨��	��Ҳ��Ϊ���ͱ��
//template<typename T>		//typename���������ķ�����һ���������ͣ�������class����
////T	ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д�ֶ�
//
//void mySwap(T& a, T& b) {
//	T c = b;
//	b = a;
//	a = c;
//}
//
//void test() {
//	int a = 10;
//	int b = 20;
//	//swap(a, b);	//��ͨ����ʵ��
//	mySwap(a, b);		//����ģ��ʵ�֣���ʽʵ�֣���ʽ�ƶϣ��������ƶ�
//	mySwap<int>(a, b);		//����ģ��ʵ�֣���ʽʵ��,���߱�����T��int����
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//
//int main() {
//
//	test();
//	system("pause");
//}