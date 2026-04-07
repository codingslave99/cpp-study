#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int count[10001] = {0,};

    for(int i=0; i<n; i++){
        int value;
        cin >> value;
        count[value]++;
    }
    for(int i=0; i<10001; i++){
        for(int j=0; j<count[i]; j++){
            cout << i << "\n";
        }
    }
    return 0;
}