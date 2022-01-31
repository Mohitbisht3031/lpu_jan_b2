// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// single
class A{
    int a;
    protected:
    int b;
    public:
    int c;
};
class B: public A{
    //private protected:
    // int b;
    //private public:
    // int c;
    public:
};


int main(){
    // A obj;
    B obj;
    // cout<<obj.a<<obj.b<<obj.c<<endl;


    // cout<<obj.a<<obj.b<<obj.c<<endl;

  return 0;
}