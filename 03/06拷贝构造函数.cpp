//#include<iostream>
//
//using namespace std;
//
//class Person {
//public:
//	Person() {
//		cout << "PersonĬ���޲ι��캯������" << endl;
//	}
//
//	Person(int age) {
//		p_Age = age;
//		cout << "Person�вι��캯������" << endl;
//	}
//
//	/*Person(const Person& p) {
//		p_Age = p.p_Age;
//		cout << "Person�������캯������" << endl;
//	}*/
//
//	~Person() {
//		cout << "Person������������" << endl;
//	}
//
//public:
//	int p_Age;
//};
//
////���캯���ĵ��ù���
////1.����һ���࣬c++���������ÿ���඼���������������
//		//Ĭ�Ϲ��캯��	����ʵ�֣�
//		//��������		����ʵ�֣�
//		//��������		��ֵ������
//
//
//void test() {
//	Person p;
//	p.p_Age = 18;
//	Person p1(p);
//
//	cout << "p1������Ϊ��" << p1.p_Age << endl;
//}
//
//int main() {
//	test();
//	
//
//	system("pause");
//}