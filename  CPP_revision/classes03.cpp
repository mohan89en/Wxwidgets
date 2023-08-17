#include <iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    // setter
    void setsalary(int s){
        salary = s;

    };
    //getter
    int getsalary(){
        return salary;
    };
};

int main(){
    Employee myObj;
    myObj.setsalary(1234455);
    cout<<myObj.getsalary()<<endl;
    return 0;
}