//#include<iostream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//
//	//this 指针本质	是指针常量	指针的指向是不可以修改的
//	//const Person * const this
//	//常函数
//	void showPerson() const {
//		//this->m_A = 100;	//不允许修改
//
//		this->m_B = 200;	//特殊变量，可以修改
//
//		//this = NULL;	//this指针不建议修改指针的指向的
//	}
//
//	void func() {
//		//m_A = 100;
//	}
//
//	int m_A;
//	mutable	int m_B;		//特殊变量，即使在常函数中，也可以修改这个值
//private:
//
//};
//
//int main() {
//	//Person* p = NULL;
//	//p->showName();		//空指针可以调用成员函数
//	//p->showAge();		//空指针可以调用成员函数，无法调用成员变量，否则报错
//
//	const Person p;
//
//	/// <summary>
//	/// 常对象只能调用常函数
//	/// </summary>
//	/// <returns></returns>
//	p.showPerson();	
//	//p.func();		//无法调用普通成员函数，因为普通成员函数可以修改属性
//
//
//
//	system("pause");
//}
