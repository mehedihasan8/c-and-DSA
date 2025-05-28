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


Student fun(){

    Student s1(1, 10, 3.5);
    return s1;
}


int main(){


    Student s2 = fun(); // calling the function that returns an object
    // or you can also use Student s2(fun());
    cout << s2.roll << " " << s2.cls << " " << s2.gpa << endl;


    return 0;
}