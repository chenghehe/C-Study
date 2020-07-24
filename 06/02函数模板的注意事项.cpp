#include <iostream>

using namespace std;

template<class T>		//typename可以用class代替
//T	通用的数据类型，名称可以替换，通常为大写字段

void mySwap(T& a, T& b) {
	T c = b;
	b = a;
	a = c;
}

//模板必须要确定出T的数据类型，才可以使用
template <class T>	//无论是函数模板还是类模板用class都没错！
void func() {	//没有使用T，也必须在调用的时候告诉编译器T是什么类型才可以调用该函数
	cout << "func的调用！" << endl;
}

//1.自动类型推断，必须推断出一致的数据类型T才可以使用
void test() {
	int a = 10;
	int b = 20;
	string s = "string";

	//mySwap(a, s);			//错误，推断不出一致的T类型

	//func();	//无法调用
	func<int>();	//无法调用，告诉T是什么类型，才可以使用

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

int main() {

	test();
	system("pause");
}