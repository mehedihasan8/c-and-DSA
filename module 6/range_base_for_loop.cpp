#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;


    // using normal for loop to iterate through the string
    for(int i = 0; i < s.length(); i++){
        cout << s[i] << " ";
    }

    //using range-base for loop to iterate through the string

    for(char c : s){
        cout << c << " ";
    }

    cout << endl;

    
    return 0;
}