#include<iostream>
using namespace std;
class Student {
int rollno;
int age;
public:
Student(int x,int y);
Student(Student &s1);
void output();
};

Student :: Student(int x,int y){
	rollno=x;
	age=y;
}
Student::Student(Student &s1){
	rollno=s1.rollno;
	age=s1.age;
}
void Student :: output(){	
cout<<"\nThe age is "<<age;
cout<<"\nRoll no is "<<rollno;
}
int main(){
Student s1(103,25); //  "function il kodukkunna athe Order il thanne parameters kodukkanam....."
cout<<"\n";
s1.output(162,15);
cout<<"\n";
return 0;
}

