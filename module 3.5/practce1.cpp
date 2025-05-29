

// Question: Create three static objects with the help of the constructor of the following class.
// Student
// {
// 	name;
// 	roll;
// 	section;
// 	math_marks;
// 	cls;
// }
// Then compare those 3 objects and print who got the highest math_marks and print his/her name.


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    double math_marks;
    int cls;

    Student(string name, int roll, char section, double math_marks, int cls) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }

};

int main() {
    Student s1("Foysal", 101, 'A', 99.5, 10);
    Student s2("Mehedi", 102, 'B', 89.0, 10);
    Student s3("Hasan", 103, 'C', 95.75, 10);

    // Assume s1 is the highest
    Student highest = s1;

    if(s2.math_marks > highest.math_marks) {
        highest = s2;
    }
    if(s3.math_marks > highest.math_marks) {
        highest = s3;
    }

    cout << "Top scorer in math is: " << highest.name << " with marks: " << highest.math_marks << endl;

    return 0;
}


