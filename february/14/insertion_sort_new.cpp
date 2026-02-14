#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& arr){
    for (int i=1; i<int(arr.size());i++){
        int key=arr[i];
        int j=0;
        while (j<i){
            if (arr[j]>key){
                int temp=arr[j];
                arr[j]=key;
                key=temp;   
            }
            j++; 
        arr[i]=key;
       }
    }
}

int main(){
    vector<int> arr{1,78,9,8,7,5,8,548,47,585,23,14};
    insertion_sort(arr);
    for (int i=0;i< int(arr.size());i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}