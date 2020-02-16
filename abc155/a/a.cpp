#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    std::map<int, int> map;
    map[a] += 1;
    map[b] += 1;
    map[c] += 1;

    if(map[a] == 2) {
        cout << "Yes" << endl;
        return 0;
    }
    if(map[b] == 2) {
        cout << "Yes" << endl;
        return 0;
    }
    if(map[c] == 2) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
