#include<iostream>

using namespace std;

//为什么用this指针？：
//1.为了解决名称冲突
//2.返回对象本身用 return *this;


//this指针指向	被调用的成员函数	所属的对象
class Person
{
public:
	//解决名称冲突
	Person(int age) {
		this->age = age;
	};
	Person(const Person* p) {
		age = p->age;
	};
	Person& AddAge(Person p) {
		this->age += p.age;
		return *this;
	}

	int age;
private:

};

void test() {
	Person p(10);
	Person p2(p);
	p2.AddAge(p).AddAge(p).AddAge(p);

	cout << p2.age << endl;

}

int main() {
	test();

	system("pause");
}
