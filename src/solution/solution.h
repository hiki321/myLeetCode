#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

class Solution {
    public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums);
    void backtrack(std::vector<std::vector<int>>& res, std::vector<int>& nums, int first, int n);
    std::vector<std::vector<int>> permute2(std::vector<int>& nums);
};
#endif