#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n,m,k;
    cin >> n >> m;
    vector <vector <int>> v1(n,vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v1[i][j];
        }
    }


    cin >> m >> k;
    vector<vector<int>> v2(m,vector<int>(k));

    for(int i=0; i<m; i++){
        for(int j=0; j<k; j++){
            cin >> v2[i][j];
        }
    }
    vector<vector<int>> v3(n,vector<int>(k));
    int row=0, col=0;

    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<k; j++){
            for(int a=0; a<m; a++){
                sum += v1[i][a] * v2[a][j];
            }
            v3[row][col++] = sum;
            sum = 0;
            if(col == k){
                col = 0;
                row++;
            } 
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cout << v3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}