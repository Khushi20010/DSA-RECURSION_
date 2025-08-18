#include<iostream>
using namespace std;
int LinearSearch(int n  , int arr[] , int index , int key){
    if(index == n) return -1;
    if(arr[index] == key ) return index;
    return LinearSearch(n,arr ,  index+1  , key);
}
int main(){
    int arr[]  ={23,45,67,89,67,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Element which need to be search:   ";
    cin>>key;
    int result = LinearSearch(n , arr , 0 , key);
    if(result!=-1){
        cout<<"Element found at index   "<<result<<endl;
    }
    else{
    cout<<"No elements found";
    }
    return  0;


}