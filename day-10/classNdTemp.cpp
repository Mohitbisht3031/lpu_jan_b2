// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <typename T1 , typename T2>
class Cal{
    public:
    T1 x;
    T2 y;

    Cal(T1 x,T2 y){
        this->x = x;
        this->y = y;
    }

    T1 sum(){
        return x+y;
    }

    T1 sub(){
        return x-y;
    }

};

int main(){
    Cal<int,int>c1(2,5);
    Cal<double,int>c2(2.25,5);
  return 0;
}