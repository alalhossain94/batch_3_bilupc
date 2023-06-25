#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    string name;
    int age;

    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }
};

int main() {
    // Create objects using the constructor
    Student Mike("Mike", 35);
    Student John("John", 30);

    // Access the object's attributes
    cout << "Name: " << Mike.name << ", Age: " << Mike.age << endl;
    cout << "Name: " << John.name << ", Age: " << John.age << endl;

    return 0;
}
