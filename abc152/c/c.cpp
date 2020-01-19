#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int lowest;
    int p;
    int count = 0;

    int array[n];
    for(int i = 0; i < n; ++i) {
        cin >> p;

        if(i == 0) {
            lowest = p;
            ++count;
            continue;
        };

        if(p <= lowest) {
            lowest = p;
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}
