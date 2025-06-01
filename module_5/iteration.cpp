#include<bits/stdc++.h>
using namespace std;


int main(){

    string s = "Hello, World!";

    // here we will iterate through the string using a for loop
    for(int i = 0; i< s.size(); i++){
        cout << s[i] << " "; // Print each character using indexing
    }

    cout << endl;

    //here using begin function it's refer to the first pointer of the string
    cout << *s.begin() << endl;

    //here using end function it's refer to the last pointer of the string
    cout << *(s.end() - 1) << endl;


    // Using iterators to iterate through the string
    // Note: The iterator type for a string is `string::iterator`
    //here we will iterate through the string using a range-based for loop

    for(string::iteration it = s.begin(); it < s.end(); it++){
        // Print each character using iterator
        cout << *it << " ";
    }

    cout << endl;

    //using auto keyword to simplify the iterator declaration
    for(auto it = s.begin(); it < s.end(); it++){
        // Print each character using auto iterator
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}