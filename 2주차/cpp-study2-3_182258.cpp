#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n,value;
    cin >> n;
    string a;
    queue <int> q;

    for(int i=0; i<n; i++){
        cin >> a;
        if(a == "push"){
            cin >> value;
            q.push(value);
        }
        else if(a == "pop"){
            if(q.empty()){
                cout << -1 << "\n";
                continue;
            }
            cout << q.front() << "\n";
            q.pop();
        }
        else if(a == "size"){
            cout << q.size() << "\n";
        }
        else if(a == "empty"){
           cout << q.empty() << "\n";
        }
        else if(a == "front"){
            if(q.empty()){
                cout << -1 << "\n";
                continue;
            }
            cout << q.front() << "\n";
        }
        else if(a == "back"){
            if(q.empty()){
                cout << -1 << "\n";
                continue;
            }
            cout << q.back() << "\n";
        }
        
    }

    return 0;
}