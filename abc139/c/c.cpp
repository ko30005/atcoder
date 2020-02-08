#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    int ans = 0;
    int count = 0;
    for(int i = 0; i < n - 1; i++) {
        if(h[i] >= h[i + 1]) {
            count++;
        } else {
            count = 0;
        }
        ans = max(ans, count);
    }
    cout << ans << "\n";
    return 0;
}
