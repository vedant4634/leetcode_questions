class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> dis;
        int exp = 1;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            while (exp < nums[i]) {
                dis.push_back(exp);
                exp++;
            }

            if (exp == nums[i])
                exp++;
        }
           while (exp <= nums.size()) {
            dis.push_back(exp);
            exp++;
        }


        return dis;
    }
};