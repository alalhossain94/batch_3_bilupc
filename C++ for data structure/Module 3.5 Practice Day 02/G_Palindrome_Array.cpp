#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int A[], int N)
{       
    int left=0;
    int right=N-1;
    while(left<right)
    {
        if(A[left] != A[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    bool result=isPalindrome(A,N);
    if(result)
    {   
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}