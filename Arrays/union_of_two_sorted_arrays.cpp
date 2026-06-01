// Union of two sorted arrays using two pointers.
//
// Compare elements from both arrays:
// - Add the smaller element and move its pointer.
// - If both are equal, add it once and move both pointers.
// - Skip duplicates using ans.back().
// - After one array ends, add remaining elements from the other array.
//
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> ans;

        while (i < n && j < m) {

            if (nums1[i] < nums2[j]) {
                if (ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);

                i++;
            }
            else if (nums1[i] > nums2[j]) {
                if (ans.empty() || ans.back() != nums2[j])
                    ans.push_back(nums2[j]);

                j++;
            }
            else {
                if (ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);

                i++;
                j++;
            }
        }

        while (i < n) {
            if (ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);

            i++;
        }

        while (j < m) {
            if (ans.empty() || ans.back() != nums2[j])
                ans.push_back(nums2[j]);

            j++;
        }

        return ans;
    }
};