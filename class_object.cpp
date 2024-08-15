#include<iostream>
using namespace std;
// memory layout [blueprint]
class animal{
    public:
        string name;
        int legs;
};
int main(){
    animal dog; // creating a variable/object of data type/class animal
    // assigning values
    
    dog.name="Gaurya"; 
    dog.legs=4;
    
    cout<<dog.name<<endl;
    cout<<dog.legs<<endl;
    return 0;
}
