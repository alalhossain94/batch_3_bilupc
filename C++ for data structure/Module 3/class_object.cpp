#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student rahim;
    rahim.roll=30;
    rahim.section='A';
    rahim.cls=10;
    char nm[100]="rahim";
    strcpy(rahim.name,nm);
    
    Student rina;
    rina.roll=50;
    rina.section='B';
    rina.cls=10; 
    char nm2[100]="rina";
    strcpy(rina.name,nm2);
    cout<<rahim.section;
    return 0;
}