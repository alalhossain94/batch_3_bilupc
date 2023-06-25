#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Allocate a dynamically sized array of integers.
  int* myArray = new int[10];

  // Initialize the array elements.
  for (int i = 0; i < 10; i++) {
    myArray[i] = i;
  }

  // Print the array elements.
  for (int i = 0; i < 10; i++) {
    cout << myArray[i] << " ";
  }

  // Free the dynamically allocated memory.
  delete[] myArray;

    return 0;
}

// Create a dynamic array of 10 integers
int* myArray = new int[10];
