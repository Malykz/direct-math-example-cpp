#ifndef FPB_CALC_H
#define FPB_CALC_H

#include <vector>

class FPBCalculator {
public:
    static int fpb(std::vector<int> nums) {
        int result = nums[0];
        for (size_t i = 1; i < nums.size(); i++) {
            result = gcd(result, nums[i]);
        }
        return result;
    }

    static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

#endif