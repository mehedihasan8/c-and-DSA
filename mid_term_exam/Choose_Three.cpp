#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        int arr[N];

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        bool found = false;

        for (int i = 0; i < N - 2 ; i++) {
            for (int j = i + 1; j < N - 1; j++) {
                for (int k = j + 1; k < N ; k++) {
                    int sum = arr[i] + arr[j] + arr[k];
                    if (sum == S) {
                        found = true;
                        break;
                    }
                }

            if (found) 
                    break;
            }

        if (found)
                break;
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
