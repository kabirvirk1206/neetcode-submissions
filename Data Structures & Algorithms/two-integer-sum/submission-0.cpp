class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer = {};
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (i != j) {
                    if (nums[i] + nums[j] == target) {
                        if (i > j) {
                            answer = {j, i};
                            return answer;
                        } else {
                            answer = {i, j};
                            return answer;
                        }
                    }
                }
            }
        }
    }
};
