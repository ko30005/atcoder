#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double v[n];

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v, v + n);
    double ans = (v[0] + v[1]) / 2;

    for(int i = 1; i < n - 1; i++) {
        ans = (ans + v[i + 1]) / 2;
    }
    cout << ans << "\n";
    return 0;
}
