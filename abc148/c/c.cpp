#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    long long x = A * B;

    if(A < B) {
        int tmp = A;
        A = B;
        B = tmp;
    }

    long long r = A % B;
    while(r != 0) {
        A = B;
        B = r;
        r = A % B;
    }

    cout << x / B << endl;
}
