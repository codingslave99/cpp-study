#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    //for (int x : a)
    vector <int> v;
    //v.push_back(1); << 끝에 1추가
    //v.pop_back();
    //sort(v.begin(), b.end()) << 처음부터 끝까지 정렬

    stack <int> s;

    //s.push(1);
    //s.empty();
    //s.top();

    queue <int> q;
    //q.push(0);
    //q.pop();
    //q.front();
    //q.back();
    //q.empty();

    deque <int> dq;

    dq.push_back(1);
    dq.push_front(2);
    dq.pop_front();
    dq.pop_back();

    //deque은 인덱스로 접근가능
    

    return 0;
}