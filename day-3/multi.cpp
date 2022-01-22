// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

void display(int arr[],int s){
  for(int i =0;i<s;i++)cout<<arr[i];
  cout<<endl;
}

int main(){

  int arr[] = {1,2,3,4,5};

  if(*arr+1 == arr[1]){
    cout<<"hey"<<endl;
  }else{
    cout<<"hi"<<endl;
  }

  // int arr[3][3] ={
  //           {1,2,3},
  //           {4,5,6},
  //           {7,8,9}
  //          };

  // display(arr[1],2);
  // cout<<arr[2][2]<<endl;
  // cout<<arr[3]<<endl;
  // for(int i = 0;i<5;i++)cin>>arr[i];

  return 0;
}