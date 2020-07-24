#include<iostream>

using namespace std;

//1.�������������������������ͨ������ָ���ͷ��������
//2.���������û�ж������ݣ����Բ�дΪ��������������
//3.ӵ�д���������������Ҳ���ڳ�����
class Base
{
public:

	//~Base() {
	//	cout << "Base�鹹����" << endl;
	//}

	virtual void Hello() = 0;

	//virtual ~Base() {		//����������������������鹹�����ͻ������
	//	cout << "Base�鹹����" << endl;
	//}

	//�����а���������������ʱ�����������ڳ����࣬�޷�ʵ��������
	virtual ~Base() = 0;	//����������������Ҫ����ʵ�֣�������鹹���������


private:

};
Base::~Base() {		//ʵ��Base��Ĵ�����������
	cout << "Base���鹹����" << endl;
}


class Client : public Base
{
public:
	Client(string name) {
		m_Name = new string(name);
	}
	void Hello() {
		cout << *m_Name << "�����ʺã�" << endl;
		//delete m_Name;
	}

	string* m_Name;

	~Client() {
		cout << "Client�鹹����" << endl;
		delete m_Name;
	}

private:

};


void Test() {

	Base* base = new Client("dogdog");		//�޷�����������鹹����
	base->Hello();
	delete base;



}
int main() {

	Test();

	system("pause");
}