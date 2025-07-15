class Solution {

public:
    /* 
      This is a workaround solution...
      as problem meant to work inside that array...
      without allocating new space proportional to n + m
    */
    // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     vector<int> ans;
    //     int p1 = 0, p2 = 0;
    //     while(p1 < m && p2 < n) {
    //         if(nums1[p1] <= nums2[p2])
    //             ans.push_back(nums1[p1++]);
    //         else
    //             ans.push_back(nums2[p2++]);
    //     }
    //     while(p1 < m)   { ans.push_back(nums1[p1++]); }
    //     while(p2 < n )   { ans.push_back(nums2[p2++]); }
    //     nums1 = ans;
    // }

    /* Using correct two-pointer approach */
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1,
            p2 = n - 1,
            k = n + m - 1;

        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2])
                nums1[k--] = nums1[p1--];
            else
                nums1[k--] = nums2[p2--];
        }

        while (p2 >= 0) {
            nums1[k--] = nums2[p2--];
        }
    }
};