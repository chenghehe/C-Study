#include<iostream>
#include<string>

using namespace std;

const int MAX = 1000;

struct Person
{
	string name;
	int	 age;
	int sex;
	string addr;
	int size;
};

Person pArray[MAX];

void addPerson(Person* p) {
	cout << "����������:" << endl;
	cin >> p->name;
	cout << "����������:" << endl;
	cin >> p->age;
	cout << "�������Ա�1���У�2��Ů" << endl;
	cin >> p->sex;
	cout << "�������ַ:" << endl;
	cin >> p->addr;
	pArray[p->size] = *p;
	p->size++;

}
void show(Person* p) {
	for (int i = 0; i < (p->size); i++)
	{
		cout << "����:" << pArray[i].name << "\t";
		cout << "����:" << pArray[i].age << "\t";
		cout << "�Ա�:" << (pArray[i].sex == 1 ? "��" : pArray[i].sex == 2 ? "Ů" : "δ֪") << "\t";
		cout << "��ַ:" << pArray[i].addr << endl;
	}
}

int Select(Person* p, string name) {
	for (int i = 0; i < p->size; i++)
	{
		if (pArray[i].name == name) {
			return i;
		}
		else
			return -1;
	}
}

int main() {
	Person p;
	p.size = 0;

	cout << "************" << endl;
	cout << "1.�����ϵ��" << endl;
	cout << "2.��ʾ��ϵ��" << endl;
	cout << "3.ɾ����ϵ��" << endl;
	cout << "4.������ϵ��" << endl;
	cout << "5.�޸���ϵ��" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�ͨѶ¼" << endl;
	cout << "************" << endl;
	while (true)
	{
		int action;

		cin >> action;
		switch (action)
		{
		case 0:		//�˳�
			system("pause");
			exit(0);
			return 0;
		case 1:
			addPerson(&p);

			system("pause");
			system("cls");
			break;
		case 2:
			show(&p);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			break;
		}


	}
}