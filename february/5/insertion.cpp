#include<iostream>
#include<vector>
using namespace std;

int main(){
    int number{};
    vector<int> arr;
    int i{0};
    while(cin>>number){
        arr[i]=number;
        i++;
    }
    int len=arr.size();
    for (int i{1}; i<len;i++){
        int key=arr[i];
        int j= i-1;
        while (j>0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        arr[j+1]=key;
        }
    }
    for (int i {}; i<len;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}