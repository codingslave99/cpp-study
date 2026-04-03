//5596
#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a,b,c,d,sum1,sum2;
    cin >> a >> b >> c >> d;
    sum1 = a+b+c+d;
    cin >> a >> b >> c >> d;
    sum2 = a+b+c+d;

    if(sum1<sum2)
        cout << sum2;
    else
        cout << sum1;

    return 0;
}