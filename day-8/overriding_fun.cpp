// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// single
class Animal{
    public:
    void speak(){
        cout<<"they made a sound.!"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"woofff bhavv grrrrr"<<endl;
    }
};

class Cat:public Animal{
    public:
    void speak(){
        cout<<"Meowwwwwww"<<endl;
    }
};

int main(){
    Dog d;
    Animal a;
    Cat c;

    a.speak();
    d.speak();
    c.Animal::speak();

  return 0;
}