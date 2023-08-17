#include <iostream>
using namespace std;

class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a, int b, int c);
    void getData();
};
void Employee :: setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;

}
void Employee :: getData(){
    
        cout<<"Value: "<<a<<endl;
        cout<<"Value: "<<d<<endl;
    
}
int main(){
    Employee mohan;
    mohan.d = 23;
    mohan.e= 15;
    //mohan.a = 124;
    mohan.setData(1,2,3);
    mohan.getData();



    return 0;
}