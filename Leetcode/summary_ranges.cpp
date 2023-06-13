/* class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> v;
        if(!nums.size())
            return v;
        for(int i=0; i<nums.size(); i++)
        {
            int first=nums[i], last=nums[i];
            while(i != nums.size()-1 && nums[i]+1 == nums[i+1])
            {
                last=nums[i+1];
                i++;
            }
            if(first == last)
                v.push_back(to_string(first));
            else
                v.push_back(to_string(first)+"->"+to_string(last));
        }
        return v;
    }
}; */