#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "Hello";
    string s2("World");
    string s3(s1); // Copy constructor


    string s4(s1, 1, 3); // Copy from s1 starting at index 1 for 3 characters
    string s5(s2, 1, 3); // Copy from s2 starting at index 1 for 3 characters

    string s6(s1.begin(), s1.end()); // Copy from iterators

    string s7 = s1 + " " + s2; // Concatenation

    string s8 = s1 + " " + s2 + "!";

    cout << "s1: " << s1 << endl;

    cout << "s2: " << s2 << endl;

    cout << "s3: " << s3 << endl;

    cout << "s4: " << s4 << endl;

    cout << "s5: " << s5 << endl;

    cout << "s6: " << s6 << endl;

    cout << "s7: " << s7 << endl;

    cout << "s8: " << s8 << endl;

    cout << "Length of s1: " << s1.length() << endl;
    cout << "Length of s2: " << s2.length() << endl;
    cout << "Length of s3: " << s3.length() << endl;
    cout << "Length of s4: " << s4.length() << endl;

    cout << "Length of s5: " << s5.length() << endl;

    cout << "Length of s6: " << s6.length() << endl;
    cout << "Length of s7: " << s7.length() << endl;
    cout << "Length of s8: " << s8.length() << endl;
    cout << "s1[0]: " << s1[0] << endl; // Accessing first character
    cout << "s1[1]: " << s1[1] << endl; // Accessing second character
    
    return 0;
}