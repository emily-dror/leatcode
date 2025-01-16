#include <iostream>
#include <vector>

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
{
    int idx = n + m - 1, i1 = m - 1, i2 = n - 1;
    while (idx >= 0) {
        if (i1 < 0) {
            nums1[idx--] = nums2[i2--];
            continue;
        }
        if (i2 < 0) {
            nums1[idx--] = nums1[i1--];
            continue;
        }

        if (nums1[i1] > nums2[i2]) {
            nums1[idx--] = nums1[i1--];
        } else {
            nums1[idx--] = nums2[i2--];
        }
    }
}

int main(int argc, char *argv[])
{
    std::cout << "Hello, world!" << std::endl;
    std::vector<int> nums1 = {0}, nums2 = {1};
    merge(nums1, 0, nums2, 1);
    for (const auto &obj : nums1) {
        std::cout << obj << " ";
    }
    std::cout << std::endl;
    return 0;
}
