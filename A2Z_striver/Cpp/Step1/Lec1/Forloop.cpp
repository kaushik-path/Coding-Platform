// Nth Fibonacci Number https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j=0,k=1,m,n;
    cin>>n;
    if(n<=1){
        cout<<1;
    }
    else{
       for(int i = 1; i<n ;i++){
        m = j+k;
        j=k;
        k=m;
        }
    cout<<m;
    }   
}