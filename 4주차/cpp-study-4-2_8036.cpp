#include <iostream>
#include <map>

using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){

    FASTIO

    int n;
    cin >> n;

    map<long long, long long> x;
    map<long long, long long> y;
    
    long long ans = 0;

    for(int i=0; i<n; i++){
        long long a, b;
        cin >> a >> b;

        ans += x[a] + y[b];
        x[a] += 1;
        y[b] += 1;
    }

    cout << ans;
    return 0;
}