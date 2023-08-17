#include <iostream>
using namespace std;
class Car{
    public:
    int speed(int maxspeed);
};
int Car :: speed(int maxspeed){
    return maxspeed;
};
class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!"<<endl;
    }
};

int main(){
    Car mycar;
    int a;
    a = mycar.speed(200);
    cout<<"speed: "<<a<<endl;
    MyClass myObj;
    return 0;

}