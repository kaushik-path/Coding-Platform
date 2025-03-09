/*
Example 1:
    Input:N = 153
    Output:True
    Explanation: 1**3 + 5**3 + 3**3 = 1 + 125 + 27 = 153
Example 2:
    Input:N = 371
    Output: True
    Explanation: 3**3 + 5**3 + 1**3 = 27 + 343 + 1 = 371
Example 3: 
    Input:N = 1634
    Output: True
    Explanation: 1**4 + 6**4 + 3**4 + 4**4 = 1634
*/
#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int num){
    int i = to_string(num).length();
    int Ans = 0;
    int temp = num;
    while(temp!=0){
        int dig = temp%10;
        Ans = Ans + pow(dig, i);
        temp/=10;
    }
    return num == Ans? true:false;
}
int main(){
    int num;
    cin>>num;
    if(isArmstrong(num)){
        cout<< num <<" Yes it's Armstrong number";
    }
    else{
        cout<< num <<" is Not Armstrong number";
    }
    return 0;
}