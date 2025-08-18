#include<iostream>
using namespace std;
int Sumofdigits(int n){
    if( n== 0) return 0;
    return (n%10) + Sumofdigits(n/10);
}
int main(){
    int n; 
    cout<<"Enter n  :  ";
    cin>>n;
    cout<<"Sum of digits are  "<<Sumofdigits(n)<<endl;
    return 0;
}

