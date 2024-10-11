class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1);

        for(int i = 0; i < n + 1; i++){
            int j = i;
            int count = 0;
            vector<int>bin(1,0);
            while( j > 0){
                int rem = j % 2;
                if(rem == 1) count++;
                j = j / 2;
            }
            res[i] = count;
        }
    return res;
    }
};