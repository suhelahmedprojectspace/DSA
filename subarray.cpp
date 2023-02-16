#include<iostream>
#include<vector>
using namespace std;
void subArraySum(vector<int>arr,long long sum){
    int currentSum,i,j;
    for(int i=0;i<arr.size();i++){
      currentSum=arr[i];
      for(int j=i+1;j<=arr.size();j++){
        if(currentSum==sum){
          cout<<"Sum found between indexes"<<i<<"and"<< j-1 <<endl;
          return;
        }
        if(currentSum > sum || j==arr.size()){
          break;
        }
        currentSum = currentSum + arr[j];
      }
    }
    cout<<"No subarray found";
    return;
}
int main(){
    int noOfelements=0;
    int sum=0;
    int element=0;
    int ans=0;
    vector<int>arr;
    cout<<"Enter the sum"<<endl;
    cin>>sum;
    cout<<"Enter the noofElement in the array"<<endl;
    cin>>noOfelements;
    for(int i=0;i<noOfelements;i++){
       cin>>element;
       arr.push_back(element);
    }
   subArraySum(arr,sum);
    
}