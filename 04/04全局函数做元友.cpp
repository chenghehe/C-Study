#include<iostream>

using namespace std;


class Home
{
	//��ΪHome������Ѻ��������Է��ʱ����µ�����˽�г�Ա
	friend void goodGay(Home* home);
public:
	Home()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

	string m_SittingRoom;	//����
private:
	string m_BedRoom;		//����
};

//
void goodGay(Home* home) {
	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << home->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << home->m_BedRoom << endl;
}

int main() {

	Home h;
	goodGay(&h);


	system("pause");
}
