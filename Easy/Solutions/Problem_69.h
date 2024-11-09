#pragma once
#include <limits>

class Solution {
public:
    int mySqrt(int x) {
        long long int left = 0;
        long long int right = std::numeric_limits<int>::max();
        long long int centre = 0;
        while (true) {
            centre = (right - left) / 2 + left;
            if (centre * centre <= x &&
                (centre + 1) * (centre + 1) > x) {
                break;
            }
            if (centre * centre > x) {
                right = centre;
            }
            else {
                left = centre;
            }
            
        }
            
        return centre;

    }
};

