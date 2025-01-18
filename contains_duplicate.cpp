#include <iostream>
#include <unordered_map>
#include <vector>

bool hasDuplicate(std::vector<int> &nums)
{
    std::unordered_map<int, int> occur;
    for (int i = 0; i < nums.size(); ++i) {
        if (auto it = occur.find(nums[i]); it != occur.end()) {
            it->second += 1;
        } else {
            occur[nums[i]] = 1;
        }
    }
    for (auto num : occur) {
        if (num.second > 1) {
            return true;
        }
    }
    return false;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello, world!" << std::endl;
    std::vector<int> nums = {1, 2, 3, 3};
    printf(hasDuplicate(nums) ? "true" : "false");
    return 0;
}
