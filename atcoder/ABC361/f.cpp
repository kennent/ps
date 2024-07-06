#include <bits/stdc++.h>
#define int long long
using namespace std;

int mobius(int n) {
  if (n == 1) return 1;
  int p = 0;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      if (n / i % i == 0) return 0;
      n /= i;
      ++p;
    }
  }
  if (n > 1) ++p;
  return (p % 2 == 0) ? 1 : -1;
}

int integer_root(int n, int k) {
  int low = 1, high = n;
  while (low < high) {
    int mid = low + (high - low + 1) / 2;
    int power = 1;
    for (int i = 0; i < k; ++i) {
      if (power > n / mid) {
          power = n + 1;
          break;
      }
      power *= mid;
    }
    if (power <= n) low = mid;
    else high = mid - 1;
  }
  return low;
}

signed main() {
    int n;
    cin >> n;

    int logn = static_cast<int>(log2(n));
    int sum = 0;

    for (int k = 2; k <= logn; ++k) {
        int root = integer_root(n, k);
        sum += mobius(k) * (root - 1);
    }

    int result = 1 - sum;
    cout << result;
}
