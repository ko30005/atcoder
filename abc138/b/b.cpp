#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    long double res = 0;
    for(int i = 0; i < n; ++i) {
        long double a = 0;
        cin >> a;
        res += 1 / a;
    }

    cout << 1 / res << endl;

    return 0;
}
