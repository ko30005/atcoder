#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    string str = std::to_string(n);
    for(int i = 0; i < str.length(); i++) {
        ans += (int)(str[i] - '0');
    }

    if(n % ans == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
