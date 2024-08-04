class Solution {
public:
    bool rotateString(string s, string goal) {
        string final = s + s;

        if(s.size() != goal.size()) return false;

        for(int i = 0; i < s.size(); i++){
            if(goal == final.substr(i,goal.size())){
                return true;
            }
        }
        return false;
    }
};