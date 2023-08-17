#include <iostream>
using namespace std;

int main(){
    //cout<<"hello world\n";
    int n=4;
    cin>>n;/*
    if (n>5){
        cout<<"hey"<<endl;
    }
    else{
        cout<<"ok"<<endl;
    }*/
    /*int i =0;
    int sum=0;
    while(i<=n){
        cout<<i<<" ";
        sum=i+sum;
        i=i+2;
    }
    cout<<sum<<" ";*/

    /*int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }*/


    //for loop
    // for (int i=0;i<=n;i=i+2){
    //     cout<<i<<endl;
    // }


    //nested loops
    for(int i = 1;i<=2;i++){
        cout<<"outer: "<<i<<"\n";
        for(int j=1;j<=3;j++){
            cout<<"inner: "<<j<<"\n";
        }
    }
    int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}

}