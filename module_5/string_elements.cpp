#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin >> s;

    // Print the first character
    cout << "First character: " << s[0] << endl;

    // print the first character using at()
    cout << s.at(0) << endl;

    // Print the last character
    cout << "Last character: " << s[s.size() - 1] << endl;

    // print the last character using at()
    cout << s.at(s.size() - 1) << endl;
    

    // print the first character using front()

    cout << s.front() << endl;

    // print the last character using back()
    cout << s.back() << endl;
    return 0;
}