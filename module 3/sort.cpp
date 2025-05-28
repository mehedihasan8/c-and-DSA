#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n; // Input the number of elements

    int arr[n]; // Declare an array of size n

    for(int i = 0; i < n; i++){
        cin >> arr[i]; // Input each element of the array
    }

    // Sort the array using the built-in sort function
    // function accept two pointers, the first pointer is the starting address of the array and the second pointer is the ending address of the array
    // The ending address is exclusive, so we use arr + n to get the address of the last element
    
    
    sort(arr, arr + n); // Sort the array in ascending order

    // If you want to sort in descending order, you can use the third parameter of the sort function
    // sort(arr, arr + n, greater<int>()); // Sort the array in descending order

    sort(arr, arr+n, greater<int>()); // Sort the array in ascending order using a custom comparator
    // sort(arr, arr+n, [](int a, int b) { return a > b; }); // Sort the array in descending order using a lambda function

    // Print the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}