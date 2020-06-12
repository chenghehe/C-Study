#include "Student.h"

void Student::setAge(int age) {
	s_Age = age;
};
int Student::getAge() {
	return s_Age;
};

void Student::setName(string name) {
	s_Name = name;
};
string Student::getName() {
	return s_Name;
};