#include<bits/stdc++.h>
using namespace std;

class MyStaticObject {
public:
    int value;

    MyStaticObject(int v) {
        value = v;
    }
};

MyStaticObject& getStaticObject() 
{
    static MyStaticObject staticObject(10);
    return staticObject;
}

int main() 
{
    MyStaticObject& obj = getStaticObject();
    cout << "Value: " << obj.value << endl;

    return 0;
}

