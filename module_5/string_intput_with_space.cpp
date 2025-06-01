#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n; // Read an integer input
    string str; // redefine a string variable

    cin.ignore(); // Ignore the newline character left in the input buffer


    // Read a line of input including spaces
    getline(cin, str); 


    cout << str << endl;

    // Print the integer input
    cout << "Integer input: " << n << endl;


    return 0;
}