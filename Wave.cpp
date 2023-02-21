#include<iostream>
using namespace std;
#define Row 5
#define col 4
void WavePrint(int m,int n,int arr[Row][col]){
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
     int arr[Row][col] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 },
                      { 17, 18, 19, 20 } };
    WavePrint(Row,col,arr);
    return 0;
}