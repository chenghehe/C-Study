#include<iostream>

using namespace std;

class Base
{
public:
	Base() {
		m_A = 1;
	}

	void func() {
		cout << "Base�µ�func����" << endl;
	}

	int m_A;
private:

};


class Client :public Base		//�̳�base������Ա
{
public:
	Client() {
		m_A = 2;
	}
	int m_A;		//����Ҳ��m_A

	void func() {
		cout << "Client�µ�func����" << endl;
	}
private:

};


int main() {

	Client c;
	cout << c.m_A << endl;		//���ͬ��������ʹ�������

	//���ͨ�����������ʵ�������ͬ����Ա����Ҫ�������������ͬ����������ص���������ͬ�����ͣ����ʱ�����������򣬷�����ʲ���
	cout << c.Base::m_A << endl;

	c.func();		//���ͬ��������ʹ�������

	c.Base::func();		//�������������

	system("pause");
}