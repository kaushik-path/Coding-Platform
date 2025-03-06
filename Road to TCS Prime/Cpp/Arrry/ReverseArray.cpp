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
