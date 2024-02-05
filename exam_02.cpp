
#include <iostream>
using std :: cout ;
using std :: endl ;

int main (){
int arr[7]={4,6,39,73,2,5,7};
int min,max,n=7;
min = arr [0];
max = arr [0];
for (int i =0;i<n;i++){
    if (arr[i] < min){
        min=arr[i];
    }
    if (arr[i] > max){
        max=arr[i];
    }
}cout << "Smallest Number: "<< min<< endl;
cout << "Largest Number: "<< max << endl;
    return 0;
}