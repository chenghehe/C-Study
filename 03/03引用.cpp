//#include<iostream>
//
//using namespace std;
//
//void swap(int& a, int& b) {		//���ô���
//	int temp = b;
//	b = a;
//	a = temp;
//}
//
//int main() {
//
//	//���õĻ����﷨
//	//�������� &������ = ���õı���
//
//	//���ñ����ʼ��	int& b;���ǲ���ȷ��
//	//���ó�ʼ����Ϳ��Ըı���
//
//	int a = 10;
//	int& b = a;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	b = 200;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	a = 50000;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "=======================" << endl;
//
//	int c = 300;
//	int& d = c;
//	d = b;		//���Ǹ�ֵ�����������Ǹ�������
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "=======================" << endl;
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//
//	cout << "=======================" << endl;
//	int sa = 10;
//	int sb = 20;
//	swap(sa, sb);
//	cout << "sa=" << sa << endl;
//	cout << "sb=" << sb << endl;
//
//
//	system("pause");
//}
