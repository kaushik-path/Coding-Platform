#include<bits/stdc++.h>
using namespace std;

void printstr(string& s){
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
}
void isReverse(string& s){
    int left=s[1], right= s.length();
    while(left<=right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}

int main(){
    string str;
    cin>>str;
    isReverse(str);
    return 0;
}