#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001][1001];
bool vis[1001][1001];

bool isvalid(int x, int y) { //checking the validity of a cell
    if(x < 1 || x > n || y < 1 || y > n) 
    return false;

    if(vis[x][y] == true || a[x][y] == 0) 
    return false;

    return true;
}

int dx[] = {-1, 0, 1, 0}; //Changes in the x cell
int dy[] = {0, 1, 0, -1}; //Changes in the y cell

void dfs(int x, int y) {

    vis[x][y] = 1;

    for(int i = 0; i < 4; i++) {
        if(isvalid(i + dx[i], y + dy[i]))
        dfs(x + dx[i], y + dy[i]);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n;

    for (int i =0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int cc = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        if(vis[i][j] == 0 && a[i][j] == 1)
        dfs(i, j);
        cc++;
    }
    cout << cc << endl;
}