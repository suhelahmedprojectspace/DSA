//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int start=0;
        int end=n-1;
        int i=0;
        while(start<=end){
            if(a[start]==0){
                swap(a[i],a[start]);
                i++;
                start++;
            }
            else if(a[start]==2){
                swap(a[end],a[start]);
                end--;
            }
            else{
                start++;
            }
            
        }
    
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends
