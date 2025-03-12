#include<bits/stdc++.h>
using namespace std;
//Pass vector by reference use & not like array
void input(vector<int> &arr, int n){ // using this for input vector
    int val;
    for(int i=0; i<n; i++){// first store the value in any variable and push_back(val) that how to input in vector
        cin>>val;
        arr.push_back(val);
    }
}
// use arr.size() when array is already given
int sumArray(vector<int> &arr, int n){
    int val;
    for(int i=0; i<n; i++){
        cin>>val;
        arr.push_back(val);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    // input(arr, n);
    cout<<sumArray(arr, n);
    return 0;
}