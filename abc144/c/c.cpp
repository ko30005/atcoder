#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    ll ans = n - 1;

    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            ans = min(ans, i + n / i - 2);
        }
    }

    cout << ans << endl;
    return 0;
}
