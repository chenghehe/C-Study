#include<iostream>
#include<string>

using namespace std;

struct Student
{
	string name;
	int age;
}st2;		//可以在声明的时候创建初始化变量	不建议这样用，不直观

int main() {
	struct Student st;		//可以省略 struct
	st.name = "张三";
	st.age = 17;
	cout << "姓名：" << st.name << "年龄" << st.age << endl;

	Student st1 = { "李四",19 };		//可以省略 struct

	cout << "姓名：" << st1.name << "年龄" << st1.age << endl;

	st2.name = "王五";
	st2.age = 23;
	cout << "姓名：" << st2.name << "年龄" << st2.age << endl;

	system("pause");
}