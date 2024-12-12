class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string newStr = s;
        for(int i = 0; i < s.length(); i++){
          newStr[indices[i]] = s[i]; 
        }
        return newStr;
    }
};