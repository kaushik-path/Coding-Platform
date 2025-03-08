/*A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself).
Example 1:
    Input: n=6
    Output: 6 is a perfect number
Example 2:
    Input: n=15
    Output: 15 is not a perfect number
Example 3:
    nput: n=28
    Output: 28 is a perfect number
Reason:
    For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to  the respective numbers and for 15 it is not. */

#include<bits/stdc++.h>
using namespace std;

bool isPerfectNum(int num){
    int sum=0;
    for(int i=1; i<=num/2; i++){ //dont start i=0 it will go infinity
        if(num%i==0){
            sum+=i;
        }
    }
    if (sum == num){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    // cout<<isPerfectNum(n)<<endl;;
    if(isPerfectNum(n)== true){
        cout<< "Yes " << n <<" is a Perfect number"<<endl;
    }
    else{
        cout<< n << " is a Not Perfect number"<<endl;
    }
    return 0;
}