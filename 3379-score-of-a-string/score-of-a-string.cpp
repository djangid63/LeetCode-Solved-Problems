class Solution {
public:
    int scoreOfString(string s) {
        int total = 0;
        int n = s.length();
        for(int i = 0; i < n-1; i++){
            total += abs(s.at(i)- s.at(i + 1));

        }
        return total;
    }
};