#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string isHello;
    string commonString = 'hello';
    cin >> isHello;
    int  n = isHello.length();
    int dp[n+1];
    dp[0]=0;
    int k = 1;
    for(int i = 1; i <= n; ++i){
        if(isHello[i-1]==commonString[k-1]){
            k++;
            dp[i] = dp[i-1] + 1;
        } else {
            dp[i] = dp[i-1];
        }
    }
    if(dp[n]==5){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}