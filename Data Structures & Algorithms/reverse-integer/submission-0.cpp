class Solution {
public:
    int reverse(int x) {
        long long num = x;
        int neg = 0;
        if (num < 0) {
            neg = 1;
            num *= -1;
        }
        long long div = num, abc = num;
        int dig = 0;
        while (abc != 0) {
            abc /= 10;
            dig++;
        }
        long long ans = 0;
        while (div != 0) {
            int rem = div % 10;
            div /= 10;

            ans += rem * (long long)pow(10, dig - 1);
            dig--;
        }

        if (neg) ans *= -1;

        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return (int)ans;
    }
};