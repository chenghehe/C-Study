#include<iostream>

using namespace std;

//1.�Ӻ����������
//1.1 ��Ա��������+��
//1.2 ȫ�ֺ�������+��

class Person
{
public:
	Person();



	Person(int age, int height) {
		m_Age = new int(age);
		m_Height = new int(height);
	}

	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
		}
		if (m_Height != NULL) {
			delete m_Height;
		}


	};

	//Person operator+(Person& p) {
	//	Person temp;
	//	temp.m_Age = this->m_Age + p.m_Age;
	//	temp.m_Height = this->m_Height + p.m_Height;
	//	return temp;
	//}

	int* m_Age;
	int* m_Height;

	//����ǰ�õ���++���������������Ϊ��һֱ��һ�������в���
	Person& operator++() {
		//��++
		m_Age++;
		m_Height++;
		//�ڷ���
		return *this;
	}

	//���غ��õ���++���������������Ϊ��һֱ��һ�������в���
	Person operator++(int) {
		Person temp = *this;	//��¼����ǰ��ֵ��Ȼ���ñ����ֵ+1�����Ƿ��ص�����ǰ��ֵ���ﵽ���غ�++
		m_Age++;
		m_Height++;
		return temp;
	}

	//��ֵ���������
	Person& operator=(Person& p) {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		m_Age = new int(*p.m_Age);
		m_Height = new int(*p.m_Height);
		return *this;
	}

	//��������/()���أ��º���
	void operator()(int a, int b) {
		cout << "����1��ֵ��" << a << "����2��ֵ��" << b << endl;
	}
private:

};

Person::Person()
{
}
//
//Person::~Person()
//{
//}

Person operator+(Person& p1, Person& p2) {
	Person temp;
	//temp.m_Age = p1.m_Age + p2.m_Age;
	//temp.m_Height = p1.m_Height + p2.m_Height;
	return temp;
}

//<<�������������
//һ�㲻�����ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
ostream& operator<<(ostream& cout, Person& p) {
	cout << "m_Age:" << *p.m_Age << endl;
	cout << "m_Height:" << *p.m_Height << endl;
	return cout;
}

////++ǰ�õ������������
//Person operator++(Person& p) {
//	Person temp;
//	temp.m_Age = p.m_Age++;
//	temp.m_Height = p.m_Height++;
//	return temp;
//}


class MyAdd
{
public:
	MyAdd();
	~MyAdd();

	/// <summary>
	/// �������أ��º���
	/// </summary>
	/// <param name="a"></param>
	/// <param name="b"></param>
	/// <returns></returns>
	int operator ()(int a, int b) {
		return a + b;
	}
private:

};

MyAdd::MyAdd()
{
}

MyAdd::~MyAdd()
{
}

int main() {

	//Person p;
	//p.m_Age = 10;
	//p.m_Height = 20;

	//Person p1;
	//p1.m_Age = 10;
	//p1.m_Height = 20;

	//Person p3 = p + p1;

	//cout << p3.m_Age << endl << p3.m_Height << endl;

	//cout << p3;

	//cout << ++p3;
	//p3++;
	//cout << p3 << endl;


	Person p5(10, 20);
	Person p6 = p5;
	cout << p6;

	////�������
	//p6(50, 100);

	//��������
	//Person()(50, 100);

	//��������
	int result = MyAdd()(100, 100);
	cout << result << endl;

	system("pause");
}

