//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Student
//{
//	string name;
//	int age;
//}st2;		//可以在声明的时候创建初始化变量	不建议这样用，不直观
//
//int main() {
//	//struct Student st;		//可以省略 struct
//	//st.name = "张三";
//	//st.age = 17;
//	//cout << "姓名：" << st.name << "年龄" << st.age << endl;
//
//	//Student st1 = { "李四",19 };		//可以省略 struct
//
//	//cout << "姓名：" << st1.name << "年龄" << st1.age << endl;
//
//	//st2.name = "王五";
//	//st2.age = 23;
//	//cout << "姓名：" << st2.name << "年龄" << st2.age << endl;
//
//
//	//结构体数组
//	//1.声明结构体数组	struct可以省略
//	struct	Student stuArray[3] = {
//			{ "小明",20},
//			{ "小红",22},
//			{ "小白",12},
//	};
//
//	//2.给结构体数组重新赋值
//	stuArray[0].name = "小黑";
//	stuArray[2].age = 21;
//
//	//3.循环结构体数组
//	for (int i = 0; i < sizeof(stuArray) / sizeof(stuArray[0]); i++)
//	{
//		cout << "姓名：" << stuArray[i].name << "年龄：" << stuArray[i].age << endl;
//	}
//
//	//结构体指针
//	Student stu = { "小花",25 };
//	Student* p = &stu;
//
//	//通过指针访问结构体成员
//	cout << "姓名：" << p->name << "年龄：" << (*p).age << endl;
//
//	system("pause");
//}