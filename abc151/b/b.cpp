#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, m;
    cin >> n >> k >> m;

    int l, i = 0, arr[n];
    while(std::cin >> l) {
        arr[i] = l;
        i++;
        if(i > n) {
            break;
        }
    }

    int answeredNum = n - 1;
    int sum = accumulate(arr, arr + answeredNum, 0);

    for(int i = 0; i <= k; i++) {
        if((sum + i) / n >= m) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
