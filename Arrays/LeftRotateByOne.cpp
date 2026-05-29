//Store first element in a variable
//Shift all elements one position to the left
//Put stored element at the last index
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,6,8};
    int n=5;
    int first = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}