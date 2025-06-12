#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string S, X;
        cin >> S >> X;

        while (true) {
            int index = S.find(X);
            
            if (index != -1) {
                
                S.replace(index, X.length(), "#");
                
            } else {
                break;
            }
        }

        cout << S << endl;
    }

    return 0;
}
