class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;;
        int max = 0;
       for (unsigned int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            counter++;
        } else {
            if (counter > max) {
                max = counter;
                
            }

            counter = 0;
        }

       }

       if (counter > max){ 
        max = counter;
       }
       
       return max;
}
};