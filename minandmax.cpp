#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void MinandMax(vector<vector<int> >arr,int row,int col){
    int maximun=INT_MIN;
    int minimun=INT_MAX;
    for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            if(arr[i][j]>maximun){
                maximun=arr[i][j];
            }
         }
    }
     for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            if(arr[i][j]<minimun){
                minimun=arr[i][j];
            }
         }
    }
   cout<<"Maximum number is  "<<maximun<<endl;
   cout<<"Minimum number is "<<minimun<<endl;;
}
int main(){
    int col=4;
    int row=3;
    int element=0;
    vector<vector<int> >arr(row, vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>element;
            arr[i][j]=element;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    MinandMax(arr,row,col);
    return 0;
    
}