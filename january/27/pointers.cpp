#include<iostream>

int main()
{
    int x=10;
    int* p=&x;

    std::cout<<x<<" "<<p<<'\n';

    int& ref =x;
    std::cout<<"ref : "<<ref<<'\n';

    ref=20;
    std::cout<<"x: "<<x<<"ref: "<<ref<<'\n';
}