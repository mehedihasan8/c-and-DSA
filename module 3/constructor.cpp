#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        int cls;
        int roll;
        double gpa;

    Student(int c, int r, double g){
        cls = c;
        roll = r;
        gpa = g;
    }    
};

int main(){

    Student s1(10, 1, 3.5);
    Student s2(10, 2, 3.8);


    cout <<s1.cls << " " << s1.roll << " " << s1.gpa << endl;
    cout <<s2.cls << " " << s2.roll << " " << s2.gpa << endl;

    return 0;
}