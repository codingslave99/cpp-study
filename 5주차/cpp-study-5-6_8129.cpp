#include <iostream>
#include <vector>

using namespace std;
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int n,k,cnt=0;
vector<int> target, findTarget;
vector<bool> isFind;

void solve(int now, int count){
    if(count == k){
        cnt++;
        if(target == findTarget){
            cout << cnt;
            exit(0);
        }
        return;
    }
    if(now >= n)
        return;
    if(isFind[now] == false){
        isFind[now] = true;
        findTarget.push_back(now+1);
    }
    solve(now+1,count+1);
    findTarget.pop_back();
    isFind[now] = false;
    solve(now+1,count);
}

int main(){
    FASTIO
    cin >> n >> k;
    
    for(int i=0; i<k; i++){
        int a;
        cin >> a;
        target.push_back(a);
    }
   
    isFind.resize(n,false);
    solve(0,0);
    cout << "None";
    return 0;
}