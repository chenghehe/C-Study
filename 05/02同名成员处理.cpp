#include<iostream>

using namespace std;

class Base
{
public:
	Base() {
		m_A = 1;
	}

	void func() {
		cout << "Base下的func调用" << endl;
	}

	int m_A;
private:

};


class Client :public Base		//继承base公共成员
{
public:
	Client() {
		m_A = 2;
	}
	int m_A;		//父类也有m_A

	void func() {
		cout << "Client下的func调用" << endl;
	}
private:

};


int main() {

	Client c;
	cout << c.m_A << endl;		//如果同名，优先使用子类的

	//如果通过子类对象访问到父类中同名成员，需要加上作用域，如果同名子类会隐藏掉父类所有同名类型，访问必须加上作用域，否则访问不到
	cout << c.Base::m_A << endl;

	c.func();		//如果同名，优先使用子类的

	c.Base::func();		//加上作用域调用

	system("pause");
}