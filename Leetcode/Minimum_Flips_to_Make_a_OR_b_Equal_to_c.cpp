#include <iostream>

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
        while (a>0 || b>0 || c>0)
        {
            // take each least bit
            int bit_a = a & 1;
            int bit_b = b & 1;
            int bit_c = c & 1;
            if(bit_c == 0) //is bit_c 0
                flips += bit_a + bit_b;
            else if ((bit_a | bit_b) != 1) //is bit_c 1
                flips += 1;
            // std::cout<<flips<<std::endl;
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return flips;
    }
};

int main()
{
    Solution s;
    // std::cout<< s.minFlips(2,6,5) << std::endl;
    std::cout<< s.minFlips(8,3,5) << std::endl;
    // std::cout<< (1|2) << std::endl;
    // std::cout<< (1&999999) << std::endl;
}