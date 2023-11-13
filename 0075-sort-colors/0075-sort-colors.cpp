#include <vector>

class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        int size = nums.size();
        selection_sort(nums, size);
    }

    void selection_sort(vector<int>& arr, int x) {
        for (int j = 0; j < x - 1; j++) {
            int index = j, var = arr[j];
            for (int i = 1 + j; i < x; i++) {
                if (var > arr[i]) {
                    index = i;
                    var = arr[i];
                }
            }
            swap(&arr[j], &arr[index]);
        }
    }

    void swap(int *x, int* y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
};
