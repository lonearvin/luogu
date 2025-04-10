// P2615 [NOIP 2015 提高组] 神奇的幻方


#include<iostream>
#include<vector>
#include<pair>
#include<unordered_map>
using namespace std;

int main(){
    int n; cin>>n;
    vector<vector<int>> matrix(n+1, vector<int>(n+1,0)); unordered_map<int, pair<int, int>> palce;

    // 1填到第一行的中间
    matrix[1][n/2+1] = 1; palce[1].first = 1; palce[1].second = n/2+1;
    for(int k=2;k<=n;k++){
        int current_back = k-1;
        int x = palce[current_back].first; int y = palce[current_back].second;
        1.
        if (x == 1 and y!= n){
            // 在第一行不在最后一列
            matrix[n][y+1] = k; // 最后一行，右一列
            palce[k].first = n; palce[k].second = y+1;
            continue;
        }

        // 2.
        if (x!=1 and y == n){
            // 不在第一行，但是在最后一列
            matrix[x-1][1] = k;
            palce[k].first = x-1; palce[k].second = 1; // 填充到第一列，上一行
            continue;
        }

        // 3.
        if (x == 1 and y == n){
            // 在第一行，最后一列
            matrix[x+1][y] = k;
            place[k].first = x+1; palce[k].second = y;
            continue;
        }

        // 4. 
        if (x!=1 and y!=n){
            // 不在第一行，也不在最后一列
            if (x-1>=1 and y+1<=n and matrix[x-1][y+1] == 0){
                matrixp[x-1][y+1] = k;
                palce[k].first = x-1; palce[k].second = y+1;
                continue;
            }{
                // 否则的话
                matrix[x+1][y] = k;
                palce[k].first = x+1;palce[k].second = y;
                continue;
            }
        }
    }
    
    for (int i=1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}











