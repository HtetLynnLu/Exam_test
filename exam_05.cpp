#include <iostream>
using namespace std;

double area(double b,double h){
    return  0.5*b*h;
}
void Area (double b,double h, double& a){
    a =  0.5*b*h;
}
int main(){
    double heigh,base=0;
    cout << "Enter the base of the triangle "<< endl;
    cin >> base;
cout << "Enter the heigh of the triangle"<< endl;
cin >> heigh;
double triangle_area = area(heigh,base);
cout << "Area of triangle with call by value ="<< triangle_area<<endl;
double triangle_area_ref ;
 Area(heigh,base,triangle_area_ref);
 cout << "Area of triangle with call by ref ="<< triangle_area_ref;
 return 0;
}