// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <typename T>
T sum(vector<T>&v,T def = 0){
    T s = def;
    for(T ele:v){
        s+=ele;
    }
    // T a;
    // for(int i = 0;i<v.size();i++){
    //     // a = v[i];
    //     // s+=a;
    //     s+=v[i];
    // }
    return s;
}

// template <typename T>
// double sub(vector<double>&v,int def = 0){
//     double s = def;

//     for(double ele:v){
//         s+=ele;
//     }

//     return s;
// }
/*
what if we do stock like this
-find min of arr from 0 to n
-(Suppose min at m)
-find max of arr m+1 to n

5 8 10 9 4 1 2

*/
int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    vector<double>v2 = {1.15,2.25,3.35,4.45,5.55,6.65,7.75,8.85,9.95};
    vector<string> vs={"templates "," are "," magical.!!"};

    for(auto e:v){
        cout<<e<<" ";
    }

    cout<<sum<int>(v)<<endl;
    cout<<sum<double>(v2)<<endl;

    cout<<sum<string>(vs,"")<<endl;    

  return 0;
}