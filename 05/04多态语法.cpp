//#include<iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void Hello() {		//�麯������̬��ַ�󶨣���ʲô��ִ��ʲô���Ӧ�ķ�������Ϊ�̳й�ϵ
//		cout << "���Ƕ��" << endl;
//	};
//private:
//
//};
//
//class Cat :public Animal
//{
//public:
//	//��д�����麯��
//	void Hello() {		
//		cout << "����è��" << endl;
//	};
//private:
//
//};
//
///// <summary>
///// ִ�д��к�����
////	��ַ���	�ڱ���׶�ȷ��������ַ
////	�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
///// </summary>
///// <param name="animal"></param>
//void Test(Animal& animal) {
//	animal.Hello();
//}
//
////��̬��ʹ��
////�����ָ��������� ָ���������
//
//int main() {
//
//	Cat cat;
//	Test(cat);
//
//	system("pause");
//}