//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//��̬��Ա����	��̬��Ա����Ҳ���з���Ȩ�޵Ŀ�������Ϊ˽�е�private
//	static void  func() {
//		m_A = 100;	//��̬��Ա�������Է��ʾ�̬��Ա����
//		//m_B = 20;	//��̬��Ա���������Է��ʷǾ�̬��Ա��������Ϊ�޷����ֵ������ĸ�����ĳ�Ա����
//		cout << "��̬����func�ĵ��ã�" << endl;
//	}
//
//	static int m_A;		//��̬��Ա����
//	int m_B;			//�Ǿ�̬��Ա����
//
//private:
//	static void func2() {
//		cout << "��̬����func2�ĵ��ã�" << endl;
//	}
//};
//
//int Person::m_A = 0;
//
//void test() {
//	//1.ͨ���������
//	Person p;
//	p.func();
//
//	//2.ͨ����������
//	Person::func();
//	//Person::func2();		//�����޷�����˽�еľ�̬��Ա����
//
//}
//int main() {
//
//	test();
//	system("pause");
//}
