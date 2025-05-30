#include<bits/stdc++.h>
using namespace std;

class Cricketer{
 public:
    int jersey_no;
    string name;
};

int main(){

    Cricketer *dhoni = new Cricketer;

    dhoni->jersey_no = 7;
    dhoni->name = "Mahendra Singh Dhoni";


    cout << "Jersey No: " << dhoni->jersey_no << endl;
    cout << "Name: " << dhoni->name << endl;

    return 0;
}