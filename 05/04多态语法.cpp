//#include<iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void Hello() {		//虚函数，动态地址绑定，传什么就执行什么类对应的方法，须为继承关系
//		cout << "我是动物！" << endl;
//	};
//private:
//
//};
//
//class Cat :public Animal
//{
//public:
//	//重写父类虚函数
//	void Hello() {		
//		cout << "我是猫！" << endl;
//	};
//private:
//
//};
//
///// <summary>
///// 执行打招呼函数
////	地址早绑定	在编译阶段确定函数地址
////	如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
///// </summary>
///// <param name="animal"></param>
//void Test(Animal& animal) {
//	animal.Hello();
//}
//
////动态的使用
////父类的指针或者引用 指向子类对象
//
//int main() {
//
//	Cat cat;
//	Test(cat);
//
//	system("pause");
//}