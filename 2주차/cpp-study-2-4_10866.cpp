#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    deque <int> dq;

    while(n--){
        int x;
        string s;
        cin >> s;
        if(s=="push_front"){
            cin >> x;
            dq.push_front(x);
            continue;
        }
        if(s=="push_back"){
            cin >> x;
            dq.push_back(x);
            continue;
        }
        if(s=="pop_front"){
            if(dq.empty()){
                cout << -1 << "\n";
                continue;
            }
            cout << dq.front() << "\n";
            dq.pop_front();
            continue;
        }
        if(s=="pop_back"){
            if(dq.empty()){
                cout << -1 << "\n";
                continue;
            }
            cout << dq.back() << "\n";
            dq.pop_back();
            continue;
        }
        if(s=="size"){
            cout << dq.size() << "\n";
            continue;
        }
        if(s=="empty"){
            cout << dq.empty() << "\n";
            continue;
        }
        if(s=="front"){
            if(dq.empty()){
                cout << -1 << "\n";
                continue;
            }
            cout << dq.front() << "\n";
            continue;
        }
        if(s=="back"){
            if(dq.empty()){
                cout << -1 << "\n";
                continue;
            }
            cout << dq.back() << "\n";
        }
    }

    return 0;
}