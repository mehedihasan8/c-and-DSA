#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1 = "Hello, World!";

    string s2 = " Hi there!";

    // Concatenation of two strings

     s1 += s2;

    //cout << s1 << endl;


    // Concatenation using append() function

    s1.append(s2);

    cout << s1 << endl;


    //concatenation last character using push_back()
    s1+= '!';
    // or you can use push_back() function
    s1.push_back('!');


    //remove the last character using pop_back()
    s1.pop_back();

    string s3 = "Hello, World!";

    //assign a string to another string
    
    s3 = 'Hello, Universe!';
    // or you can use assign() function
    s3.assign("Hello, Universe!");
    cout << s3 << endl;


    //erase a part of the string
    // erase from index 5 to the end of the string
    s3.erase(5); 
    // or you can use erase() function with two parameters
    // erase from index 5 to index 13 (8 characters)
    s3.erase(5, 8); 



    string s4 = "Hello, ";

    //replace a part of the string
    s4.replace(0, 5, "Hi");
    // or you can use replace() function with two parameters
    // replace from index 0 to index 5 (6 characters)
    s4.replace(0, 5, "Hi there!");
    cout << s4 << endl;

    //insert a part of the string
    s4.insert(5, "there! ");
    // or you can use insert() function with two parameters
    // insert "there! " at index 5
    s4.insert(5, "there! ", 0, 6); // insert first 6 characters of "there! "
    cout << s4 << endl;

    return 0;
}