class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int size = heights.size();
        vector<int> arr(101, 0);
        
        for(int i = 0; i < size; i++) {
            arr[heights[i]]++;
        }
        int arrIndex = 0, heightIndex = 0;
        int mismatch = 0;
        
        while(arrIndex < 101) {
            if(arr[arrIndex] == 0) {
                arrIndex++;
            }
            else {
                if(heights[heightIndex] != arrIndex) {
                    mismatch++;
                }
                heightIndex++;
                arr[arrIndex]--;
            }
        }
        return mismatch;
    }
};
