// Question No: 12
// Difficulty: Easy
// Find the number that appears once, and the other numbers twice

// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.
// Examples

// Example 1:
// Input Format: arr[] = {2,2,1}
// Result: 1
// Explanation: In this array, only the element 1 appear once and so it is the answer.
// Example 2:
// Input Format: arr[] = {4,1,2,1,2}
// Result: 4
// Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.4

#include <iostream>
using namespace std;
int main(){
    int arr[]={4,1,2,1,2};
    int n= 5;
    int result=0;// to atore the final result

    for(int i=0; i<n; i++){
        if (arr[i]==arr[i+1]){
            result++;

        }
        else{
            result=arr[i];
        }

    }
    cout<<result;
    return 0;
}

            

