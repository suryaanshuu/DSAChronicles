//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        int j;
        int k = 0;
        int flag;
        vector<int> res;
        for(int i = 0; i < n; i++){
            flag = 0;
            for(j = i + 1; j < n; j++){
                if(arr[i] < arr[j]){
                    flag = 1;
                    break;
                }
                // else{
                //     continue;
                // }
            }
            
            if(flag == 0){
                res.push_back(arr[i]);
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends