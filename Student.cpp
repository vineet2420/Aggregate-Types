#include "Student.h"
//use quotes to tell program to look for file in same librayry, no some predefined library
#include <iostream>
using namespace std;
#include <cstring>

ostream & operator<<(ostream & out, Student & s){

	s.displayStudent();
	return out;

}

istream & operator>>(istream & in, Student & s){
	s.inputStudent();
	return in;
}

Student::Student(int age, const char name[256], const char year[10]){
	m_age = age;
	strcpy(m_name, name);
	strcpy(m_year, year);
	


}

Student::Student(){
	m_age = -1; //we want to put an impossible value
	m_name[0] = 0;
	m_year[0]= 0;
}

Student::Student(int age){
	m_age = age;
	m_name[0] = 0;
	m_year[0]= 0;
}


void Student::displayStudent(){
        cout<<"the student info is "<<endl;
        cout<<m_name<<" "<<m_year<<" "<<m_age<<" "<<endl;
}


void Student::inputStudent(){    // no longer need to pass a parameter because the class is student, so the function is itself
        cout<<"enter student name"<<endl;
        cin>>m_name;
        cout<<"enter student year"<<endl;

	char year_[10];
        cin>>year_;
	setYear(year_);
	int i = 0;
	while(year_[i]!=0){
	m_year[i]=year_[i];
	i++;
	}


        cout<<"enter student age"<<endl;
        int age_;
        bool success;
        do{
                cin>>age_;
                success = setAge(age_);
                if(!success) cout<<"please enter an age again"<<endl;
          }while(!success);
}

bool Student::setAge(int age_){
        if (age_<0){
        cout<<"bad age: "<<age_<<endl;
        return false;
        }

        m_age = age_;
        return true;
}

bool Student::setYear(char year_[10]){
	if(year_[0]==0){
	cout<<"incorrect year"<<endl;
	return false;
	}
	else{
	return true;
	}
}

