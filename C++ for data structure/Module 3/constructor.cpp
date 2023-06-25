#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r,int s, int c,char *n)
    {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);
    }
};
int main()
{
    Student rahim(30,'A',9,"rahim");
    Student rina(36,'B',9,"rina");

    cout<<rina.name<<endl;
    cout<<rina.cls<<endl;
    cout<<rina.section<<endl;
    cout<<rina.roll<<endl;
    return 0;
}