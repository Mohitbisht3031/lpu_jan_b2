// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student{

  string passcode;
  friend class bestfriend;

  protected:

  int age;
  // int,char,string,float..
  public :
  string name;
  int id;

  student(){

  }

  student(int id,string name,string passcode,int age){
    this->name = name;
    this->id = id;
    this->passcode = passcode;
    this->age = age;
  }
  void into(){
    cout<<"My name is "<<name<<" , my id is "<<id<<"passcord is "<<passcode<<endl;
  }

  // void setter(string s,int a,string n,int i){
  //   passcode = s;
  //   age = a;
  //   name = n;
  //   id = i;
  // }




  friend void hacker(student s);
  // friend class bestfriend;
  
};

void hacker(student s){
  cout<<s.passcode<<" "<<s.age<<endl;
}

class bestfriend{

  public:

  void sharingSecret(student s){
    cout<<s.passcode<<" "<<s.age<<endl;
  }

};

int main(){

  student s1(1,"Mohit","0001",10);
//  s2.into();
  // s1.setter("0001",10,"Mohit",1);
  // s1.name = "Mohit"

  // int a = 10;
  // int*ptri = &a;

  // student*ptrs = &s1;
  // cout<<ptrs->name<<endl;
  // cout<<(*ptrs).name<<endl;
  // bestfriend bff;
  // bff.sharingSecret(s1);
  // hacker(s1);

  // s1.passcode = "001";

  return 0;
}