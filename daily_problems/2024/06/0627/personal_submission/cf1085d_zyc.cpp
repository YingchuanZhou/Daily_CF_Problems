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
    int n, s;
    cin >> n >> s;
    vector<int> d(n + 1);
    for(int i = 0; i < n - 1; i ++) {
    	int a, b;
    	cin >> a >> b;
    	a --, b --;
    	d[a] ++, d[b] ++;
    }
    int cnt = 0;
    for(auto x : d) {
    	cnt += x == 1;
    }
    cout << fixed << setprecision(10) << 2.0 * s / cnt << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
//  cout.tie(nullptr);
  int T = 1;
  // cin >> T;
  while (T--) solve();

  return 0;
}
