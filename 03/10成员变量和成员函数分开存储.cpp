#include<iostream>
using namespace std;

class Person
{
public:
	static int m_A;		//��̬��Ա�����������ڱ����ϳ�Ա�����Բ�ռ�ñ�����ڴ�ռ�


	int m_B;			//�Ǿ�̬��Ա����	���ڱ��������	ռ���ĸ��ֽ�

	void func() {		//�Ǿ�̬��Ա����	��������Ķ�����

	}

	static void func2() {	//��̬��Ա����	��������Ķ�����

	}


	//ֻ�зǾ�̬��Ա����������������ϵģ�������������
};

int main() {
	Person p;
	//�ն���ռ��һ���ֽ�
	//����ǿն���c++�����������һ���ֽڣ�������ǿն�������ʵ��ռ�õĴ�С
	cout << "sizeof(p) =" << sizeof(p) << endl;




	system("pause");
}
