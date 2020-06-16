//#include<iostream>
//
//using namespace std;
///// <summary>
///// 浅拷贝只能拷贝值，遇到指针无法进行拷贝，拷贝指针时会拷贝指针引用的地址，如果该地址释放则不能访问该地址，因此需要深拷贝来拷贝具体的值。深拷贝就是拷贝指针地址指向的值
////浅拷贝解决不了的用深拷贝解决！
///// </summary>
//class Person
//{
//public:
//	Person(const Person& p) {
//		m_Age = p.m_Age;
//
//		//深拷贝
//		m_Height = new int(*p.m_Height);
//	};
//	Person(int age, int height) {
//		m_Age = age;
//		m_Height = new int(height);		//指针
//	};
//	~Person() {
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//	};
//
//	int m_Age;
//	int* m_Height;		//指针
//
//private:
//
//};
//
//
//int main() {
//
//	Person p1(18, 160);
//	Person p2(p1);
//	cout << "p1的年龄：" << p1.m_Age << "\t p1的身高：" << p1.m_Height << endl;
//	cout << "p2的年龄：" << p2.m_Age << "\t p2的身高：" << p2.m_Height << endl;
//
//
//	cout << "p1的年龄：" << p1.m_Age << "\t p1的身高：" << *p1.m_Height << endl;
//	cout << "p2的年龄：" << p2.m_Age << "\t p2的身高：" << *p2.m_Height << endl;
//
//	system("pause");
//}
