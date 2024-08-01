class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";

        if(strs.size() == 1){
            return strs[0];
        }

        sort(strs.begin(), strs.end());

        string st = strs[0];
        string ed = strs[strs.size() - 1];

        for(int i = 0; i < ed.size(); i++){
            if(st[i] == ed[i]){
                res += st[i];
            }
            else{
                res +="";
                break;
            }
        }
        return res;
    }
};