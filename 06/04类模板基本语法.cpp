#include <iostream>

using namespace std;

//ģ���������࣬������ģ��
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
		cout << "������" << m_Name << endl;
		cout << "���䣺" << m_Age << endl;
	}
};

void test() {
	//��ģ����ã���Ҫָ��ģ��������ͣ���֧���Զ��ƶ����ͣ�ֻ������ʽָ������
	Person<string, int> p("�Ǻ���", 18);
	p.show();

	//��ģ���ڲ����б��п�����Ĭ�ϲ���������ģ�岻������Ĭ�ϲ���
	Person<string, int> p1("������");
	p1.show();
}

int main() {
	test();
	system("pause");
}