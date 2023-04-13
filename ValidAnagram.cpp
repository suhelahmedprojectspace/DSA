#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string s,string t){
    int frequencyTable[256]={0};
    for(int i=0;i<s.size();i++){
        frequencyTable[s[i]]++;
    }
    for(int j=0;j<t.size();j++){
        frequencyTable[t[j]]--;
    }
    for(int i=0;i<256;i++){
        if(frequencyTable[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
   string s="cat";
   string t="rat";
   bool ans=isAnagram(s,t);
   cout<<ans<<endl;
   return 0;

}
