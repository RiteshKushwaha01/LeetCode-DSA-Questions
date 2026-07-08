class Solution {
    // private:
    //     vector<int> merge(vector<int>& arr1, vector<int>& arr2) {
    //         vector<int> mergeArr;
    //         int n = arr1.size();
    //         int m = arr2.size();
    //         int i = 0;
    //         int j = 0;

    //         while (i < n && j < m) {
    //             mergeArr.push_back(arr1[i++]);
    //             mergeArr.push_back(arr2[j++]);
    //         }
    //         return mergeArr;
    //     }

public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //     int n = nums.size();
        //     vector<int> arr1;
        //     vector<int> arr2;
        //     vector<int> result;
        //     for (int i = 0; i < n; i++) {
        //         if (nums[i] > 0) {
        //             arr1.push_back(nums[i]);
        //         } else
        //             arr2.push_back(nums[i]);
        //     }
        //     result = merge(arr1, arr2);
        //     return result;
        // }

        int pos = 0;
        int neg = 1;
        vector<int> ans(nums.size());

        for (int x : nums) {
            if (x > 0) {
                ans[pos] = x;
                pos += 2;
            } else {
                ans[neg] = x;
                neg += 2;
            }
        }
        return ans;
    }
};