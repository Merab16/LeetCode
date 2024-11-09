#pragma once

#include <string>


class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        
        auto ita = a.rbegin();
        auto itb = b.rbegin();
        std::string res;
        res.assign(std::max(a.size(), b.size()) + 1, '0');
        auto itres = res.rbegin();
        bool plus = false;

        while (ita != a.rend() && itb != b.rend()) {
            
            if (*ita == '1' && *itb == '1') {
                if (plus) {
                    *itres = '1';
                }
                plus = true;
            }
            else if (plus && *ita == '0' && *itb == '0') {
                plus = false;
                *itres = '1';
            }
            else if (!plus && *ita != *itb) {
                *itres = '1';
            }

            ++itres;
            ++ita;
            ++itb;

        }

        while (ita != a.rend()) {
            if (plus && *ita == '0'){
                *itres = '1';
                plus = false;
            }
            else if (!plus) {
                *itres = *ita;
            }
                
            ++itres;
            ++ita;
        }

        while (itb != b.rend()) {
            if (plus && *itb == '0') {
                *itres = '1';
                plus = false;
            }
            else if (!plus) {
                *itres = *itb;
            }

            ++itres;
            ++itb;
        }

        if (plus) {
            res[0] = '1';
            return res;
        } 
        return { res.begin() + 1, res.end() };
    }
};