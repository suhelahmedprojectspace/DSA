// #include<iostream>
// using namespace std;
// void rearrange(int arr[],int n){
//     int i=-1,j=n;
//     while(i<j){
//         while(i<=n-1 && arr[i]>0){
//             i+=1;
//         }
//         while(j>=0 and arr[j]<0){
//             j=j-1;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     if(i==0 || i==n) return;
//     int k=0;
//     while(k<n && i<n){
//         swap(arr[k],arr[i]);
//         i=i+1;
//         k=k+2;
//     }
  
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={2,3,-5,1,6,-9};
//     int n=6;
//     cout<<"Given array is \n";
//     printArray(arr,n);
//     cout<<endl;
//     rearrange(arr,n);
//    // printArray(arr,n);
//     return 0;
// }
#include <assert.h>
#include <iostream>
using namespace std;

// Utility function to right rotate all elements between
// [outofplace, cur]
void rightrotate(int arr[], int n, int outofplace, int cur)
{
	char tmp = arr[cur];
	for (int i = cur; i > outofplace; i--)
		arr[i] = arr[i - 1];
	arr[outofplace] = tmp;
}

void rearrange(int arr[], int n)
{
	int outofplace = -1;

	for (int index = 0; index < n; index++) {
		if (outofplace >= 0) {
			if (((arr[index] >= 0) && (arr[outofplace] < 0))
				|| ((arr[index] < 0)
					&& (arr[outofplace] >= 0))) {
				rightrotate(arr, n, outofplace, index);
				if (index - outofplace >= 2)
					outofplace = outofplace + 2;
				else
					outofplace = -1;
			}
		}

		// if no entry has been flagged out-of-place
		if (outofplace == -1) {
			// check if current entry is out-of-place
			if (((arr[index] >= 0) && (!(index & 0x01)))
				|| ((arr[index] < 0) && (index & 0x01))) {
				outofplace = index;
			}
		}
	}
}

// A utility function to print an array 'arr[]' of size 'n'
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{

	int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, n);

	rearrange(arr, n);

	cout << "Rearranged array is \n";
	printArray(arr, n);

	return 0;
}
