#include <iostream>
#include <vector>
using namespace std;

#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);


vector<vector<int>> craft;
vector<int> v;

bool solve(int now){
    if(v[now] > 0){
        v[now] -= 1;
        return true;
    }
    else{
        if(craft[now].size() == 0){
            return false;
        }
        else{
            for(int i=0; i<craft[now].size(); i++){
                if(!solve(craft[now][i])){
                    return false;
                }
            }
            return true;
        }
    }
}

int main(){
    FASTIO

    int n;
    cin >> n;

    v.push_back(0);

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    craft.resize(n+1);

    int k;
    cin >> k;
    for(int i=0; i<k; i++){
        int goal, num;
        cin >> goal >> num;
        for(int j=0; j<num; j++){
            int x;
            cin >> x;
            craft[goal].push_back(x);
        }
    }

    if(solve(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}