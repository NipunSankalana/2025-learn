#include<iostream>
using namespace std;

int add(int,int);

int main(){
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<"Sum: "<<add(a,b)<<endl;
    return 0;
}