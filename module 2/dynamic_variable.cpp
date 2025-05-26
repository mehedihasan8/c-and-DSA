#include<bits/stdc++.h>
using namespace std;

int fun (){
    int *p = new int();

    *p = 10;

    return *p;
}

int main(){

    int x = fun();
    cout << x << endl;
    // Memory leak occurs here because 'p' is not deleted   
    // and the memory allocated for it is not freed.
    // To avoid memory leak, we should delete the allocated memory.
    // delete p; // Uncommenting this line will free the allocated memory.
    // However, since 'p' is a local variable in 'fun', we cannot access it here.
    
    return 0;
}