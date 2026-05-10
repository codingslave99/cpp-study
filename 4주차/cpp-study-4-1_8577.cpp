#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef struct Meeting{
    int num;
    int startTime;
    int endTime;
}Meeting;

bool compare(Meeting& a, Meeting& b){

    if(a.endTime-a.startTime == b.endTime-b.startTime)
        return a.startTime < b.startTime;
    return a.endTime-a.startTime < b.endTime-b.startTime;
}

int main(){
    FASTIO

    int n;
    cin >> n;
    vector <Meeting> m(n);

    for(int i=1; i<=n; i++){
        m[i-1].num = i;
        cin >> m[i-1].startTime >> m[i-1].endTime;
    }

    sort(m.begin(), m.end(), compare);

    for(int i=0; i<n; i++){
        cout << m[i].num << "\n";
    }

    return 0;
}