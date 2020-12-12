#include<bits/stdc++.h>

using namespace std;

int coins[3], dp[4001];

int main(){

    int amount;
    cin>>amount;

    memset(dp, -999999, sizeof(dp));

    for(int i=0;i<3;i++){
        cin>>coins[i];
    }

    dp[0] = 0;

    for(int i=1;i<=amount;i++){
        for(int j=0;j<3;j++){
          int val = i-coins[j];
          if (val>=0) {
            dp[i] = max(dp[i], dp[i - coins[j]] + 1);
          }
        }
    }
    int mx = dp[amount];
    cout<<mx;

    return 0;
}
