#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    // Reverse the array using reverse function
    // same as sort function
    // reverse(arr, arr + n); // This will reverse the array in place
    reverse(arr, arr + n);
    // Print the reversed array


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}