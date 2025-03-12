/*Average of all the elements in the array
    Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 3
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.

    Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 1.8
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+1+1+5+1)/6 = 1.8
*/
#include<bits/stdc++.h>
using namespace std;

double AvgArr(vector<int> &arr, int n){
    int val;
    for(int i =0; i<n; i++){
        cin>>val;
        arr.push_back(val);
    }
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }
    return sum/n;
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    cout<<AvgArr(arr, n);
    return 0;
}