#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using pii = pair<int, int>;

int n, k, x;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> k >> x;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    cout << a << " ";
    if (i == k) cout << x << " ";
  }
}