#include <iostream>
using std :: cout ;
class Student {
private:
std :: string student_name;
std :: string student_class;
int student_roll_numbers=0;
int student_marks=100; 
public:
 Student(const std :: string name,const std :: string& stuclass,int roll_number,int marks ) : student_name(name),student_class(stuclass),student_roll_numbers(roll_number),student_marks(marks){}
std::string Grade (){
if (student_marks>=80){
    return "A";
}
else if (student_marks>=60){
return "B";
}
else if (student_marks>=40){
return "C";
 }
else if (student_marks>=20){
return "D";
}
else{
return "E";
}}

void student_info (){
    cout << " Student Name ="<< student_name << '\n';
cout << "Student Class ="<< student_class << '\n';
    cout << "Student Roll_Numbers ="<< student_roll_numbers<< '\n';
cout << "Student Marks and Grade="<< student_marks<<"("<< Grade()<<")" <<'\n';
}
};
int main(){
std :: string name,stuclass;
int roll_number,marks;
cout << "info"<< '\n';
cout << "Name : ";
getline (std :: cin,name);
cout << "Class :";
getline (std :: cin ,stuclass);
cout << "Roll_numbers :";
std :: cin >> roll_number;
cout << "Marks :";
std :: cin >> marks;
Student Student(name,stuclass,roll_number,marks);
Student.student_info();
return 0;
}