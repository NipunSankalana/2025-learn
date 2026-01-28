#include<iostream>
using namespace std;

int main()
{
    cout<<"welcome to library tracker!"<<'\n';
    
    cout<<"what is your name: ";
    string name {};
    cin>>name;
    
    cout<<"what is your age: ";
    int age {};
    cin>>age;
    
    cout<<name<<" (age: "<<age<<" years"<<") registered !"<<'\n';
}