//#include<iostream>
//
//using namespace std;
//
//class Person {
//public:
//	Person() {
//		cout << "Person默认无参构造函数调用" << endl;
//	}
//
//	Person(int age) {
//		p_Age = age;
//		cout << "Person有参构造函数调用" << endl;
//	}
//
//	/*Person(const Person& p) {
//		p_Age = p.p_Age;
//		cout << "Person拷贝构造函数调用" << endl;
//	}*/
//
//	~Person() {
//		cout << "Person析构函数调用" << endl;
//	}
//
//public:
//	int p_Age;
//};
//
////构造函数的调用规则
////1.创建一个类，c++编译器会给每个类都添加至少三个函数
//		//默认构造函数	（空实现）
//		//析构函数		（空实现）
//		//拷贝构造		（值拷贝）
//
//
//void test() {
//	Person p;
//	p.p_Age = 18;
//	Person p1(p);
//
//	cout << "p1的年龄为：" << p1.p_Age << endl;
//}
//
//int main() {
//	test();
//	
//
//	system("pause");
//}