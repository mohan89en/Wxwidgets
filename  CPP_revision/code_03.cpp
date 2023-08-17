//arrays and pointer

#include <iostream>
using namespace std;
int main(){

    int marks[]={23,45,67,89};
    int* p = marks;
    for (int i= 0; i<4;i++){
    cout<<"the value is: "<<*(p+i)<<"\n";}
   

}