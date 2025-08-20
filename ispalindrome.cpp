#include<iostream>
using namespace std;
bool isPalindrome(string&s , int st  , int e){
    if(st>=e) return true;
    if(s[st] != s[e]) return false;
    return isPalindrome(s , st+1 , e-1);
}
int main(){
    string s;
    cout<<"Enter a palindrome:  ";
    cin>>s;
    if(isPalindrome(s , 0 , s.length()-1)){
        cout<<s<<"   is palindrome";
    }
    else{
          cout<<s<<"  is not a  palindrome";
    }
    return 0;
}