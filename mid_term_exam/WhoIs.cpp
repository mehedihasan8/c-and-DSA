#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int ID;
    char Name[101]; 
    char Section;
    int Total_Marks;
};

int main() {
    int T;
    cin >> T; 

    while (T--) {
        Student first_Student;
        bool isFirst = true;  

        for (int i = 0; i < 3; i++) {
            Student temp_Student;
            cin >> temp_Student.ID >> temp_Student.Name >> temp_Student.Section >> temp_Student.Total_Marks;

            if (isFirst) {
                first_Student = temp_Student;
                isFirst = false;
            } 
            else if (temp_Student.Total_Marks  > first_Student.Total_Marks) {
                first_Student = temp_Student;
            } 
            
            else if (temp_Student.Total_Marks == first_Student.Total_Marks && temp_Student.ID < first_Student.ID) {
                first_Student = temp_Student;
            }
        }

        cout << first_Student.ID << " " << first_Student.Name << " " << first_Student.Section << " " << first_Student.Total_Marks << endl;
    }

    return 0;
}
