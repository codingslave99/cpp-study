#include <iostream>
#include <queue>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n,value;
    cin >> n;
    queue <int> q;
    while(true){
        cin >> value;
        if(value == -1)
            break;
        if(value == 0){
            q.pop();
            continue;
        }
        if(q.size() == n)
            continue;
        q.push(value);
    }

    if(q.empty()){
        cout << "empty";
        return 0;
    }
    int size = q.size();
    for(int i=0; i<size; i++){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}