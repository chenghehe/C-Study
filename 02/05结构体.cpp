//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Student
//{
//	string name;
//	int age;
//}st2;		//������������ʱ�򴴽���ʼ������	�����������ã���ֱ��
//
//int main() {
//	//struct Student st;		//����ʡ�� struct
//	//st.name = "����";
//	//st.age = 17;
//	//cout << "������" << st.name << "����" << st.age << endl;
//
//	//Student st1 = { "����",19 };		//����ʡ�� struct
//
//	//cout << "������" << st1.name << "����" << st1.age << endl;
//
//	//st2.name = "����";
//	//st2.age = 23;
//	//cout << "������" << st2.name << "����" << st2.age << endl;
//
//
//	//�ṹ������
//	//1.�����ṹ������	struct����ʡ��
//	struct	Student stuArray[3] = {
//			{ "С��",20},
//			{ "С��",22},
//			{ "С��",12},
//	};
//
//	//2.���ṹ���������¸�ֵ
//	stuArray[0].name = "С��";
//	stuArray[2].age = 21;
//
//	//3.ѭ���ṹ������
//	for (int i = 0; i < sizeof(stuArray) / sizeof(stuArray[0]); i++)
//	{
//		cout << "������" << stuArray[i].name << "���䣺" << stuArray[i].age << endl;
//	}
//
//	//�ṹ��ָ��
//	Student stu = { "С��",25 };
//	Student* p = &stu;
//
//	//ͨ��ָ����ʽṹ���Ա
//	cout << "������" << p->name << "���䣺" << (*p).age << endl;
//
//	system("pause");
//}