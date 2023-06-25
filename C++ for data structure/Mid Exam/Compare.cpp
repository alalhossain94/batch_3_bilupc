#include<bits/stdc++.h>
using namespace std;
class Person {
public:
    string name;
    float height;
    int age;

    // Constructor
    Person(string n, float h, int a) {
        name = n;
        height = h;
        age = a;
    }
};

int main() {
    // Create two objects of Person class and initialize them
    Person* Bob_Dylam=new Person("Bob Dylan", 5.7, 82);
    Person* Bob_Marley=new Person("Bob Marley", 5.7, 36);

    // Compare the ages and print the name of the person with the greater age
    if (Bob_Dylam->age > Bob_Marley->age) 
    {
        cout << Bob_Dylam->name<<endl;
    } 
    else if (Bob_Marley->age >Bob_Dylam->age) 
    {
        cout << Bob_Marley->name<<endl;
    } 
    else 
    {
        cout << "Both persons have the same age." << endl;
    }
    return 0;
}





