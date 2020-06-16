#include<iostream>

using namespace std;


class Cart
{
public:
	Cart(int w, int h)
	{
		m_W = w;
		m_H = h;
	}

	int m_W;
	int m_H;
private:

};


class Person
{
public:

	Person(int a, int b, int c, int w, int h) :m_A(a), m_B(b), m_C(c), m_cart(w, h)
	{
	};
	int m_A;
	int m_B;
	int m_C;
	Cart m_cart;

private:

};

int main() {

	Person p1(18, 28, 38, 100, 200);

	cout << p1.m_A << endl;
	cout << p1.m_B << endl;
	cout << p1.m_C << endl;
	cout << p1.m_cart.m_W << endl;
	cout << p1.m_cart.m_H
		<< endl;
	system("pause");
}
