#include <iostream>
#include <vector>
using namespace std;
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);

int k,a;
vector<int> v;
vector<int> tmp;
void answer(int next, int count){
    if(count == 6){
        for(int i=0; i<6; i++){
            cout << tmp[i] << " ";
        }
        cout << "\n";
        return;
    }
    if(next >= k)
        return;
    tmp.push_back(v[next]);
    answer(next+1, count+1);
    tmp.pop_back();
    answer(next+1, count);
}

int main(){
    FASTIO
    cin >> k;
    for(int i=0; i<k; i++){
        cin >> a;
        v.push_back(a);
    }
    answer(0,0);
    return 0;
}