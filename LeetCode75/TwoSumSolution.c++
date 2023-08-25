class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> numMap;
            //initializes an unordered map data structure (look into)
            int size = nums.size();
            //takes the size of the num vector given 
            for(int i = 0; i < size; i++){
            //loops through the entire array
                int complement = target - nums[i];
            //takes the first avaliable num and finds the 'complement' being the number that when added to the num will = target
                if(numMap.count(complement)){
                //searches for the element with the 'key,' compliment. 
                    return {numMap[complement], i};
                }
                numMap[nums[i]] = i;
                //If not found, a new element to numMap is added with a key 
            }
            return {};
    }
};