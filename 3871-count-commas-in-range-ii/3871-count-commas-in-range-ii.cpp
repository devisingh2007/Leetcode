class Solution {
public:
    long long countCommas(long long n) {
        long long c = 0;
        long long a = n;
        if (n > 999) {
            c += a - 999;
        }
        a = n;
        if (n > 999999) {
            c += a - 999999;
        }

        a = n;
        if (n > 999999999) {
            c += a - 999999999;
        }
        a = n;
        if (n > 999999999999) {
            c += a - 999999999999;
        }
        a = n;
        if (n > 999999999999999) {
            c += a - 999999999999999;
        }
        a = n;
        if (n > 999999999999999999) {
            c += a - 999999999999999999;
        }

        return c;
    }
};