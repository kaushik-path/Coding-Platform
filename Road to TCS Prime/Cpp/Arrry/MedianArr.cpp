#include<bits/stdc++.h>
using namespace std;

void MedianArr(vector<int> arr, int n){
    int val;
    for(int i=0; i<n; i++){
        cin>>val;
        arr.push_back(val);
    }
    sort(arr.begin(), arr.end());
    double Avg;
    if(n%2==0){ // even
        Avg = (arr[n/2]+arr[(n/2)-1])/2.0;
        cout<<Avg;
        // cout<<fixed<<setprecision(1)<<Avg;
    }
    else{// odd
        Avg = arr[n/2];
        cout<<Avg;
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    MedianArr(arr, n);
    return 0;
}