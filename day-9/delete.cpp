// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class A{
    public:
    A(){
        cout<<"cons clled"<<endl;
    }

    ~A(){
        cout<<"dis called"<<endl;
    }
};

int main(){
    // A a;
    A*a = new A[5];

    delete[] a;
    // cout<<"main end"<<endl;
    // delete a;
  return 0;
}