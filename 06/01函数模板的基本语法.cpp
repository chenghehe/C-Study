//#include <iostream>
//
//using namespace std;
//
////实现两个数交换的函数
//void swap(int& a, int& b) {
//	int c = b;
//	b = a;
//	a = c;
//}
//
////函数模板定义	，也成为泛型编程
//template<typename T>		//typename表面其后面的符号是一种数据类型，可以用class代替
////T	通用的数据类型，名称可以替换，通常为大写字段
//
//void mySwap(T& a, T& b) {
//	T c = b;
//	b = a;
//	a = c;
//}
//
//void test() {
//	int a = 10;
//	int b = 20;
//	//swap(a, b);	//普通函数实现
//	mySwap(a, b);		//函数模板实现，隐式实现，隐式推断，编译器推断
//	mySwap<int>(a, b);		//函数模板实现，显式实现,告诉编译器T是int类型
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//
//int main() {
//
//	test();
//	system("pause");
//}