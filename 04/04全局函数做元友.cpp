//#include<iostream>
//
//using namespace std;
//
//
//class Home
//{
//	//作为Home类的朋友函数，可以访问本类下的所有私有成员
//	friend void goodGay(Home* home);
//
//	//类做友元，作为本类的朋友类
//	friend class Person;
//public:
//	Home()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//	string m_SittingRoom;	//客厅
//private:
//	string m_BedRoom;		//卧室
//};
//
//class Person
//{
//
//public:
//
//	void Test(Home *h) {
//		cout << "好基友类正在访问：" << h->m_BedRoom << endl;
//	}
//
//private:
//
//};
//
//
////
//void goodGay(Home* home) {
//	cout << "好基友全局函数正在访问：" << home->m_SittingRoom << endl;
//	cout << "好基友全局函数正在访问：" << home->m_BedRoom << endl;
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
