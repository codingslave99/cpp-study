#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    stack <char> st;
    while(true){
        int i=0;
        getline(cin,s);
        if(s == ".")
            break;
        for(; i<s.size(); i++){
            if(s[i] == '[' || s[i] == '('){
                st.push(s[i]);
                continue;
            }
            if(s[i] == ']'){
                if(st.empty() || st.top() != '[')
                    break;
                else if(st.top() == '['){
                    st.pop();
                    continue;
                }
            }
            else if(s[i] == ')'){
                if(st.empty() || st.top() != '(')
                    break;
                else if(st.top() == '('){
                    st.pop();
                    continue;
                }
            }
        }
        if(st.empty() && i == s.size())
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
        int size = st.size();
        for(int i=0; i<size; i++){
            st.pop();
        }
    }

    return 0;
}