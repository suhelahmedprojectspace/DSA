#include<iostream>
#include<string.h>
using namespace std;
string reverseOnlyLettrer(string s){
    int l=0,h=s.size()-1;
    while(l<h){
        if(isalpha(s[l])&& isalpha(s[h])){
            swap(s[l],s[h]);
            l++,h--;
        }
        else if(!isalpha(s[l])){
            l++;
        }
        else{
            h--;
        }
    }
    return s;
}
int main(){
    string s="a-bC-dEf-ghIj";
    string ans=reverseOnlyLettrer(s);
    cout << ans << endl;
    return 0;
}
