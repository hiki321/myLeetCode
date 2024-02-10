#include <algorithm>
#include <iostream>
#include "solution.h"

std::vector<std::vector<int>> Solution::permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> res;
    int n = nums.size();
    std::sort(nums.begin(), nums.end());
    do {
        for (int i = 0; i < n; ++i) {
            std::cout << nums[i] << ' ';
        }
        res.emplace_back(nums);
        std::cout << std::endl;
    } while (std::next_permutation(nums.begin(), nums.end()));
    return res;
}

void Solution::backtrack(std::vector<std::vector<int>>& res, std::vector<int>& nums, int first, int n) {
    //递归终止条件
    if (first == n) {
        for (auto x : nums) {
            std::cout << x << ' ';
        }
        res.emplace_back(nums);
        std::cout << std::endl;
        return;
    }
    for (int i = first; i < n; ++i) {
        std::swap(nums[i], nums[first]);
        backtrack(res, nums, first + 1, n);
        std::swap(nums[i], nums[first]);
    }
}

std::vector<std::vector<int>> Solution::permute2(std::vector<int>& nums) {
    std::vector<std::vector<int>> res;
    int n = nums.size();
    backtrack(res, nums, 0, n);
    return res;
}