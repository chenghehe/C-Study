//#include<iostream>
//
//using namespace std;
//
//class Person {
//public:
//	Person() {
//		cout << "Person无参构造函数调用" << endl;
//	}
//
//	Person(int age) {
//		p_Age = age;
//		cout << "Person有参构造函数调用" << endl;
//	}
//
//	Person(const Person& p) {
//		p_Age = p.p_Age;
//		cout << "Person拷贝构造函数调用" << endl;
//	}
//
//	~Person() {
//		cout << "Person析构函数调用" << endl;
//	}
//
//private:
//	int p_Age;
//};
//
//int main() {
//
//	////括号法，常用
//	//Person p1;			//调用无参构造函数
//	//Person p2(20);		//调用有参构造函数
//	//Person p3(p2);		//调用拷贝构造函数
//
//	//Person p1();		//不能加括号，如果加上括号就说明他是一个函数声明
//	//void func();		//函数声明
//
//	////显示法
//	//Person p1;					//无参构造函数
//	//Person p2 = Person(10);		//有参构造函数
//	//Person p3 = Person(p2);		//拷贝构造函数
//
//	//Person(10);						//匿名对象，执行完直接销毁
//
//	//3.隐式转换法
//	Person p4 = 10;		//有参构造，相当于写了	Person p4 = Person(10)
//	Person p5 = p4;		//拷贝构造
//
//
//
//
//
//	system("pause");
//}