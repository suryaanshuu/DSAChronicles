class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;
        long long res = 0;
        
        // White Chars
        while(i < s.size() and s[i] == ' ') i++;

        // Check for Sign
        if(i < s.size() && (s[i] == '-' || s[i] == '+')){
            sign = (s[i] == '-')? -1 : 1;
            i++;
        }

        // Converting to Int
        for(; i  < s.size(); i++){
            if(isdigit(s[i])){
                res = res * 10 + (s[i] - '0');
                if(res > INT_MAX) {
                    return sign == 1 ? INT_MAX : INT_MIN;
                }
            }
            else{
                break;
            }
        }

        return sign * res;
    }
};