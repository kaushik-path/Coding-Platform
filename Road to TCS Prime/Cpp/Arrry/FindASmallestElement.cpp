// Example 1:
//      Input: arr[] = {2,5,1,3,0};
//      Output: 0
//     Explanation: 0 is the smallest element in the array
// Example2: 
//      Input: arr[] = {8,10,5,7,9};
//      Output: 5
//     Explanation: 5 is the smallest element in the array.
// MAX
// Example 1:
//      Input: arr[] = {2,5,1,3,0};
//      Output: 5
//     Explanation: 5 is the largest element in the array. 

// Example2:
//         Input: arr[] = {8,10,5,7,9};
//         Output:10
//      Explanation: 10 is the largest element in the array.

#include<bits/stdc++.h>
using namespace std;

void Input(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}
void OutputMinFunc(int arr[],int size){
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
    if (size==0 || size==1){
        cout<<-1<<endl;
    }
    else{
        sort(arr,arr + size); /* Sort the array from 1st element to last element*/
        // for(int i=0; i<size; i++){
        //     cout<<arr[i]<<" ";
        // }
        int min,max;
        min = arr[0];
        max = arr[size-1];
        cout<<"Smallest element "<<min<<endl;
        cout<<"Largest element "<<max<<endl;
    } 
}
/*Approach 2 using vector and size() method*/ 


/*MAIN*/
int main(){
    
    int n;
    cin>>n;
    int arr[100];
    Input(arr,n);
    OutputMinFunc(arr,n);

    /*Using Vector*/

    return 0;
}

