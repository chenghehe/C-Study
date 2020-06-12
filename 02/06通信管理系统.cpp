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
	cout << "请输入姓名:" << endl;
	cin >> p->name;
	cout << "请输入年龄:" << endl;
	cin >> p->age;
	cout << "请输入性别，1：男，2：女" << endl;
	cin >> p->sex;
	cout << "请输入地址:" << endl;
	cin >> p->addr;
	pArray[p->size] = *p;
	p->size++;

}
void show(Person* p) {
	for (int i = 0; i < (p->size); i++)
	{
		cout << "姓名:" << pArray[i].name << "\t";
		cout << "年龄:" << pArray[i].age << "\t";
		cout << "性别:" << (pArray[i].sex == 1 ? "男" : pArray[i].sex == 2 ? "女" : "未知") << "\t";
		cout << "地址:" << pArray[i].addr << endl;
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
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
	cout << "************" << endl;
	while (true)
	{
		int action;

		cin >> action;
		switch (action)
		{
		case 0:		//退出
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