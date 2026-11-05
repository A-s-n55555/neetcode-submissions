class Solution {
public:
    int bitsum(int x){
        int div =x;
        int total =0;
        while(div !=0){
            int rem = div%10;
            total += rem*rem;
            div = div/10;
        }
        return total;
    }
    bool isHappy(int n) {
        int x= n;
        while(1){
            if(x ==1 || x==7) return 1;
            else if(x<=9) return 0;
            else x = bitsum(x);
        }

    }
};
