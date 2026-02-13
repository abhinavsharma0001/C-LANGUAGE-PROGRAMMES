class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;
        bool gotFirst = false, gotSecond = false, gotThird = false;

        for (long long x : nums) {
            
            if ((gotFirst && x == first) ||
                (gotSecond && x == second) ||
                (gotThird && x == third)) {
                continue;
            }
            
            if (!gotFirst || x > first) {
                third = second;
                gotThird = gotSecond;
                second = first;
                gotSecond = gotFirst;
                first = x;
                gotFirst = true;
            }
            else if (!gotSecond || x > second) {
                third = second;
                gotThird = gotSecond;
                second = x;
                gotSecond = true;
            }
            else if (!gotThird || x > third) {
                third = x;
                gotThird = true;
            }
        }

        
        if (gotThird)
            return (int)third;
        return (int)first;
    }
};
