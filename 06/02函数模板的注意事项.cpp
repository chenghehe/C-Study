#include <iostream>

using namespace std;

template<class T>		//typename������class����
//T	ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д�ֶ�

void mySwap(T& a, T& b) {
	T c = b;
	b = a;
	a = c;
}

//ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template <class T>	//�����Ǻ���ģ�廹����ģ����class��û��
void func() {	//û��ʹ��T��Ҳ�����ڵ��õ�ʱ����߱�����T��ʲô���Ͳſ��Ե��øú���
	cout << "func�ĵ��ã�" << endl;
}

//1.�Զ������ƶϣ������ƶϳ�һ�µ���������T�ſ���ʹ��
void test() {
	int a = 10;
	int b = 20;
	string s = "string";

	//mySwap(a, s);			//�����ƶϲ���һ�µ�T����

	//func();	//�޷�����
	func<int>();	//�޷����ã�����T��ʲô���ͣ��ſ���ʹ��

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

int main() {

	test();
	system("pause");
}