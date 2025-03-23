#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;
    for (int i = 2; i < num; i++){
        if(num%i==0) return false;;
    };
    return true;
};

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<endl;
            sum += i;
        }
    }
    cout<<sum;
    return 0;
}