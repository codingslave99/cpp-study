#include <iostream>
#include <queue>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n,i,m;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> n;

    for(i=1; i<=n; i++){
        int a;
        cin >> a;
        pq.push(a);
    }

    cin >> m;

    for(int j=0; j<m; j++){
        cin >> i;
        int value;
        value = pq.top() + i;
        pq.pop();
        pq.push(value);
    }
    
    for(i=0; i<n; i++){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}