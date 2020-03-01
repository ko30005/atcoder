#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<vector<int>> a(3, vector<int>(3));

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(a[j][k] == b[i]) {
                    a[j][k] = 0;
                }
            }
        }
    }

    bool bingo = false;
    for(int i = 0; i < 3; i++) {
        int count = 0;
        for(int j = 0; j < 3; j++) {
            if(a[i][j] == 0) {
                count++;
            }
            if(count == 3) {
                bingo = true;
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        int count = 0;
        for(int j = 0; j < 3; j++) {
            if(a[j][i] == 0) {
                count++;
            }
            if(count == 3) {
                bingo = true;
            }
        }
    }

    int count = 0;
    for(int i = 0; i < 3; i++) {
        if(a[i][i] == 0) {
            count++;
        }
        if(count == 3) {
            bingo = true;
        }
    }

    if(a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0) {
        bingo = true;
    }

    if(bingo) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
