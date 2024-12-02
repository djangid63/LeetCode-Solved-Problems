class Solution {
public:
    string removeTrailingZeros(string num) {
        int size = num.size();
        for(int i = size-1; i > 0; i--){
            if(num[i] == '0'){
                num.erase(i);
            }else{
                break;
            }
        }
        return num;
    }
};