//#include<iostream>
//#include<string>
//#include "Student.h"
//
//using namespace std;
//
//const double PI = 3.14;
//
///// <summary>
///// 圆的对象/类
///// </summary>
//class Circular {
//
//	/// <summary>
//	/// 访问修饰符
//	/// </summary>
//public:
//
//	double radius;
//
//	double calculation() {
//		return 2 * PI * radius;
//	}
//
//};
//
//class Person {
//public:
//	Person() {
//		//构造函数
//		//声明，实例化时执行
//		cout << "构造函数执行了！" << endl;
//	};
//
//	//方法体执行 完时会执行析构函数
//	~Person()
//	{
//		//析构函数
//		//对象销毁时执行
//		cout << "析构函数执行了！" << endl;
//	};
//};
//
//void test() {
//	Person p1;
//}	//方法执行结束会执行析构函数
//
////class Student {
////
////public:
////	int id;
////	string name;
////
////	void Show() {
////		cout << "学号：" << id << "姓名：" << name << endl;
////	}
////};
//
//int main() {
//	test();
//
//	//使用圆类实例化一个对象，不需要new？？？
//	Circular ci;		//声明实例化一个圆对象
//	ci.radius = 10;
//	cout << "圆的周长为：" << ci.calculation() << endl;
//
//	Student st;
//	st.setAge(18);
//	st.setName("呵呵哒");
//	cout << "年龄：" << st.getAge();
//	cout << "姓名：" << st.getName() << endl;
//	
//
//
//	Person p;
//
//	system("pause");
//}