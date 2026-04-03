//4396
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    bool is_bomb = false;

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    vector<string> v1(n);
    vector<string> v2(n);
    vector<string> v3(n,string(n,'.'));

    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    for(int i=0; i<n; i++){
        cin >> v2[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v2[i][j] == 'x'){
                int count = 0;
                if(v1[i][j] == '*')
                    is_bomb = true;
                    else{
                        for(int k=0; k<8; k++){
                            int x[] = {-1,0,1,1,1,0,-1,-1};
                            int y[] = {1,1,1,0,-1,-1,-1,0};
                            if(i+x[k] < 0 || j+y[k] < 0 || i+x[k] >= n || j+y[k] >= n)
                                continue;
                            if(v1[i+x[k]][j+y[k]] == '*')
                                count++;
                    }
                    v3[i][j] = count + '0';
                }
            }
        }
    }

    if(is_bomb){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v1[i][j] == '*')
                    v3[i][j] = '*';
            }
        }
    }

    for(int i=0; i<n; i++)
        cout << v3[i] << "\n";

    return 0;
} 