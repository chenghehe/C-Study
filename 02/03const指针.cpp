//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	int a = 10;
//	int b = 10;
//
//	////const修饰的指针为常量指针，常量指针的特点：可以修改内存指向，但是不可以修改内存指向的值
//	////const	int* p = &a;
//	//const	int* p = &a;	//这样也可以
//
//	////p = &b;		//修改内存指向，没有问题
//	//	//*p = 20;		//解引用，修改值，出错了
//
//	//指针常量，指针常量的特点：不可以修改内存指向，可以修改内存指向的值
//	//int* const p = &a;
//	////p = &b;		//报错	不可以修改内存指向地址
//	//*p = 20;		//正确的，可以修改值
//
//	////常量指针常量，都不可以修改
//	//const int* const p = &a;
//	//p = &b;		//错误
//	//*p = 30;	//错误
//
//
//	system("pause");
//}