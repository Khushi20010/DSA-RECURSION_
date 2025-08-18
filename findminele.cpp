#include<iostream>
#include<climits>
using namespace std;
int findminele(int arr[] , int n , int index){
    if(index == n) return INT16_MAX;
    return min(arr[index] , findminele(arr , n , index+1));
}
int main(){
    int arr[] = {23,45,67,89,43,21,3564,777777};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum element is:  "<<findminele(arr , n   , 0);
}