#include <iostream>
using namespace std;
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int main(){
    FASTIO
    long long n;
    long long dp[100001];
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    for(long long i=2; i<=n; i++){
        dp[i] = (dp[i-2]*2 + dp[i-1])%20100529;
    }
    cout << dp[n];
    return 0;
}