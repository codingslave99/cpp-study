#include <iostream>
#include <string>
using namespace std;
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int n,cnt=0;

void dfs(string s, int win, int defeat){
    if(defeat == n){
        return;
    }
    if(win == n){
        cout << s << "\n";
        cnt++;
        return;
    }
    dfs(s+"o",win+1,defeat);
    dfs(s+"x",win,defeat+1);
}

int main(){
    FASTIO
    
    cin >> n;
    //v.resize(n,0);
    dfs("",0,0);
    cout << "total " << cnt << " cases";
    return 0;
}