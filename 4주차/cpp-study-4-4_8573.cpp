#include <iostream>
#include <queue>

using namespace std;

#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int main(){
    FASTIO
    int n, pqSize;
    cin >> n;
    priority_queue <int,vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        pq.push(x);
    }

    pqSize = pq.size();

    if(pqSize%2 != 0){
        for(int i=0; i<pqSize/2; i++){
            pq.pop();
        }
        cout << pq.top();
        return 0;
    }

    for(int i=0; i<pqSize/2 - 1; i++){
        pq.pop();
    }
    int x,y;
    x = pq.top();
    cout << x << " ";
    pq.pop();
    y = pq.top();
    if(x != y)
        cout << pq.top();

    return 0;
}