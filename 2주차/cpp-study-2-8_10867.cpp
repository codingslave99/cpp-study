#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, index;
    cin >> n;
    
    vector <int> v;

    for(int i=0; i<n; i++){
        int value;
        cin >> value;
        for(index = 0; index<v.size(); index++){
            if(v[index] == value)
                break;
        }
        if(i!=0 && index < v.size())
            continue;
        v.push_back(value);
    }
    sort(v.begin(),v.end());
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}