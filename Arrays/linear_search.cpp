// Linear Search starts from the first element
// and checks each element one by one.
// If the target element is found, we return its index.
// If we reach the end of the array without finding it,
// then the element is not present in the array.

// Time Complexity: O(n)
// Space Complexity: O(1)
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int find = 4;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            cout << "Element found at index:" << i;
            return 0;
        }
    }

    cout << "Element not found in the array.";

    return 0;
}