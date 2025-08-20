#include<iostream>
using namespace std;
void ReverseArray(int arr[]  ,int st , int e){
    if(st>=e) return;
    swap(arr[st] , arr[e]);
    ReverseArray(arr , st+1 , e-1);

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    ReverseArray(arr , 0 , n-1);
    cout<<"Reverse elements are:  ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}