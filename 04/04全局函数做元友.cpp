#include<iostream>

using namespace std;


class Home
{
	//作为Home类的朋友函数，可以访问本类下的所有私有成员
	friend void goodGay(Home* home);
public:
	Home()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

	string m_SittingRoom;	//客厅
private:
	string m_BedRoom;		//卧室
};

//
void goodGay(Home* home) {
	cout << "好基友全局函数正在访问：" << home->m_SittingRoom << endl;
	cout << "好基友全局函数正在访问：" << home->m_BedRoom << endl;
}

int main() {

	Home h;
	goodGay(&h);


	system("pause");
}
