class Solution {
public:
    int pivotInteger(int n) {
          long long total = 1LL * n * (n + 1) / 2;

        long long x = sqrt(total);

        if (x * x == total)
            return x;

        return -1;
    }
};