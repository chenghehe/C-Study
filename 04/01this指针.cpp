#include<iostream>

using namespace std;

//Ϊʲô��thisָ�룿��
//1.Ϊ�˽�����Ƴ�ͻ
//2.���ض������� return *this;


//thisָ��ָ��	�����õĳ�Ա����	�����Ķ���
class Person
{
public:
	//������Ƴ�ͻ
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
