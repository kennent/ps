#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Rect {
  int x1, x2, y1, y2, z1, z2;
  void input() { cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2; }
  void overlap(Rect &rhs) {
    if (x2 < rhs.x1 || rhs.x2 < x1) x1=x2;
    if (x1 <= rhs.x1 && rhs.x1 <= x2) x1 = rhs.x1;
    if (x1 <= rhs.x2 && rhs.x2 <= x2) x2 = rhs.x2;
    if (y2 < rhs.y1 || rhs.y2 < y1) y1=y2;
    if (y1 <= rhs.y1 && rhs.y1 <= y2) y1 = rhs.y1;
    if (y1 <= rhs.y2 && rhs.y2 <= y2) y2 = rhs.y2;
    if (z2 < rhs.z1 || rhs.z2 < z1) z1=z2;
    if (z1 <= rhs.z1 && rhs.z1 <= z2) z1 = rhs.z1;
    if (z1 <= rhs.z2 && rhs.z2 <= z2) z2 = rhs.z2;
  }
  int area() { return (x2-x1)*(y2-y1)*(z2-z1); }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n = 2;
  Rect intersection, cur;
  // cin >> n;
  intersection.input();

  for (int i = 1; i < n; i++) {
    cur.input();
    intersection.overlap(cur);
  }  
  cout << (intersection.area() > 0 ? "Yes" : "No");
}