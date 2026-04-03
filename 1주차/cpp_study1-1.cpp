#include <iostream>

using namespace std;

//cin.tie(NULL);
//ios::sync_with_stdio(false);
//endl 대신 "\n"


int main(){
    int t;
    cin >> t;

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    for(int i=0; i<t; i++){
        int a, b;
        cin >> a >> b;
        cout << a+b << "\n";
    }

    return 0;
}