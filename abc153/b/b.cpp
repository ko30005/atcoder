#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    long long result = 0;
    for(int i = 0; i < n; i++) {
        if(k > 0) {
            k--;
            continue;
        }
        result += a[i];
    };
    cout << result << endl;

    return 0;
}
