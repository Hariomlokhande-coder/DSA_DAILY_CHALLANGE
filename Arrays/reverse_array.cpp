#include<iostream>
using namespace std;
int main(){
    int arr[]={2,357,7,4,767};
    int n=5;
    
    int start =0;
    int end= n-1;
    
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}