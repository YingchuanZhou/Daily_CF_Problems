#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
 
void solve() {
    LL x, y, p, q;
    cin >> x >> y >> p >> q;
    LL l = 0, r = 2E9;
    auto check = [&](LL mid) -> bool {
        if(mid * q - y >= mid * p - x && mid  * p - x >= 0)
            return true;
        return false;
    };
    while(l < r) {
        LL mid = (l + r) >> 1;
        if(check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    if(r == 2E9) {
        cout << -1 << endl;
    }
    else {
        cout << r * q - y << endl;
    }
}
 
int main() {
    int T;
    cin >> T;
    while(T --)
        solve();
    return 0;
}
