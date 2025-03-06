#include <bits/stdc++.h>
using namespace std;

bool IsStringPal(string Str){
    int left=0, right= Str.length()-1;
    while(left<right){
        while(left == right){
            left++;
            right++;
        }
        else{
            return false;
        }
        return true;
    }
}

int main(){
    string Str = "ABCDCBA";
    // cin>>Str;
    bool ans = IsStringPal(Str);

    if (ans == true){
        cout<<"Pal";
    }
    else{
        cout<<"Not";
    }
    return 0;
}