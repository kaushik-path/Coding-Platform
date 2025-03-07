#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, dig=0, rev=0;
    cin>>num;
    int dup = num;
    while(dup>0){
        dig = dup%10;
        rev = 10*rev +dig;
        dup = dup/10;
    }
    cout<<rev<<endl;
    if(num==rev){
        cout<< "Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}