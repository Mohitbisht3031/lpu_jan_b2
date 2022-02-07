// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){  
    vector<string> solar_sys = {"mer","venus","earth","mars","jupitor","satrun","uranus","naptune"};

    vector<string>::iterator shivam = solar_sys.begin();
    vector<string>::iterator champa = solar_sys.begin();

    // cout<<"shivam is at "<<*shivam<<endl;
    advance(shivam,3);
    // cout<<*next(shivam,5)<<endl;

    cout<<"Distance from shivam "<<distance(champa,shivam)<<endl;



    // cout<<*shivam<<endl;
    // cout<<"let's go to earth "<<*(shivam+2)<<endl;


  return 0;
}