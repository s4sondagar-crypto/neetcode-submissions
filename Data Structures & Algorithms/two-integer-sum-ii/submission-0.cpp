class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};   // 1-indexed answer
            }
            else if (sum > target) {
                right--;                        // too big, need a smaller number
            }
            else {
                left++;                         // too small, need a bigger number
            }
        }
        return {};   // never reached, since a solution always exists
    }
};