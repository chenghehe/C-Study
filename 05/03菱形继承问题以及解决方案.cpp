//#include<iostream>
//
//using namespace std;
//
//class Base
//{
//public:
//	Base() {
//		m_A = 1;
//	}
//	int m_A;
//private:
//
//};
//
//class Base2 :public virtual Base {
//public:
//	Base2() {
//		m_A = 10;
//	}
//};
//
//class Base3 :public virtual Base {		//虚继承可以解决菱形继承问题
//public:
//	Base3() {
//		m_A = 20;
//	}
//};
//
///// <summary>
/////菱形继承！
///// </summary>
//class Client :public Base3, public Base2			//继承base公共成员
//{
//public:
//
//private:
//
//};
//
//
//int main() {
//
//	Client c;
//	cout << c.Base2::m_A << endl;		//重复继承了	m_A		,通过作用域可以解决问题
//	cout << c.Base3::m_A << endl;		//重复继承了	m_A		,通过作用域可以解决问题
//	cout << c.m_A << endl;		//虚继承，同名只会继承一个，继承最后一个
//
//
//
//
//	system("pause");
//}