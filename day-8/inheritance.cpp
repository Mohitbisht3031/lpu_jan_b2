// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

// single
class A{};
class B: public A{};

// multiple
class A{};
class B{};
class C: public A,public B{};

// multilevel
class A{};
class B: public A{};
class C: public B{};

// heri.
class A{};
class B: public A{};
class C: public A{};

// hybrid
 class A{};
 class B{};
 class C: public A,public B{};
 class D: public C{};
 class E: public C{};



int main(){

  return 0;
}