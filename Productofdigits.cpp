#include<iostream>
using namespace std;
int Productofdigits(int n){
    if( n== 0) return 0;
    if(n<10) return n;
    return (n%10) * Productofdigits(n/10);
}
int main(){
    int n; 
    cout<<"Enter n  :  ";
    cin>>n;
    cout<<"Sum of digits are  "<<Productofdigits(n)<<endl;
    return 0;
}

