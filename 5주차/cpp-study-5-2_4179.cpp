#include <iostream>
#include <vector>
using namespace std;

#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

vector<int> v;
vector<int> arr;
vector<bool> selected;
int n, m;

void solve(int now){
    if(now == m){
        for(int i=0; i<m; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for(int i=0; i<n; i++){
        if(!selected[i]){
            selected[i] = true;
            arr.push_back(v[i]);
            solve(now + 1);
            arr.pop_back();
            selected[i] = false;
        }
    }
}

int main(){
    FASTIO
    cin >> n >> m;
    selected.assign(n,false);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    solve(0);

    return 0;
}