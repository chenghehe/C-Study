//#include<iostream>
//
//using namespace std;
//
//class Person {
//public:
//	Person() {
//		cout << "Person�޲ι��캯������" << endl;
//	}
//
//	Person(int age) {
//		p_Age = age;
//		cout << "Person�вι��캯������" << endl;
//	}
//
//	Person(const Person& p) {
//		p_Age = p.p_Age;
//		cout << "Person�������캯������" << endl;
//	}
//
//	~Person() {
//		cout << "Person������������" << endl;
//	}
//
//private:
//	int p_Age;
//};
//
//int main() {
//
//	////���ŷ�������
//	//Person p1;			//�����޲ι��캯��
//	//Person p2(20);		//�����вι��캯��
//	//Person p3(p2);		//���ÿ������캯��
//
//	//Person p1();		//���ܼ����ţ�����������ž�˵������һ����������
//	//void func();		//��������
//
//	////��ʾ��
//	//Person p1;					//�޲ι��캯��
//	//Person p2 = Person(10);		//�вι��캯��
//	//Person p3 = Person(p2);		//�������캯��
//
//	//Person(10);						//��������ִ����ֱ������
//
//	//3.��ʽת����
//	Person p4 = 10;		//�вι��죬�൱��д��	Person p4 = Person(10)
//	Person p5 = p4;		//��������
//
//
//
//
//
//	system("pause");
//}