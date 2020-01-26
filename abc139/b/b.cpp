#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 0; i < b; i++) {
        int res = (a * i) - (i - 1);
        if(b <= res) {
            cout << i << endl;
            return 0;
        }
    }
}
