//https://leetcode.com/contest/weekly-contest-330/problems/count-distinct-numbers-on-board/

class Solution {
public:
    int distinctIntegers(int n) {
        if(n==0 || n==1)
            return 1;
        else
            return n-1;
    }
};
