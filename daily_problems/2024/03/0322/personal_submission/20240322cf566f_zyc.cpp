#include <bits/stdc++.h>

#define endl "\n"
#define x first
#define y second
#define pb(a) push_back(a);
#define mst(a, x) memset(a, x, sizeof a)
#define all(a) a.begin(), a.end()
#define complete_unique(a) a.erase(unique(a.begin(), a.end()), a.end())

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;

const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const int N = 1e6 + 10;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), f(N, 0);
  unordered_map<int, int> cnt;
  for(int i = 0; i < n; i ++)
    cin >> a[i], cnt[a[i]] ++;

  int res = 0;
  for(int i = 0; i < n; i ++) {
    f[a[i]] = max(f[a[i]], cnt[a[i]]);
    for(int j = 2 * a[i]; j < N; j += a[i]) {
      f[j] = max(f[j], f[a[i]] + cnt[j]);
    }
    res = max(res, f[a[i]]);
  }

  cout << res << endl;
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // cout.tie(nullptr);
  int T = 1;
  // cin >> T;
  while (T--) solve();

  return 0;
}
