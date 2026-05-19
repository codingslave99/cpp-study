#include <iostream>
#include <vector>
using namespace std;
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int k,a;
vector<int> v;
vector<bool> vb;
void dfs(int now){
    if(now==k || now<0)
        return;
    if(vb[now] == false){
        vb[now] = true;
        cout << v[now] << " ";
    }
    dfs(++now);
    dfs(--now);
}

int main(){
    FASTIO
    cin >> k;
    for(int i=0; i<k; i++){
        cin >> a;
        v.push_back(a);
    }
    vb.resize(k,false);
    dfs(0);
    return 0;
}