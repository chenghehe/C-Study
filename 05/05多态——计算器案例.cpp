//#include<iostream>
//
//using namespace std;
//
///// <summary>
///// �������������
///// </summary>
//class AbstractCalculation
//{
//public:
//	virtual int getResult() {
//		return 0;
//	};
//	int m_A;
//	int m_B;
//private:
//
//};
//
///// <summary>
///// �ӷ�������
///// </summary>
//class AddCalculation :public AbstractCalculation
//{
//public:
//	int getResult() {
//		return m_A + m_B;
//	}
//private:
//
//};
//
///// <summary>
///// ����������
///// </summary>
//class SubCalculation :public AbstractCalculation
//{
//public:
//	int getResult() {
//		return m_A - m_B;
//	}
//private:
//
//};
//
///// <summary>
///// �˷�������
///// </summary>
//class MulCalculation :public AbstractCalculation
//{
//public:
//	int getResult() {
//		return m_A * m_B;
//	}
//private:
//
//};
//
//void Test() {
//	AbstractCalculation* calculation = new AddCalculation;
//	calculation->m_A = 1;
//	calculation->m_B = 10;
//	cout << calculation->m_A << "+" << calculation->m_B << "=" << calculation->getResult() << endl;
//	delete calculation;
//
//
//	calculation = new SubCalculation;
//	calculation->m_A = 11;
//	calculation->m_B = 10;
//	cout << calculation->m_A << "-" << calculation->m_B << "=" << calculation->getResult() << endl;
//	delete calculation;
//
//	calculation = new MulCalculation;
//	calculation->m_A = 15;
//	calculation->m_B = 10;
//	cout << calculation->m_A << "*" << calculation->m_B << "=" << calculation->getResult() << endl;
//	delete calculation;
//
//}
//int main() {
//
//
//	Test();
//
//	system("pause");
//}