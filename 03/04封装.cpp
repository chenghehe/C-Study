#include<iostream>
#include<string>
#include "Student.h"

using namespace std;

const double PI = 3.14;

/// <summary>
/// Բ�Ķ���/��
/// </summary>
class Circular {

	/// <summary>
	/// �������η�
	/// </summary>
public:

	double radius;

	double calculation() {
		return 2 * PI * radius;
	}

};

//class Student {
//
//public:
//	int id;
//	string name;
//
//	void Show() {
//		cout << "ѧ�ţ�" << id << "������" << name << endl;
//	}
//};

int main() {
	//ʹ��Բ��ʵ����һ�����󣬲���Ҫnew������
	Circular ci;		//����ʵ����һ��Բ����
	ci.radius = 10;
	cout << "Բ���ܳ�Ϊ��" << ci.calculation() << endl;

	Student st;
	st.setAge(18);
	st.setName("�Ǻ���");
	cout << "���䣺" << st.getAge() ;
	cout << "������" << st.getName() << endl;
	system("pause");
}