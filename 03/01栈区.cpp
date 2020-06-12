//#include<iostream>
//
//using namespace std;
//
////栈区数据注意事项	--	不要反悔局部变量的地址
////栈区的数据由编译器管理开辟和释放
//int* func(int b) {		//形参数据也会存放在栈区
//	b = 200;
//	int a = 10;		//局部变量存放在栈区，栈区的数据在函数执行完自动释放
//	return &a;		//返回局部变量的地址
//}
//int main() {
//	int* p = func(60);	//接收返回值
//	cout << *p << endl;		//第一次可以打印正确的值，是因为编译器做了保留
//	cout << *p << endl;		//第二次无法打印正确的值
//	system("pause");
//
//}
