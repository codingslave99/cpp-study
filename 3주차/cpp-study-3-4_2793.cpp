#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int t, cntA=0, cntB=0, cntC=0;
    cin >> t;
    if(t%10 != 0){
        cout << -1;
        return 0;
    }
    cntA += t/300;

    if(cntA != 0)
        t %= 300;

    cntB += t/60;

    if(cntB != 0)
        t %= 60;
    
    cntC += t/10;

    cout << cntA << " " << cntB << " " << cntC;

    return 0;
}