//#include<iostream>
//
//using namespace std;
//
//void swap(int& a, int& b) {		//引用传递
//	int temp = b;
//	b = a;
//	a = temp;
//}
//
//int main() {
//
//	//引用的基本语法
//	//数据类型 &变量名 = 引用的变量
//
//	//引用必须初始化	int& b;这是不正确的
//	//引用初始化后就可以改变了
//
//	int a = 10;
//	int& b = a;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	b = 200;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	a = 50000;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "=======================" << endl;
//
//	int c = 300;
//	int& d = c;
//	d = b;		//这是赋值操作，而不是更改引用
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "=======================" << endl;
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//
//	cout << "=======================" << endl;
//	int sa = 10;
//	int sb = 20;
//	swap(sa, sb);
//	cout << "sa=" << sa << endl;
//	cout << "sb=" << sb << endl;
//
//
//	system("pause");
//}
