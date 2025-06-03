#include <bits/stdc++.h>

using namespace std;


int main() {
    string std;
    
    cin >> std;
    
    bool isPalindrome = true;
    
    for(int i = 0, j= std.size() - 1; i<std.size(); i++, j--){
        if(std[i] != std[j]){
            isPalindrome = false;
            break;
        }
    }
    
    if(isPalindrome){
        cout << "YES" <<endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}