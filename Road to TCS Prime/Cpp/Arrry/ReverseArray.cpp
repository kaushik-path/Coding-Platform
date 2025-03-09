/*
Example 1:
    Input: N = 5, arr[] = {5,4,3,2,1}
    Output: {1,2,3,4,5}
    Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Example 2:
    Input: N=6 arr[] = {10,20,30,40}
    Output: {40,30,20,10}
    Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.*/
    
#include <bits/Stdc++.h>
using namespace std;
void InputArr(int arr[], int s){
    for (int i = 0; i < s; i++){
        cin>>arr[i];
    } 
}
void PrintArr(int arr[], int s){
    for (int i = 0; i < s; i++){
        cout<<arr[i]<<" ";
    } 
}

void ReverseArr(int arr[], int s){
    int left =0, right= s-1;
    while (left<=right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    PrintArr(arr, s);
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    InputArr(arr,size);
    ReverseArr(arr,size);
    

}
