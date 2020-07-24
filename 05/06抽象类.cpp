//#include<iostream>
//
//using namespace std;
//
///// <summary>
///// 抽象计算器父类
///// </summary>
//class Base
//{
//public:
//	virtual void func() = 0;	//纯虚函数，当一个包含有纯虚函数时这个类就是抽象类
//private:
//
//};
//
///// <summary>
///// 加法计算类
///// </summary>
//class Client :public Base
//{
//public:
//	void func() {
//		cout << "Client" << endl;
//	}
//private:
//
//};
//
//
//void Test() {
//
//	//Base base;	//抽象类无法实例化对象
//	//new Base;	//抽象类无法实例化对象
//
//	Client client;	//不重写父类的抽象方法也无法实例化
//	Base* base = new Client;
//	base->func();
//}
//int main() {
//
//
//	Test();
//
//	system("pause");
//}