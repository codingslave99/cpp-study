#include <iostream>
#include <vector>

using namespace std;

#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int n,m,p,f, cnt=0;
vector<pair <int,int>> v;

void solve(int count, int selected, int protein, int fat){
    if(f <= fat)
        return;
    if(selected == n){
        if(p > protein)
            return;
        cnt++;
        return;
    }
    if(count == m)
        return;
    solve(count+1, selected+1, protein+v[count].first, fat+v[count].second);

    solve(count+1, selected, protein, fat);

}

int main(){
    FASTIO
    cin >> n >> m >> p >> f;

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    solve(0,0,0,0);
    cout << cnt;
    return 0;
}