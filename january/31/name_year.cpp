#include<iostream>
#include<string>
using namespace std;

int main(){

    cout<<"Enter your name: ";
    string name{};
    getline(cin>>ws,name);
    cout<<"Your name: "<<name<<'\n';

    cout<<"Enter your age: ";
    int year{};
    cin>>year;
    cout<<"Your age is: "<<year<<'\n';

    cout<<"sum of age and character of name : "<<static_cast<int>(name.length())+year<<'\n';

    return 0;
}