#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n;
  while (cin >> n) {
    if (!n) break;
    
    int sum = 0;
    while (n--) {
      int x;
      cin >> x;
      if (x+sum <= 300) sum += x;
    }
    cout << sum << "\n";
  }
}