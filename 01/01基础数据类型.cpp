//#include <iostream>
//using namespace std;
//#include <string>	//使用C++字符串需要引入string头部文件
//
////定义常量的两种方式
////1.#define 宏常量
////2.const修饰的常量
//
//	//宏常量
//#define Day 30
//
//int main() {
//
//	//x修饰的常量
//	const int m = 4;
//
//
//	//输出hello word..
//	/*cout << "一个月有" << Day << "天" << endl;
//	cout << "一个月有" << Day << "星期" << endl;*/
//
//	//整型		区别在于 所占的内存空间大小不一样
//	//1.短整型
//	short num = 1;
//
//	//2.整型
//	int num1 = 20;
//
//	//3.长整型
//	long num2 = 5;
//
//	//4.长长整型
//	long long num3 = 50;
//
//	//long int num4 = 60;
//
//	/*cout << "short 占的内存空间:" << sizeof(short) << endl;
//	cout << "int 占的内存空间:" << sizeof(int) << endl;
//	cout << "long 占的内存空间:" << sizeof(long) << endl;
//	cout << "long long 占的内存空间:" << sizeof(long long) << endl;*/
//
//	//float f1 = 3.1415926f;		//单精度	4字节
//	//double d1 = 3.1415926;		//双精度	8字节
//	////默认情况下 输出一个小数会显示出6位有效数字
//	//cout << "f1：" << f1 << endl;
//	//cout << "float占用的内存空间：" << sizeof(float) << endl;
//	//cout << "d1：" << d1 << endl;
//	//cout << "double占用的内存空间：" << sizeof(d1) << endl;
//
//	////科学计数法
//	//float f2 = 3e2;		//3*10^2
//	//float f3 = 3e-2;	//3*0.1^2
//	//cout << "f2：" << f2 << endl;
//	//cout << "f3：" << f3 << endl;
//
//
//	////字符类型
//	//char ch = 'A';
//	//cout << "ch：" << ch << endl;
//	//cout << "char占用的内存空间：" << sizeof(ch) << endl;
//
//	////字符型变量对应的ASCII编码
//	///*a：97;
//	//A : 65;*/
//	//cout << "ch对应的ASCII编码：" << (int)ch << endl;
//
//
//	////字符串
//	////1.C风格字符串
//	////注意事项	1.char 字符串名[]
//	////			2.等号 后面要用双引号包起来字符串
//	//char str[] = "hello word";
//	//cout << str << endl;
//
//	////2.C++风格字符串
//	//string str1 = "C++字符串";
//	//cout << str1 << endl;
//
//	//bool类型
//	bool b = true;
//	cout << b << endl;
//
//
//	system("pause");
//	return 0;
//}