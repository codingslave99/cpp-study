#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility> //얘가 pair함수 사용가능
#include <map> // 얘가 map 자료구조 사용가능!
#include <set> // set 자료구조 사용가능! ( set 은 중복이 되지않고, 요소들은 자동정렬)
using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct Person{
    string name;
    int age;
    int year;
};

bool compare(const int& a, const int& b){
    return a > b;
}

int main(){
    FASTIO
    vector<Person> p;

    p.push_back({"A", 25, 2026});
    p.push_back({"B", 27, 2011});
    p.push_back({"C", 23, 2016});
    p.push_back({"D", 23, 2025});

    vector<int> v;

    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);

    sort(v.begin(), v.end(), compare); //  세 번째 파라미터는 함수명을 넘겨주는 것!

    pair<string, int> a = {"name",10};

    //map<key자료형, value자료형> 변수명

    map<string, int> score; // 접근할 때 key 가 없으면 자동으로 만들어줌 + 0으로 초기화

    score["kim"] = 90; 
    score["Lee"] = 85;

    cout << score["kim"] << "\n";
    cout << score["Lee"] << "\n";

    set<int> s;

    s.insert(3);
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(7);
    // cout 하면 1 3 5 7 로 나옴
    return 0;
}