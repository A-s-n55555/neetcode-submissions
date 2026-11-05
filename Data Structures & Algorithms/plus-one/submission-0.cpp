class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        // vector<int> ans(n+1);
        for(int i=n-1;i>-1;i--){
            if(digits[i]==9 && carry==1){
                digits[i]=0;
                carry =1;
            }
            else if(digits[i]==9){
                digits[i]=0;
                carry =1;
            }
            else{
                digits[i] +=1;
                return digits; 
            }
        }
        if(carry==1){
            vector<int> ans(n+1);
            for(int i=1;i<n+1;i++) ans[i] = digits[i-1];
            ans[0] =1;
            return ans;
        }
        return digits;
    }
};
