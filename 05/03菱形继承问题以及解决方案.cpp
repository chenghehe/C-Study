//#include<iostream>
//
//using namespace std;
//
//class Base
//{
//public:
//	Base() {
//		m_A = 1;
//	}
//	int m_A;
//private:
//
//};
//
//class Base2 :public virtual Base {
//public:
//	Base2() {
//		m_A = 10;
//	}
//};
//
//class Base3 :public virtual Base {		//��̳п��Խ�����μ̳�����
//public:
//	Base3() {
//		m_A = 20;
//	}
//};
//
///// <summary>
/////���μ̳У�
///// </summary>
//class Client :public Base3, public Base2			//�̳�base������Ա
//{
//public:
//
//private:
//
//};
//
//
//int main() {
//
//	Client c;
//	cout << c.Base2::m_A << endl;		//�ظ��̳���	m_A		,ͨ����������Խ������
//	cout << c.Base3::m_A << endl;		//�ظ��̳���	m_A		,ͨ����������Խ������
//	cout << c.m_A << endl;		//��̳У�ͬ��ֻ��̳�һ�����̳����һ��
//
//
//
//
//	system("pause");
//}