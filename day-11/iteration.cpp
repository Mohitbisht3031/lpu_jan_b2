// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){  

    vector<int> v = {1,2,3,4,5,6,7,8,9};

    // vector<int>::iterator it = v.begin;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }

  return 0;
}