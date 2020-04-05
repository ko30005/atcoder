#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if(n == k) {
        cout << 1 << endl;
        return 0;
    }

    int count = 0;
    for(int i = 1; i < n; i += k - 1) {
        count++;
    }

    cout << count << endl;
    return 0;
}
