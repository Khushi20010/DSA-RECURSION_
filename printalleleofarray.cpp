#include<iostream>
using namespace std;
void printEle(int arr[] , int n , int index){
    if(index == n) return;
    cout<<arr[index]<<" ";
    printEle(arr , n , index+1);
}
int main(){
    int arr[] ={1,1,2,2,3,4,5,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"all the elements are   "<<endl;
    printEle(arr , n , 0);
    return 0;
}