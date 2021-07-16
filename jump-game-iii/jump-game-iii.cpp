class Solution {
public:
    unordered_set<int>path;
    bool canReach(vector<int>& arr, int start) {
        if(start<0||start>=arr.size())
        {
            return false;
        }
        if(arr[start]==0)
        {
            return true;
        }
        if(path.find(start)!=path.end())
        {
            return false;
        }
        path.insert(start);
        return canReach(arr,arr[start]+start)||canReach(arr,start-arr[start]);
    }
};