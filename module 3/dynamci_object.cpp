#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
        int roll;
        int cls;
        double gpa;
    
    // Default constructor

    Student(int roll, int cls, double gpa){
        this->roll = roll; // 'this' pointer refers to the current object
        this->cls = cls;
        this->gpa = gpa;

    }

};


int main(){

    // rahim is a dynamic object, it is created on the stack

    Student rahim (54, 4, 3.5); // Creating an object of Student class


    // You can also create a dynamic object on the heap using new keyword

   Student* karim =  new Student(55, 4, 3.6); // This object will not be accessible after this line

    
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    // Don't forget to delete the dynamic object to avoid memory leak
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    return 0;
}