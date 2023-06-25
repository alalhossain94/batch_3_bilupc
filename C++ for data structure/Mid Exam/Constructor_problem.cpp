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
    // Create dynamic object of Person class using constructor
    Person* person = new Person("Bob Dylan", 5.7, 82);

    cout << "Name: " << person->name << endl;
    cout << "Height: " << person->height << " feet" << endl;
    cout << "Age: " << person->age << " years" << endl;

    return 0;
}

