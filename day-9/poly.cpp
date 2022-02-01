// #include<iostream>
#include<bits/stdc++.h>

using namespace std;


class A{
    public:
    virtual void show() = 0;
    void print(){
        cout<<"parent printed something"<<endl;
    }
};

class B:public A{
    public:
    void show(){
        cout<<"child showed something"<<endl;
    }
    void print(){
        cout<<"child printed something"<<endl;
    }
};
// class 

int main(){
    // A*b = new B;
    // A a;
    B b;
    // b->show();
    // b->print();

    // A a;
    // B b;
    // a.show();
    // b.print();
  return 0;
}