// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// pass by val.
// void increment(int a){
//   a++;
//   return ;
// }

// pass by pointer
// void increment(int*a){
//   (*a)++;
//   return ;
// }

// pass by ref.
void increment(int&a){
  // (*a)++;
 
//  int&b = 
  a++;
  return ;
}

// ->Address;
// int i ;
// cout<< &i

// int&j =  

int main(){

  int i = 11;
  // int &j = i ;
  // j++;

  // cout<<i<<endl;


  increment(i);

  cout<<i<<endl;

  return 0;
}