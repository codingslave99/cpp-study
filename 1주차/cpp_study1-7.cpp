#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, value, valueX, valueY;

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> value;
    vector <vector <int>> v(n, vector<int>(n,0));

    int startX = n/2, startY = n/2, move = 1, num = 1;

    while(num < n*n){
        for(int i=0; i<move && num<=n*n; i++){
            if(num == value){
                valueX = startX+1;
                valueY = startY+1;
            }
            v[startX][startY] = num++;
            startX--;
        }

        for(int i=0; i<move && num<=n*n; i++){
            if(num == value){
                valueX = startX+1;
                valueY = startY+1;
            }
            v[startX][startY] = num++;
            startY++;
        }
        move++;

        for(int i=0; i<move && num<=n*n; i++){
            if(num == value){
                valueX = startX+1;
                valueY = startY+1;
            }
            v[startX][startY] = num++;
            startX++;
        }

        for(int i=0; i<move && num<=n*n; i++){
            if(num == value){
                valueX = startX+1;
                valueY = startY+1;
            }
            v[startX][startY] = num++;
            startY--;
        }
        move++;

    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    cout << valueX << " " << valueY;

    return 0;
}