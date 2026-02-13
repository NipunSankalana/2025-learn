#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> left,vector<int> right){
    int i{};
    int j{};
    vector<int> result;
    while (i<left.size() && j<right.size()){
        if (left[i]<right[j]){
            result.push_back(left[i]);
            i++;
        }
        else{
            result.push_back(right[j]);
            j++;
        }
    }
    while (i<left.size()){
        result.push_back(left[i]);
        i++;
    }
    while(j<right.size()){
        result.push_back(right[j]);
        j++;
    }
    return result;
}

vector<int> merge_sort(vector<int> arr){
    if (arr.size()<2){
        return arr;
    }

    else{
        vector<int> arr_left;
        vector<int> arr_right;
        int mid = arr.size()/2;

        for(int i=0;i<mid;i++){
            arr_left.push_back(arr[i]);
        }

        for(int i=mid;i<arr.size();i++){
            arr_right.push_back(arr[i]);
        }

        vector<int> left=merge_sort(arr_left);
        vector <int> right=merge_sort(arr_right);
        
        return merge(left,right);
    }
}

int main(){
    vector<int> arr{38,27,43,3,9,82,10};
    vector<int> sorted_arr=merge_sort(arr);
    for (int i=0;i<sorted_arr.size();i++){
        cout<<sorted_arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}