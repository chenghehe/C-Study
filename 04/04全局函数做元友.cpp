//#include<iostream>
//
//using namespace std;
//
//
//class Home
//{
//	//��ΪHome������Ѻ��������Է��ʱ����µ�����˽�г�Ա
//	friend void goodGay(Home* home);
//
//	//������Ԫ����Ϊ�����������
//	friend class Person;
//public:
//	Home()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//
//	string m_SittingRoom;	//����
//private:
//	string m_BedRoom;		//����
//};
//
//class Person
//{
//
//public:
//
//	void Test(Home *h) {
//		cout << "�û��������ڷ��ʣ�" << h->m_BedRoom << endl;
//	}
//
//private:
//
//};
//
//
////
//void goodGay(Home* home) {
//	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << home->m_SittingRoom << endl;
//	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << home->m_BedRoom << endl;
//}
//
//int main() {
//
//	Home h;
//	goodGay(&h);
//
//	Person p;
//	p.Test(&h);
//
//	system("pause");
//}
