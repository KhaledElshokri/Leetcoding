class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> mySet{};
        for(auto num : nums){
            if (mySet.contains(num))
                return true;
            else
                mySet.insert(num);
        }
        return false;
    }
};