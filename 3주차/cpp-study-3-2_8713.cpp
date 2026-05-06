#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, p, q;
    
    cin >> n >> p >> q;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int cnt = 0;
    int sums = 0;

    for(int i=0; i<n; i++){
        if(sums + v[i] > q)
            break;
        cnt++;
        sums += v[i];
    }

    cout << min(cnt,p);


    return 0;
}