class Solution {
    public:
        void rotate(vector<int> &nums, int k) {
            int n = nums.size();
            k %= n;
            if (k == 0) return;
            reverse(nums, 0, n - k);
            reverse(nums, n - k, n);
            reverse(nums, 0, n);
        }

        void reverse(vector<int> &nums, int s, int n) {
            for (int i = s; i < (s + n) / 2; i++) {
                int temp = nums[i];
                nums[i] = nums[n + s - i - 1];
                nums[n + s - i - 1] = temp;
            }
        }


};

