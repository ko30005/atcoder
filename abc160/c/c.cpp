#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n;
    cin >> k >> n;

    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxDis = 0;
    for(int i = 0; i < n - 1; i++) {
        maxDis = max(maxDis, a[i + 1] - a[i]);
    };

    maxDis = max(maxDis, k - a[n - 1] + a[0]);

    cout << k - maxDis << endl;
    return 0;
}
