class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> retVec(2);
        map<int, int> retMap;
        for (int i = 0; i < nums.size(); i++) {
            if (retMap.count(target - nums[i])) {
                retVec[0] = retMap[target - nums[i]];
                retVec[1] = i;
                break;
            } else {
                retMap.insert(pair<int, int>(nums[i], i));
            }
        }
        return retVec;
    }
};
