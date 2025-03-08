

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