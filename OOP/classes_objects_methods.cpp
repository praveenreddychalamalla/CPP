/**
  * DOCUMENTATION
  * Author: Praveen Reddy Chalamalla
  * Created on 9-05-2021 
*/
#include<iostream>
using namespace std;

class student{
		public:
		int age; //No memory will be created unless an object is created.
		string name;
		void info();//Declaration
};
void student::info(){ //Scope Resolution - Inform compiler that this method is declared in the scope of class student.
	cout<<age<<" "<<name<<endl; //Need not to resolve scope again if you use any attributes of the same class.
}
int main() {
	student a,b;
	//cout<<a.age<<endl; Instance variable (Variables of a class) is not initialized yet, hence contains garbage value 
	//In java instance varibales are auto initialized to some defualt values depending on the type of variable
	a.age=22;
	a.name="Praveen Reddy";
	b.age=24;
	b.name="Sandeep Reddy";
	a.info();
	b.info();
	//Default Copying 
	student c=a; // Copying object(All attributes and methods) into new object.
	//student c{a} ; Serves the same purpose.
	c.info();
}
