#include<iostream>
using namespace std;
int  Sumelements(int arr[] , int n  , int index){
    if(index == n) return 0;
    return arr[index]  + Sumelements(arr , n , index+1);
    
}
int main(){
    int arr[] = {5,4,32,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"sum of all the elements of array are:   "<<Sumelements(arr , n , 0)<<endl;
    return 0;
}