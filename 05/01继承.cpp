//#include<iostream>
//
//using namespace std;
//
//
////继承方式分为：
////公共继承		父类的访问修饰符不变
////保护继承		把父类的成员改成保护权限
////私有继承		把父类的成员改成私有权限	
//class Base
//{
//public:
//	void Top() {
//		cout << "头部" << endl;
//	}
//
//	void Bottom() {
//		cout << "底部" << endl;
//	}
//private:
//
//};
//
//
//
//class Java :public Base		//继承base公共成员
//{
//public:
//	void Body() {
//		cout << "Java中部" << endl;
//	}
//private:
//
//};
//
//class CPP :public Base		//继承base公共成员
//{
//public:
//	void Body() {
//		cout << "C++中部" << endl;
//	}
//private:
//
//};
//
//int main() {
//
//	Java java;
//	java.Top();
//	java.Body();
//	java.Bottom();
//
//	cout << "----------------------" << endl;
//
//	CPP cpp;
//	cpp.Top();
//	cpp.Body();	
//	cpp.Bottom();
//
//	system("pause");
//}