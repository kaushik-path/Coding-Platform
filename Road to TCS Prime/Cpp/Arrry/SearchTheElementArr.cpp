#include<bits/stdc++.h>
using namespace std;

int searchEle(vector<int> &arr, int n, int k){
    int val;
    for(int i=0; i<n; i++){
        cin>>val;
        arr.push_back(val);
    }
    if(k==arr[0]){
        return 0;
    }
    else{
        for(int i=0; i<n; i++){
            if(k==arr[i]){
                return i;
            }            
        }
    }
    return -1;
}
int main(){
    vector<int> arr;
    int key, n;
    cin>>n>>key;
    int ans =searchEle(arr, n, key);
    cout<<ans;
    return 0;
}