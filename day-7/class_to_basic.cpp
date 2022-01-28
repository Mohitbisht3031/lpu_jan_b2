// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Time{
    public:
    int hour;
    int m;

    Time(int mins){
        hour = mins/60;
        m = mins%60;
    }

    void display(){
        cout<<"the time is "<<hour<<" hours and "<<m<<" mins"<<endl;
    }

    operator int(){
        return (this->hour*60)+m;
    }
    
};

int main(){

    Time t(340);

    int time_to_min = (int)t;
    cout<<"time in mins is "<<time_to_min<<endl;

  return 0;
}