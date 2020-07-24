#include<iostream>

using namespace std;

//1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//2.如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//3.拥有纯虚析构函数的类也属于抽象类
class Base
{
public:

	//~Base() {
	//	cout << "Base虚构函数" << endl;
	//}

	virtual void Hello() = 0;

	//virtual ~Base() {		//虚析构函数，这样子类的虚构函数就会调用了
	//	cout << "Base虚构函数" << endl;
	//}

	//当类中包含纯虚析构函数时，这个类就属于抽象类，无法实例化对象
	virtual ~Base() = 0;	//纯虚析构函数，需要具体实现，子类的虚构函数会调用


private:

};
Base::~Base() {		//实现Base类的纯虚析构函数
	cout << "Base纯虚构函数" << endl;
}


class Client : public Base
{
public:
	Client(string name) {
		m_Name = new string(name);
	}
	void Hello() {
		cout << *m_Name << "向你问好！" << endl;
		//delete m_Name;
	}

	string* m_Name;

	~Client() {
		cout << "Client虚构函数" << endl;
		delete m_Name;
	}

private:

};


void Test() {

	Base* base = new Client("dogdog");		//无法调用子类的虚构函数
	base->Hello();
	delete base;



}
int main() {

	Test();

	system("pause");
}