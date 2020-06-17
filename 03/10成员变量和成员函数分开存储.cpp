#include<iostream>
using namespace std;

class Person
{
public:
	static int m_A;		//静态成员变量，不属于本类上成员，所以不占用本类的内存空间


	int m_B;			//非静态成员变量	属于本类对象上	占用四个字节

	void func() {		//非静态成员函数	不属于类的对象上

	}

	static void func2() {	//静态成员函数	不属于类的对象上

	}


	//只有非静态成员变量才属于类对象上的，其他都不属于
};

int main() {
	Person p;
	//空对象占用一个字节
	//如果是空对象，c++编译器会分配一个字节，如果不是空对象则是实际占用的大小
	cout << "sizeof(p) =" << sizeof(p) << endl;




	system("pause");
}
