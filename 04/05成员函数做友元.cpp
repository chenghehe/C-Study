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
//	void V1();		//允许v1函数访问私有成员
//
//	void V2();		//不允许v2函数访问私有成员
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
//	string m_SittingRoom;	//客厅
//private:
//	string m_BedRoom;		//卧室
//};
//
//Home::Home() {
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//Person::Person() {
//	h = new Home;
//}
//
//void Person::V1() {
//	cout << "好基友成员函数正在访问：" << h->m_SittingRoom << endl;
//	cout << "好基友成员函数正在访问：" << h->m_BedRoom << endl;
//}
//
//void Person::V2() {
//	cout << "好基友成员函数正在访问：" << h->m_SittingRoom << endl;
//	//cout << "好基友成员函数正在访问：" << h->m_BedRoom << endl;		//报错
//}
//
////
//////
////void goodGay(Home* home) {
////	cout << "好基友成员函数正在访问：" << home->m_SittingRoom << endl;
////	cout << "好基友成员函数正在访问：" << home->m_BedRoom << endl;
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
