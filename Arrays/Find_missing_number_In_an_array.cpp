// /*
//     Problem: Find Missing Number in Array
//     Approach: Sum Formula
//     Time Complexity: O(n)
//     Space Complexity: O(1)

#include <iostream>
using namespace std;
int main() {

    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;//sizeof(arr) / sizeof(arr[0])
    int sum = 0;
    
    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    int total_sum = (n * (n + 1)) / 2;
    int missing_number = total_sum - sum;
    cout << "Missing number is: " << missing_number;
    return 0;
}