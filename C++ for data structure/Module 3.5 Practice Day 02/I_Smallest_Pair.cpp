#include<bits/stdc++.h>
using namespace std;
int smallestResult(int A[], int N) 
{
    int minResult = INT_MAX;  // Initialize the minimum result to a large value
    
    for (int i = 0; i < N; i++) 
    {
        for (int j = i + 1; j < N; j++) 
        {
            int result = A[i] + A[j] + j - i;
            minResult = min(minResult, result);  // Update the minimum result if necessary
        }
    }
    
    return minResult;
}

int main()
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int result = smallestResult(A, N);
        cout<< result << endl;
    }
    return 0;
}