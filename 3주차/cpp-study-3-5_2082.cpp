#include <iostream>
#include <queue>

using namespace std;

int a[1000002];

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    
    cin >> n;

    priority_queue <int, vector<int>, greater<int>> pq;

    for(int i=1; i<=n; i++){
        int tmpi = i;
        cin >> a[i];
        pq.push(a[i]);
        while(tmpi > 1){
            if(a[tmpi] <= a[tmpi/2])
                break;
            else{
                swap(a[tmpi],a[tmpi/2]);
                tmpi = tmpi/2;
            }
        }   
    }

    for(int i=1; i<=n; i++){
        cout << a[i] << " ";
    }

    cout << "\n";

    for(int i=1; i<=n; i++){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}