#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int a[1000], b[1000];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  while (cin >> n) {
    if (!n) break;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int asum = 0, bsum = 0, cnt = 0;
    int state = 0; // 1 a>b, 0 a=b, -1 a<b
    for (int i = 0; i < n; i++) {
      asum += a[i], bsum += b[i];
      if (state == 1) {
          if (asum < bsum) {
              cnt++;
              state = -1;
          }
      } else if (state == -1) {
          if (asum > bsum) {
              cnt++;
              state = 1;
          }
      } else {
          if (asum > bsum) state = 1;
          else if (asum < bsum) state = -1;
      }
    }
    cout << cnt << "\n";
  }
}