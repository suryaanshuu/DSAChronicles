//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    vector<long long> res;
    int flag;
    /*
    // This is the brute force approach
    for(int i = 0 ; i < N - K + 1; i++){
        flag = 0;
        for(int j = i; j < i + K; j++){
            if(A[j] < 0){
                res.push_back(A[j]);
                flag = 1;
                break;
            }
        }
        if(flag == 0) res.push_back(0);
    }
    */
    
    // Optimised Approach -> Sliding Window
    // int p = -1;
    
    // for(int i = 0; i < K; i++){
    //     if(A[i] < 0){
    //         p = i;
    //         break;
    //     }
    // }
    
    // p == -1? res.push_back(0): res.push_back(A[p]);
    
    // for(int i = 1; i < N - K + 1; i++){
    //     if(p >= i && p < i + K){
    //         res.push_back(A[p]);
    //     }
    //     else{
    //         int j = 0;
    //         flag = 0;
    //         while(j < K){
    //             if(A[i + j] < 0){
    //                 p = j + i;
    //                 res.push_back(A[p]);
                    
    //                 if(j == K - 1) flag = 1;
                    
    //                 break;
    //             }
    //             // else if(flag){
    //             //     res.push_back(0);
    //             // }
    //             j++;
    //         }
    //         if(j == K){
    //         res.push_back(0);
    //     }
    //     }
    // }
    // return res;
    
    std::vector<long long> ans(N - K + 1);
    int l = 0, r = K - 1;
    std::list<int> arr;
    for (int i = 0; i < N; i++) {
        if (A[i] < 0) {
            arr.push_back(i);
        }
    }
    while (r < N) {
        if (arr.empty()) break;
        int b = arr.front();
        if (b > r) {
            while (r != b) {
                ans[l] = 0;
                l++;
                r++;
            }
        }
        if (l <= b && r >= b) {
            while (r < N && l <= b) {
                ans[l] = A[b];
                l++;
                r++;
            }
        }
        arr.pop_front();
    }
    return ans;
}   