#include<iostream>
using namespace std;
int binarySearch(int arr[] , int st , int end , int key){
    if(st>end) return -1;
    int mid = st+(end-st)/2;
    if(key == arr[mid]) return  mid;
    if(arr[mid]>key){
        return binarySearch(arr  , st, mid+1  , key);
    }
    return binarySearch(arr , mid+1 , end , key);
}
int main(){
    int arr[] = {2,4,6,8,10,20,30};
    int n =  sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Element that need to search:  ";
    cin>>key;
    int result = binarySearch(arr , 0 , n-1, key);
    if(result !=-1){
        cout<<"Element found at  "<<result<<endl;
    }
    else
    cout<<" No Element found   "<<endl;
}