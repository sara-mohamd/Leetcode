class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap;
        
        // Count the frequency of each element in nums
        for (int num : nums) {
            frequencyMap[num]++;
        }
        
        // Create a vector to store unique elements
        vector<int> uniqueElements;
        for (auto& pair : frequencyMap) {
            uniqueElements.push_back(pair.first);
        }
        
        // Sort uniqueElements by frequency (in descending order)
        sort(uniqueElements.begin(), uniqueElements.end(), [&](int a, int b) {
            return frequencyMap[a] > frequencyMap[b];
        });
        
        // Take the top k frequent elements
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(uniqueElements[i]);
        }
        
        return result;
    }
};
