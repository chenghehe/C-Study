//#include <iostream>
//
//using namespace std;
//
////1.如果函数模板和普通函数都可以实现，优先调用普通函数
////2.可以通过空模板参数列表强制调用函数模板
////3.函数模板也可以发生重载
////4.如果函数模板可以产生更好的匹配	优先调用函数模板
//
////最好不要同时出现普通函数和函数模板
//
//void func(int a, int b) {
//	cout << "普通函数调用" << endl;
//}
//
//
//template <class T>
//void func(T a, T b) {
//	cout << "函数模板的调用！" << endl;
//}
//
//template <class T>
//void func(T a, T b, T c) {
//	cout << "函数模板重载的调用！" << endl;
//}
//
//void test() {
//	int a = 10;
//	int b = 20;
//	func(a, b);		//调用普通函数
//	func<>(a, b);	//调用函数模板
//	func(a, b, 10);	//调用函数模板重载
//
//	char s1 = 'a';
//	char s2 = 'b';
//	func(s1, s2);		//更好的匹配函数模板，因为普通函数是int类型参数，需要转换，所以优先函数模板
//
//}
//
//int main() {
//
//	test();
//	system("pause");
//}