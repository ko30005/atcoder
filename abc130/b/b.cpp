#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    int l[n];

    if(n == 0) {
        cout << 0 << endl;
        return 0;
    }
    int count = 1, bound = 0;
    for(int i = 0; i < n; i++) {
        cin >> l[i];
        bound += l[i];
        if(bound <= x) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
