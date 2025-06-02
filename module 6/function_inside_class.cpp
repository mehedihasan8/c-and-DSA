#include<bits/stdc++.h>

using namespace std;


class Student{
    public:
    string name;
    int roll;

    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }

    void displayDetails(){
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main(){

    // Creating an object of the Student class

    Student s1("John Doe", 101);

    // Displaying the details of the student using the method inside the class
    s1.displayDetails();
    return 0;
}