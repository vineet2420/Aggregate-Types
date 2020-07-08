#include <iostream>
using namespace std;
#include "Student.h"




int main(){
	Student s(10, "noname", "test");	//object is created
	//s.displayStudent();
	cout<<s<<endl;
	//s.inputStudent();
	cin>>s;
	s.displayStudent();
	return 0;
}
