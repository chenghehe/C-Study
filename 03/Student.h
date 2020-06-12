#pragma once
#include<iostream>

using namespace std;

class Student {
public:
	void setAge(int age);
	int getAge();

	void setName(string name);
	string getName();
private:
	int s_Age;
	string s_Name;
};
