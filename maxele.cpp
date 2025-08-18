#include<iostream>
#include<climits>
using namespace std;
int findmaxele(int arr[] , int n , int index){
    if(index == n) return INT16_MIN;
    return max(arr[index] , findmaxele(arr , n , index+1));
}
int main(){
    int arr[] = {233333,4533,673,893,433,21,3564,777777};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum element is:  "<<findmaxele(arr , n   , 0);
}