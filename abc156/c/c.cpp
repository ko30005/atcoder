#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);

    double sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> x[i];
        sum += x[i];
    }

    int ans = 0;
    double avr = sum / n;
    long long rounded = std::llround(avr);

    for(int j = 0; j < n; j++) {
        ans += (x[j] - rounded) * (x[j] - rounded);
    }

    cout << ans << endl;
    return 0;
}
