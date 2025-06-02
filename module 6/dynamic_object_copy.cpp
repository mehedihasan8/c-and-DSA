#include <bits/stdc++.h>

using namespace std;

class Cricketer{
    
    public:
        int jearcy;
        string name;
        
    Cricketer(string name, int jearcy){
        this->name = name;
        this->jearcy = jearcy;
    }
    
};


int main() {
    Cricketer* dhoni = new Cricketer("Dhoni", 100);
     
    Cricketer* kohili = new Cricketer("Kohili", 118);
    
    
    //de references operator (*) is used to access the members of the class
     //and the assignment operator (=) is used to copy the values from one object to another 
    
    
     *kohili = *dhoni;
     
     delete dhoni;
    
    cout << kohili->jearcy << endl;
    
    return 0;
}