class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int temp = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                count++;
                temp = max(temp, count);
            }
            else if(s[i] == ')'){
                count--;
            }
        }
        return temp;
    }
};