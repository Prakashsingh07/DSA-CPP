#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();
    int result = INT_MAX;

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (nums1[i] == nums2[j]) {
            result = min(result, nums1[i]);
            i++;
            j++;
        } else if (nums1[i] < nums2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return (result == INT_MAX) ? -1 : result;
}

int main() {
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4};
    
    int result = getCommon(nums1, nums2);

    if (result != -1) {
        cout << "Output: " << result << endl;
    } else {
        cout << "No common element found." << endl;
    }

    return 0;
}
