#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n,k, cnt = 0;
    string s;
    cin >> n >> k;
    cin >> s;
    vector <bool> eatenHam (n,false);
    for(int i=0; i<n; i++){
        int j;
        if(s[i] == 'H')
            continue;
        if(s[i] == 'P'){
            eatenHam[i] = true;
        }
        for(j=k; j>0; j--){
            if(i-j >= 0 && !eatenHam[i-j]){
                eatenHam[i-j] = true;
                cnt++;
                break;
            }  
        }
        if(j==0 || i-j < 0){
            for(j=1; j<=k; j++){
                if(i+j < n && !eatenHam[i+j] && s[i+j] == 'H'){
                    eatenHam[i+j] = true;
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
}