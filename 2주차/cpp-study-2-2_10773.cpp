#include <iostream>
#include <stack>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int k;
    cin >> k;
    stack <int> s;

    for(int i=0; i<k; i++){
        int value;
        cin >> value;
        if(value == 0){
            s.pop();
            continue;
        }
        s.push(value);
    }
    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}