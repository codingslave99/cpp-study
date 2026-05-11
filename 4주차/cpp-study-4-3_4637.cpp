#include <iostream>
#include <set>

using namespace std;

#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int main(){
    FASTIO

    int q;
    cin >> q;

    set <int> s;

    for(int i=0; i<q; i++){
        char c;
        int n;
        cin >> c >> n;

        if(c=='i')
            s.insert(n);
        if(c=='r' && s.count(n))
            s.erase(n);
    }

    for(int data : s)
        cout << data << " ";
    

    return 0;
}