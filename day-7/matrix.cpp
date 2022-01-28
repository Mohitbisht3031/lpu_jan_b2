// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class matrix{
    public:

    // vector<int>v;
    vector<vector<int>>mat;

    matrix(){
        mat = vector<vector<int>>(5,vector<int>(5,2));

        // vector<int>v(5,0);

    }

    void display(){

        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    void operator +(matrix m){

        for(int i = 0;i<m.mat.size();i++){
            for(int j = 0;j<m.mat[0].size();j++){
                this->mat[i][j]+=m.mat[i][j];
            }
        }

    }

};


int main(){
    matrix m1;
    matrix m2;

    m1.display();
    cout<<endl;
    m1+m2;

    m1.display();
  return 0;
}