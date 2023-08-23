#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
 
        int size = nums.size(); 
        vector<int> result; 
        bool notFound = 1; 


        for(int i = 0; i<size; i++){
            for(int j = 1; j<size; j++){
                if((nums[j]+nums[i] == target)&&(i!=j)){
                    result.push_back(j); 
                    result.push_back(i); 
                    return result; 
                }
            }
        }
        
        return {};  
    }
};