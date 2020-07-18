#include<iostream>

using namespace std;

//1.加号运算符重载
//1.1 成员函数重载+号
//1.2 全局函数重载+号

class Person
{
public:
	Person();



	Person(int age, int height) {
		m_Age = new int(age);
		m_Height = new int(height);
	}

	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
		}
		if (m_Height != NULL) {
			delete m_Height;
		}


	};

	//Person operator+(Person& p) {
	//	Person temp;
	//	temp.m_Age = this->m_Age + p.m_Age;
	//	temp.m_Height = this->m_Height + p.m_Height;
	//	return temp;
	//}

	int* m_Age;
	int* m_Height;

	//重载前置递增++运算符，返回引用为了一直对一个数进行操作
	Person& operator++() {
		//先++
		m_Age++;
		m_Height++;
		//在返回
		return *this;
	}

	//重载后置递增++运算符，返回引用为了一直对一个数进行操作
	Person operator++(int) {
		Person temp = *this;	//记录本身当前的值，然后让本身的值+1，但是返回的是以前的值，达到返回后++
		m_Age++;
		m_Height++;
		return temp;
	}

	//赋值运算符重载
	Person& operator=(Person& p) {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		m_Age = new int(*p.m_Age);
		m_Height = new int(*p.m_Height);
		return *this;
	}

	//函数重载/()重载，仿函数
	void operator()(int a, int b) {
		cout << "参数1的值：" << a << "参数2的值：" << b << endl;
	}
private:

};

Person::Person()
{
}
//
//Person::~Person()
//{
//}

Person operator+(Person& p1, Person& p2) {
	Person temp;
	//temp.m_Age = p1.m_Age + p2.m_Age;
	//temp.m_Height = p1.m_Height + p2.m_Height;
	return temp;
}

//<<左移运算符重载
//一般不会利用成员函数重载<<运算符，因为无法实现cout在左侧
ostream& operator<<(ostream& cout, Person& p) {
	cout << "m_Age:" << *p.m_Age << endl;
	cout << "m_Height:" << *p.m_Height << endl;
	return cout;
}

////++前置递增运算符重载
//Person operator++(Person& p) {
//	Person temp;
//	temp.m_Age = p.m_Age++;
//	temp.m_Height = p.m_Height++;
//	return temp;
//}


class MyAdd
{
public:
	MyAdd();
	~MyAdd();

	/// <summary>
	/// 函数重载，仿函数
	/// </summary>
	/// <param name="a"></param>
	/// <param name="b"></param>
	/// <returns></returns>
	int operator ()(int a, int b) {
		return a + b;
	}
private:

};

MyAdd::MyAdd()
{
}

MyAdd::~MyAdd()
{
}

int main() {

	//Person p;
	//p.m_Age = 10;
	//p.m_Height = 20;

	//Person p1;
	//p1.m_Age = 10;
	//p1.m_Height = 20;

	//Person p3 = p + p1;

	//cout << p3.m_Age << endl << p3.m_Height << endl;

	//cout << p3;

	//cout << ++p3;
	//p3++;
	//cout << p3 << endl;


	Person p5(10, 20);
	Person p6 = p5;
	cout << p6;

	////两者相等
	//p6(50, 100);

	//匿名对象，
	//Person()(50, 100);

	//匿名对象
	int result = MyAdd()(100, 100);
	cout << result << endl;

	system("pause");
}

