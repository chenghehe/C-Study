#include<iostream>
#include<string>

using namespace std;

struct Student
{
	string name;
	int age;
}st2;		//������������ʱ�򴴽���ʼ������	�����������ã���ֱ��

int main() {
	struct Student st;		//����ʡ�� struct
	st.name = "����";
	st.age = 17;
	cout << "������" << st.name << "����" << st.age << endl;

	Student st1 = { "����",19 };		//����ʡ�� struct

	cout << "������" << st1.name << "����" << st1.age << endl;

	st2.name = "����";
	st2.age = 23;
	cout << "������" << st2.name << "����" << st2.age << endl;

	system("pause");
}