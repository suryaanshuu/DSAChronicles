class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string res = "";
        vector<string> str;
        stringstream ss(s);

        while(ss>>temp){
            str.push_back(temp);
        }

        for(int i = str.size() - 1; i >= 0; i--){
            res = res + str[i];
            if(i !=0){
                res = res + " ";
            }
        }
        return res;
    }
};