#include<bits/stdc++.h>
using namespace std;

void IndecArr(vector<int> &arr, int n){
    int val;
    for(int i=0; i<n; i++){
        cin>>val;
        arr.push_back(val);
    }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i++){//print everythin in increaseing order
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = n-1 ; i >= 0; --i){//print everythin in decreaseing order
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n/2; i++){//print everythin in increaseing order
        cout<<arr[i]<<" ";
    }
    for (int i = n-1 ; i >=n/2; --i){//print everythin in decreaseing order
        cout<<arr[i]<<" ";
    }

}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    IndecArr(arr, n);
    return 0;
}