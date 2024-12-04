class Solution {
public:
    string clearDigits(string s) {
        string newStr = "";
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                if (!newStr.empty()) {
                    newStr.pop_back(); 
                }
            } else {
                newStr += s[i]; 
            }
        }
        return newStr;
    }
};
