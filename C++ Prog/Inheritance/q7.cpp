#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout<<"Name: Rishabh Jain"<<endl;
    }
};

class B : public A{
public:
    B(){
        cout<<"Age: 25"<<endl;
    }
};

class C : public B{
public:
    C(){
        cout<<"City: Surat"<<endl;
    }
};

int main(){
    C c;
    return 0;
}
