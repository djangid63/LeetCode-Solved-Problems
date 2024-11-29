class Solution {
public:
    string reformat(string s) {
        string alpha, num;

        for (auto ch : s) {
            if (isalpha(ch))
                alpha += ch;
            else
                num += ch;
        }

        int alphaLen = alpha.length();
        int numLen = num.length();
        if (abs(alphaLen - numLen) > 1)
            return "";

        string modifiedString;
        int j = 0, k = 0;
        bool flag = alphaLen >= numLen;

        for (int i = 0; i < s.length(); i++) {
            if (flag)
                modifiedString += alpha[j++];
            else
                modifiedString += num[k++];
            flag = !flag;
        }

        return modifiedString;
    }
};