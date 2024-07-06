#include <bits/stdc++.h>
#include <atcoder/all>
#define MAX 1000000000
using namespace std;
using namespace atcoder;
using ll = long long;
using pii = pair<int, int>;

struct State {
  int state, aki, cnt;
  State(int s = 0, int a = 0, int c = 0): state(s), aki(a), cnt(c) {}
};

int n, si = 0, ti = 0;
int dp[(1 << 16)];
string s, t;

int bfs() {
  queue<State> q; // state, cnt
  q.push(State(si, n));
  while (q.size()) {
    auto cur = q.front();
    for (int i = 0; i+1 < cur.aki; i++) {
      int nxt = cur.state;
      if (cur.state & (1 << i)) nxt |= (1 << cur.aki);
      if (cur.state & (1 << (i+1))) nxt |= (1 << (cur.aki+1));
      
    }
    for (int i = cur.aki+2; i < n+2; i++) {

    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  fill(dp, dp + (1 << 16), MAX);

  cin >> n >> s >> t;
  for (int i = 0; i < s.length(); i++) if (s[i] == 'W') si |= (1 << i);
  for (int i = 0; i < t.length(); i++) if (t[i] == 'W') ti |= (1 << i);
  cout << bfs();
}