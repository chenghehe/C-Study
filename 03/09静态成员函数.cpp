//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//静态成员函数	静态成员函数也是有访问权限的可以设置为私有的private
//	static void  func() {
//		m_A = 100;	//静态成员函数可以访问静态成员变量
//		//m_B = 20;	//静态成员函数不可以访问非静态成员变量，因为无法区分到底是哪个对象的成员变量
//		cout << "静态函数func的调用！" << endl;
//	}
//
//	static int m_A;		//静态成员变量
//	int m_B;			//非静态成员变量
//
//private:
//	static void func2() {
//		cout << "静态函数func2的调用！" << endl;
//	}
//};
//
//int Person::m_A = 0;
//
//void test() {
//	//1.通过对象访问
//	Person p;
//	p.func();
//
//	//2.通过类名访问
//	Person::func();
//	//Person::func2();		//类外无法访问私有的静态成员函数
//
//}
//int main() {
//
//	test();
//	system("pause");
//}
