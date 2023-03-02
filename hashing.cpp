#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element here "<<i<<endl;
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number to find its count"<<endl;
        cin>>number;
        cout<<"Number of time it appeared"<<endl;
        cout<<hash[number]<<endl;
    }
    return 0;
}