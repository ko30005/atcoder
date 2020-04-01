#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        bool divisible = true;
        while(divisible) {
            if(a[i] % 2 == 0) {
                ans++;
                a[i] = a[i] / 2;
            } else {
                divisible = false;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
