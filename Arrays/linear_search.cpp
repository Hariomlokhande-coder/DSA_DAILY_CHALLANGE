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