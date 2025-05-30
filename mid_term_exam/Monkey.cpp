#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while (getline(cin, str)) {

        int freq[26] = {0}; 

        for (int i = 0; i < str.length(); i++) {

            if (str[i] != ' ') {
                freq[str[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < freq[i]; j++) {
                cout << (char)(i + 'a');
            }
        }

        // sort(str.begin(), str.end());

        // for(int i = 0; i < str.length(); i++) {
        //     if (str[i] != ' ') {
        //         cout << str[i];
        //     }
        // }

        cout << endl;
    }

    return 0;
}
