#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    long long get_money = 0;
    cin >> n;

    vector <int> v;

    for(int i=1; i<=n; i++){
        int tip;
        cin >> tip;
        v.push_back(tip);
    }
    sort(v.begin(),v.end());
    for(int i=1; i<=n; i++){
        if(v.back()-i+1 < 0){
            v.pop_back();
            continue;
        }
        get_money += v.back()-i+1;
        v.pop_back();
    }
    cout << get_money;
    return 0;
}