//#include<iostream>
//
//using namespace std;
//
//class Home;
//
//class Person
//{
//
//public:
//	Home* h;
//
//	Person();
//
//	void V1();		//����v1��������˽�г�Ա
//
//	void V2();		//������v2��������˽�г�Ա
//
//private:
//
//};
//
//
//class Home
//{
//	friend void Person::V1();
//public:
//	Home();
//
//	string m_SittingRoom;	//����
//private:
//	string m_BedRoom;		//����
//};
//
//Home::Home() {
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//Person::Person() {
//	h = new Home;
//}
//
//void Person::V1() {
//	cout << "�û��ѳ�Ա�������ڷ��ʣ�" << h->m_SittingRoom << endl;
//	cout << "�û��ѳ�Ա�������ڷ��ʣ�" << h->m_BedRoom << endl;
//}
//
//void Person::V2() {
//	cout << "�û��ѳ�Ա�������ڷ��ʣ�" << h->m_SittingRoom << endl;
//	//cout << "�û��ѳ�Ա�������ڷ��ʣ�" << h->m_BedRoom << endl;		//����
//}
//
////
//////
////void goodGay(Home* home) {
////	cout << "�û��ѳ�Ա�������ڷ��ʣ�" << home->m_SittingRoom << endl;
////	cout << "�û��ѳ�Ա�������ڷ��ʣ�" << home->m_BedRoom << endl;
////}
//
//int main() {
//
//	Home h;
//
//	Person p;
//	p.V1();
//
//	system("pause");
//}
