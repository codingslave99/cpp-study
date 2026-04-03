#include <iostream>

using namespace std;

int main(){
    int n;
    int chang = 100;
    int sang = 100;

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;

        if(a<b)
            chang -= b;
        else if(a>b)
            sang -= a;
        else
            continue;
    }

    cout << chang << "\n" << sang;

    return 0;

}