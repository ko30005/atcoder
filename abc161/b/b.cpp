#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    int a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    long long count = 0;

    long long val = sum / (4 * m);
    if(sum % (4 * m)) {
        val++;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] >= val) {
            count++;
        }
    }

    if(count >= m) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
