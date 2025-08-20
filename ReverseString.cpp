 #include<iostream>
using namespace std;
void ReverseString(string &s ,int st , int e){
    if(st>=e) return;
    swap(s[st] , s[e]);
    ReverseString(s , st+1 , e-1);

}
int main(){
    string s = "ANUSHKA YADAV";
  
    ReverseString(s , 0 ,s.length()-1 );
    cout<<"Reverse elements are:  "<<s<<endl;
    
    return 0;

}