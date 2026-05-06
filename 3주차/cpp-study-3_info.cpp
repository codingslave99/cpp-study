#include <iostream>
#include <queue>            //priority_queue도 queue include해서 사용

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    priority_queue<int> pq;
    
  //priority_queue<담을 자료형, 임시로 값들 저장할 곳, 정렬 조건>
  //기본이 less<int> 이고, greater<int> 를 넣으면 작은 우선순위 먼저 나오게 됨
    priority_queue<int, vector<int>, greater<int>> pq2;


    pq.push(3);
    pq.push(10);
    pq.push(7);

    while(!pq.empty()){
        cout << pq.top() << ' ';
        pq.pop();
    }

    return 0;
}