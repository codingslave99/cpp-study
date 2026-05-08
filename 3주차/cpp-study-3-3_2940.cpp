#include <iostream>
#include <queue>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int a, result=0;
    priority_queue <int> pq1;
    priority_queue <int> pq2;

    for(int i=0; i<4; i++){
        cin >> a;
        pq1.push(a);
    }

    for(int i=0; i<2; i++){
        cin >> a;
        pq2.push(a);
    }

    for(int i=0; i<3; i++){
        result += pq1.top();
        pq1.pop();
    }

    result += pq2.top();

    cout << result;

    return 0;
}