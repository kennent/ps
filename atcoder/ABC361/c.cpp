#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using pii = pair<int, int>;

int n, k;
vector<int> v;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());

  int r = 1e9+1;
  k = n-k-1;
  for (int i = 0; i < n-k; i++) {
    r = min(r, v[i+k]-v[i]);
  }
  cout << r;
}