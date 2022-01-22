// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

  // char str[] = {'M','o','h','i','t','\0'};
  // char str[] = "MOHIT";

  string str ;

  // cin>>str;
  getline(cin,str);
  // string str = "Mohit";
  // string str2 = "Bisht";
  // int len = str.size();
  // cout<<str<<endl;
  // str+='a';
  str = 'a'+str;
  str.push_back('b');
  
  // 100 // 100000 strlen()
//  My name is mohit bisht
  // cout<<str+str2<<endl; 

  return 0;
}