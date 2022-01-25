// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student{

  string passcode;
  // int,char,string,float..
  public :
  string name;
  int id;
  student(){
  }

  student(string passcode,string name,int id){
    this->name = name;
    // age = a;
    // i = id;
    this->id = id;
    this->passcode = passcode;
  }

  // student(string passcode,string name,int id): name(name),passcode(passcode),id(id)
  // {
  // }


  void into(){
    cout<<"My name is "<<name<<" , my id is "<<id<<"passcord is "<<passcode<<endl;
  }

  void setPass(string s){
    passcode = s;
  }

  ~student(){  
  }
  // delete 

};

int main(){
  student s1;
  student s2("10","Mohit",1);
  student s3;

  s3 = s2;

  // s3+s2;

  s3.into();
  // delete s2;
  // int a = 10;
  // int*ptri = &a;
  // student*ptrs = &s2;

  // cout<<(*ptrs).name<<endl;
  // cout<<ptrs->name<<endl;

  return 0;
}