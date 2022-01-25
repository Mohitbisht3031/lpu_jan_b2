// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class complexNumber{

  public :
  int real;
  int img;

  complexNumber(int real,int img){
    this->real = real;
    this->img = img;
  }

  void display(){
    cout<<real<<"+ i"<<img<<endl;
  }

  complexNumber plus(complexNumber c){
    int r = this->real+c.real;
    int i = this->img+c.img;

    // return complexNumber(r,i);
    complexNumber result(r,i);
    return result;
  }

};

int main(){
  complexNumber c1(5,5);
  complexNumber c2(1,1);
  complexNumber c4(1,1);
  complexNumber c3 = c1.plus(c2.plus(c4));
  // c1+c2;
  c3.display();
  // c1.display();
  return 0;
}