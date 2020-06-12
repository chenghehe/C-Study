#include<iostream>
#include<string>
#include "Student.h"

using namespace std;

const double PI = 3.14;

/// <summary>
/// 圆的对象/类
/// </summary>
class Circular {

	/// <summary>
	/// 访问修饰符
	/// </summary>
public:

	double radius;

	double calculation() {
		return 2 * PI * radius;
	}

};

//class Student {
//
//public:
//	int id;
//	string name;
//
//	void Show() {
//		cout << "学号：" << id << "姓名：" << name << endl;
//	}
//};

int main() {
	//使用圆类实例化一个对象，不需要new？？？
	Circular ci;		//声明实例化一个圆对象
	ci.radius = 10;
	cout << "圆的周长为：" << ci.calculation() << endl;

	Student st;
	st.setAge(18);
	st.setName("呵呵哒");
	cout << "年龄：" << st.getAge() ;
	cout << "姓名：" << st.getName() << endl;
	system("pause");
}