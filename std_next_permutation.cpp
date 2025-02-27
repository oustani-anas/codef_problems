#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 3, 2};  // Your initial vector
    std::vector<std::vector<int>> permutations;

    // Sort to ensure permutations are generated in lexicographic order
    std::sort(nums.begin(), nums.end());

    do {
        permutations.push_back(nums); // Store each permutation
    } while (std::next_permutation(nums.begin(), nums.end()));

    // Print the permutations
    for (const auto& perm : permutations) {
        for (int num : perm) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
