// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

void display(int arr[],int s){
  for(int i =0;i<s;i++)cout<<arr[i];
  cout<<endl;
}

int main(){

  int arr[] = {1,2,3,4,5};

  int size = 5;
  int r = 3;
  int arr2[size];
  display(arr,size);

  for(int i = 0;i<size;i++){

    arr2[(i+r)%size] = arr[i];

  }


  display(arr2,size);
  return 0;
}