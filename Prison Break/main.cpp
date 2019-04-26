#include <bits/stdc++.h>

using namespace std;

char arr [20 + 1][20 + 1];
int dirc [][2] = { {1 , 0} , {-1 , 0}, {0 , 1}, {0 , -1} };
int ans , n;
bool vis [20 + 1][20 + 1];

void rec (int x , int y){

    if(x == n - 1 && y == n - 1){           // base case

        ans++;
        return;
    }

    vis[x][y] = true;                       // set this state as visited

    for(int i = 0; i < 4; i++){

        int dx = x + dirc[i][0];            // try new transitions
        int dy = y + dirc[i][1];

        if(dx < 0 || dx >= n || dy < 0 || dy >= n) continue;        // check outside of the board
        if(vis[dx][dy] || arr[dx][dy] == '1') continue;             // check for motion detectors or state was visited before

        rec(dx , dy);                                               // go to next state
        vis[dx][dy] = false;                                        // set state as false (Back Track).
    }
}

int main()
{
    int t;

    cin >> t;

    while(t--){

        ans = 0;
        memset(vis , false, sizeof vis);        // set all states as unvisited

        cin >> n;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){

                cin >> arr[i][j];
            }
        }

        rec(0 , 0);
        cout << ans << "\n";
    }

    return 0;
}
