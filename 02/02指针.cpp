#include<iostream>

using namespace std;

int main() {
	int a = 10;

	//指针定义的语法：数据类型  *  指针变量名
	int* p;
	//让指针记录变量a的地址
	p = &a;		//建立关系
	cout << "a的占用内存空间的地址为：" << &a << endl;
	cout << "指针p的值为：" << p << endl;		//其实指针就是指向变量的内存地址

	//2.使用指针
	//可以通过解引用的方式找到指针指向的内存
	//指针前加*代表解引用，找到指针指向内存中的数据

	*p = 500;	//解引用，通过指针修改变量a的值
	cout << "a=：" << a << endl;
	cout << "*p：" << *p << endl;



	system("pause");
}