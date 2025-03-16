#include<bits/stdc++.h>
using namespace std;

int Sum(int m, int n){
    int sum = 0;
    for(int i= m; i<=n; i++){
        sum = sum +i;
    }
    return sum;
}
int main(){
    int i, j;
    cin>>i>>j;
    cout<<Sum(i,j);
    return 0;
}