/*Search an Element in an Array 
    Example 1:
Input: array[] = {1,2,3,4,5} k=3                                                                              Output: 2                                                                                                              Explanation: The answer is 2 because 3 is present at 2nd index.

    Example 2:
Input: array[]={6,7,9,5,3,10} k=10
Output: 5
Explanation: The answer is 5 because 10 is present at 5th index.
*/
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