#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int n;
ll a, b, d, dir = 0, gi = 1; // 0 1 2 3 반시계 방향
int grid[101][101], visited[101][101][4];
int dx[] = { 1, 0, -1, 0 }, dy[] = { 0, 1, 0, -1 };

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  while (cin >> n) {
    if (!n) break;

    memset(grid, 0, sizeof(grid));
    memset(visited, 0, sizeof(visited));
    dir = 0; gi = 1;

    cin >> a >> b >> d;

    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      grid[x][y] = 1;
    }

    while (0 <= a && a <= 100 && 0 <= b && b <= 100 && !visited[a][b][dir] && d) {
      visited[a][b][dir] = gi++;
      while (0 <= dx[dir] + a && dx[dir] + a <= 100 && 0 <= dy[dir] + b && dy[dir] + b <= 100 && grid[dx[dir] + a][dy[dir] + b]) dir = (dir + 1)%4;
      a += dx[dir];
      b += dy[dir];
      d--;
    }
    if (d == 0) cout << a << " " << b << "\n";
    else if (a < 0 || a > 100 || b < 0 || b > 100) cout << a+dx[dir]*d << " " << b+dy[dir]*d << "\n";
    else {
      d %= gi-visited[a][b][dir];
      while (d) {
        while (0 <= dx[dir] + a && dx[dir] + a <= 100 && 0 <= dy[dir] + b && dy[dir] + b <= 100 && grid[dx[dir] + a][dy[dir] + b]) dir = (dir + 1)%4;
        a += dx[dir];
        b += dy[dir];
        d--;
      } 
      cout << a << " " << b << "\n";
    }
  }
}