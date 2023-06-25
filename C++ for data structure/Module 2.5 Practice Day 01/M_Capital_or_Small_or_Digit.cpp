#include<bits/stdc++.h>
using namespace std;
// int main() 
// {
//     char X;
//     cin >> X;
//     switch (X) 
//     {
//         case '0':
//         case '1':
//         case '2':
//         case '3':
//         case '4':
//         case '5': 
//         case '6':
//         case '7':
//         case '8':
//         case '9':
//             cout <<"IS DIGIT"<<endl;
//             break;

//         case 'A':
//         case 'B':
//         case 'C':
//         case 'D':
//         case 'E':
//         case 'F':
//         case 'G':
//         case 'H':
//         case 'I':
//         case 'J':
//         case 'K':
//         case 'L':
//         case 'M':
//         case 'N':
//         case 'O':
//         case 'P':
//         case 'Q':
//         case 'R':
//         case 'S':
//         case 'T':
//         case 'U':
//         case 'V':
//         case 'W':
//         case 'X':
//         case 'Y':
//         case 'Z':
//             cout <<"ALPHA"<<endl<<"IS CAPITAL";
//             break;

//         case 'a':
//         case 'b':
//         case 'c':
//         case 'd':
//         case 'e':
//         case 'f':
//         case 'g':
//         case 'h':
//         case 'i':
//         case 'j':
//         case 'k':
//         case 'l':
//         case 'm':
//         case 'n':
//         case 'o':
//         case 'p':
//         case 'q':
//         case 'r':
//         case 's':
//         case 't':
//         case 'u':
//         case 'v':
//         case 'w':
//         case 'x':
//         case 'y':
//         case 'z':
//             cout <<"ALPHA"<<endl<<"IS SMALL";
//             break;

//         return 0;
//     }
// }
int main()
{
    char X;
    cin>>X;
    if(X>='A' && X<='Z')
    {
        cout <<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(X>='a' && X<='z')
    {
        cout <<"ALPHA"<<endl<<"IS SMALL";
    }
    else
    {
        cout <<"IS DIGIT"<<endl;
    }
    return 0;
}
