class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string temp1 = strs[0];
        string temp2 = strs[strs.size() - 1];
        int longer = temp1.size() > temp2.size()? temp1.size() : temp2.size();
        string res = "";

        for(int i = 0; i < longer; i++){
            if(temp1[i] == temp2[i]){
                res += temp1[i];
            }
            else if(temp1[i] != temp2[i]){
                break;
            }
        }
        return res;
    }
};