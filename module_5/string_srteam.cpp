#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;

    getline(cin, str);

    // Convert the string to a stream
    stringstream ss(str);

    string word;
    // Read words from the stream
    while(ss >> word){
        // Print each word
        cout << word << endl;
    }
    // Alternatively, you can use getline to read the entire line
    // while(getline(ss, word, ' ')){
    //     // Print each word
    //     cout << word << endl;
    // }
    return 0;
}