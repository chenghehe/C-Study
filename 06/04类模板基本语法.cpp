#include <iostream>

using namespace std;

//模板后紧跟着类，就是类模板
template <class NameType, class AgeType>
class Person {

public:
	Person(NameType name, AgeType age = 999) {
		m_Name = name;
		m_Age = age;
	}
	NameType m_Name;
	AgeType m_Age;

	void show() {
		cout << "姓名：" << m_Name << endl;
		cout << "年龄：" << m_Age << endl;
	}
};

void test() {
	//类模板调用，需要指定模板参数类型，不支持自动推断类型，只能用显式指定类型
	Person<string, int> p("呵呵哒", 18);
	p.show();

	//类模板在参数列表中可以有默认参数，函数模板不允许有默认参数
	Person<string, int> p1("哈哈哈");
	p1.show();
}

int main() {
	test();
	system("pause");
}