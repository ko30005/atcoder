#include <bits/stdc++.h>
using namespace std;

int getDigit(int n) {
    int digit = 0;
    while(n != 0) {
        n = n / 10;
        ++digit;
    }
    return digit;
}

int main() {
    int n;
    cin >> n;

    int digit = 0;
    int count = 0;
    for(int i = 1; i <= n; ++i) {
        digit = getDigit(i);
        if(digit % 2 != 0) {
            count++;
        };
    }

    cout << count << endl;

    return 0;
}
