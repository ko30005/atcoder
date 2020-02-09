#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, t, u;
    int a, b;
    cin >> s >> t;
    cin >> a >> b;
    cin >> u;

    std::map<string, int> balls;

    balls[s] = a;
    balls[t] = b;

    balls[u] = balls[u] - 1;

    cout << balls[s] << " " << balls[t] << endl;
    return 0;
}
