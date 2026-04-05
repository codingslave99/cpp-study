#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    string temps;
    vector <string> value;
    cin >> s;
    temps = s;
    sort(temps.begin(),temps.end());

    for(int i=0; i<temps.size(); i++){
        if(i != 0 && temps[i] == temps[i-1])
            continue;
        for(int j=s.size(); j>=0; j--){
            if(temps[i] == s[j]){
                value.push_back(s.substr(j,s.size()));
            }
        }
    }

    sort(value.begin(), value.end());
    for(int i=0; i<value.size(); i++){
        cout << value[i] << "\n";
    }

    return 0;
}