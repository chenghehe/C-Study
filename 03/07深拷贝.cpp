//#include<iostream>
//
//using namespace std;
///// <summary>
///// ǳ����ֻ�ܿ���ֵ������ָ���޷����п���������ָ��ʱ�´��ָ�����õĵ�ַ������õ�ַ�ͷ����ܷ��ʸõ�ַ�������Ҫ��������������ֵ��������ǿ���ָ���ַָ���ֵ
////ǳ����������˵�����������
///// </summary>
//class Person
//{
//public:
//	Person(const Person& p) {
//		m_Age = p.m_Age;
//
//		//���
//		m_Height = new int(*p.m_Height);
//	};
//	Person(int age, int height) {
//		m_Age = age;
//		m_Height = new int(height);		//ָ��
//	};
//	~Person() {
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//	};
//
//	int m_Age;
//	int* m_Height;		//ָ��
//
//private:
//
//};
//
//
//int main() {
//
//	Person p1(18, 160);
//	Person p2(p1);
//	cout << "p1�����䣺" << p1.m_Age << "\t p1����ߣ�" << p1.m_Height << endl;
//	cout << "p2�����䣺" << p2.m_Age << "\t p2����ߣ�" << p2.m_Height << endl;
//
//
//	cout << "p1�����䣺" << p1.m_Age << "\t p1����ߣ�" << *p1.m_Height << endl;
//	cout << "p2�����䣺" << p2.m_Age << "\t p2����ߣ�" << *p2.m_Height << endl;
//
//	system("pause");
//}
