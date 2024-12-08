class Solution {
public:
    bool isBalanced(string num) {
        int size = num.length();
            int even = 0, odd = 0;
        for(int i = 0; i < size; i++){
            if(i % 2 == 0){
             even += num[i] - '0';
            }else{
             odd += num[i] - '0';
            }
        }

        return odd == even;
    }
};