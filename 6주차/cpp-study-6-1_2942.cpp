#include <iostream>
using namespace std;
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int main(){
    FASTIO
    long long k;
    long long dp[102];
    cin >> k;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;
    for(long long i=6; i<=k; i++){
        dp[i] = dp[i-1] + dp[i-5];
    }
    cout << dp[k];
    return 0;
}