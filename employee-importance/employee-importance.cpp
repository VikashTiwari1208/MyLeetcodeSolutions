/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    unordered_map<int,Employee*>mp;
    int dfs(int id)
    {
        int result=mp[id]->importance;
        for(auto x:mp[id]->subordinates)
        {
            result+=dfs(x);
        }
        return result;
    }
    int getImportance(vector<Employee*> employees, int id) {
        for(auto x:employees)
        {
            mp[x->id]=x;
        }
        return dfs(id);
    }
};