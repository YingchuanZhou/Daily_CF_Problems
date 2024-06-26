#include <bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define all(a) a.begin(), a.end()
#define complete_unique(a) a.erase(unique(a.begin(), a.end()), a.end())

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;

void solve() {
    LL a, b;
    cin >> a >> b;
    LL t = cbrtl(a * b) + 1e-9;
    if(t * t * t == a * b && a % t == 0 && b % t == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

void solve2() {
    LL a, b;
    cin >> a >> b;
    int l = 0, r = 1e6 + 10;
    while(l < r) {
        int mid = (l + r) >> 1;
        if(1LL * mid * mid * mid >= a * b ) r = mid;
        else l = mid + 1;
    }
    if(1LL * r * r * r == a * b && a % r == 0 && b % r == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
//  cout.tie(nullptr);
  int T = 1;
  cin >> T;
  while (T--) solve();

  return 0;
}
