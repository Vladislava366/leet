class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for (int i = 0; i < nums1.size(); i++) {
            bool inNums2 = false;
            bool alreadyAdded = false;

            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    inNums2 = true;
                    break;
                }
            }

            for (int k = 0; k < result.size(); k++) {
                if (nums1[i] == result[k]) {
                    alreadyAdded = true;
                    break;
                }
            }

            if (inNums2 && !alreadyAdded) {
                result.push_back(nums1[i]);
            }
        }

        return result;
    }
};