#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;

    int ans = 0;
    if(n == 100) {
        n++;
    }
    for(int i = 1; i <= n; i++) {
        if(d == 0) {
            ans++;
        }

        if(d == 1) {
            ans = 100 * i;
        }

        if(d == 2) {
            ans = 10000 * i;
        }
    }

    cout << ans << endl;
    return 0;
}
