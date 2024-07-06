#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;
  while (n--) {
    int x, y;
    cin >> x >> y;
    cout << (x*y < 0 ? max(abs(x), abs(y)) : abs(x)+abs(y)) << "\n";
  }
}