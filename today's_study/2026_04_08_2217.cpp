#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector <int> v;

    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    int max = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i]*(v.size()-i) > max)
            max = v[i]*(v.size()-i);
    }
    cout << max;
}