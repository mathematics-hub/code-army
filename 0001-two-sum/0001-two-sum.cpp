class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mas;
        mas[nums[0]]=0;
        int size=nums.size();
        for(int i=1;i<size;i++){
            int second=nums[i];
            int first=target-second;
            if(mas.find(first)!=mas.end()){
                return {mas[first],i};//index1,index2
            }
            mas[second]=i;
        }
        return {};
    }
};



/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // better approch,frist sort->then find->return
        int size = nums.size();
        vector<pair<int, int>> arr;
        for (int i = 0; i < size; i++) {
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());
        int start = 0, end = size - 1;
        while (start <= end) {
            int sum = arr[start].first + arr[end].first;
            if (sum == target) {
                return {arr[start].second, arr[end].second};
            }
            if (sum < target) {
                start++;
            } else {
                end--;
            }
        }
        return {};
    }
};
*/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //brute force approch
        int size = nums.size();
        vector<int> rtn;
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    rtn.push_back(i);
                    rtn.push_back(j);
                    return rtn;
                }
            }
        }
        return rtn;
    }
};
*/