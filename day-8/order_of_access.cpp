// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// single
class A{
    public:
    // int c;
    A(){
        cout<<"A's Const."<<endl;
    }

    ~A(){
        cout<<"A's dest."<<endl;
    }

};
class B: public A{
    // A obj
    public:
    B(){
        cout<<"B's const"<<endl;
    }

    ~B(){
        cout<<"B's dest"<<endl;
    }

};


int main(){

    B obj;

  return 0;
}