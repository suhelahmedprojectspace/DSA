#include<iostream>
#include<string.h>
using namespace std;
int getLengthofstring(char name[]){
    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int reverseCharArray(char name[]){
    int start=0;
    int n=getLengthofstring(name);
    int end= n-1;
    while(start<=end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}
int main(){
    char name[100];
    cin >> name;
    cout << "Length is " << getLengthofstring(name) << endl;
    reverseCharArray(name);
    cout<<"After reveresal of stiring " << name <<endl;
    return 0;

}
