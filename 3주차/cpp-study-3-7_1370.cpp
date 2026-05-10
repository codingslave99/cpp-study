#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef struct Meeting{
    int num;
    int startTime;
    int endTime;
}Meeting;

int main(){
    FASTIO;
    int n, currentEnd=0;
    cin >> n;

    vector <Meeting> v(n);
    vector <int> answer;
    
    for(int i=0; i<n; i++){
        cin >> v[i].num >> v[i].startTime >> v[i].endTime;
    }

    sort(v.begin(), v.end(), [](Meeting a, Meeting b){
            return a.endTime < b.endTime;
        });

    for(int i=0; i<n; i++){

        if(currentEnd > v[i].startTime)
            continue;

        answer.push_back(v[i].num);
        currentEnd = v[i].endTime;
    }

    cout << answer.size() << "\n";

    for(int i=0; i<answer.size(); i++){
        cout << answer[i] << " ";
    }

    return 0;
}