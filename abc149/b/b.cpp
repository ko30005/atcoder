#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, K;
    cin >> A >> B >> K;

    long long ARem = A - K;
    long long BRem = B;
    if(ARem < 0) {
        BRem = B - std::abs(ARem);

        ARem = std::signbit(ARem) ? 0 : ARem;
        BRem = std::signbit(BRem) ? 0 : BRem;
    }

    cout << ARem << " " << BRem << endl;
}
