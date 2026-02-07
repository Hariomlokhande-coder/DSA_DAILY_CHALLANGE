#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int k = 3;
    for (int i = 0; i < n; i += k) {
        int left = 0;
        int right = i + k - 1;
        if (right >= n)
            right = n - 1;
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
