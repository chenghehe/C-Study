//#include<iostream>
//
//using namespace std;
//
///// <summary>
///// �������������
///// </summary>
//class Base
//{
//public:
//	virtual void func() = 0;	//���麯������һ�������д��麯��ʱ�������ǳ�����
//private:
//
//};
//
///// <summary>
///// �ӷ�������
///// </summary>
//class Client :public Base
//{
//public:
//	void func() {
//		cout << "Client" << endl;
//	}
//private:
//
//};
//
//
//void Test() {
//
//	//Base base;	//�������޷�ʵ��������
//	//new Base;	//�������޷�ʵ��������
//
//	Client client;	//����д����ĳ��󷽷�Ҳ�޷�ʵ����
//	Base* base = new Client;
//	base->func();
//}
//int main() {
//
//
//	Test();
//
//	system("pause");
//}