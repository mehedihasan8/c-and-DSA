#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello, World!";
    cout << "Initial string: " << s << endl;
    // check the length of the string
    cout << s.size() << " ";

    // check the capacity of the string
    cout << s.capacity() << endl;

    // clear the string
    s.clear();

    //check the string empty or not, it's return true or false
    s.empty();

    //string resize, it's change the size of the string
    s.resize(40);
    return 0;
}