#include <iostream>
using namespace std;

class Student{
public:
	Student();
	Student(int age);
	Student(int age, const char name[256], const char year[10]);
	void displayStudent();
        void inputStudent();
        bool setAge(int age_);
	bool setYear(char year_[10]);
	
private:
        char m_name[256], m_year[10];
        int m_age;
	
}; //semicolon needed just like structs

ostream & operator<<(ostream & out, Student & s);
istream & operator>>(istream & in, Student & s);
