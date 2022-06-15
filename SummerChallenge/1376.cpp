// 1376. Time Needed to Inform All Employees

class Solution
{
public:
    int find(int h, vector<int> &manager, vector<int> &informTime)
    {
        if (manager[h] == -1)
        {
            return informTime[h];
        }
        informTime[h] += find(manager[h], manager, informTime);
        manager[h] = -1;
        return informTime[h];
    }

    int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
    {
        int maxtime = 0;
        for (int i = 0; i < n; i++)
        {
            if (informTime[i] == 0)
            {
                maxtime = max(maxtime, find(i, manager, informTime));
            }
        }
        return maxtime;
    }
};

// Input: n = 1, headID = 0, manager = [-1], informTime = [0]
// Output: 0

// Input: n = 6, headID = 2, manager = [2,2,-1,2,2,2], informTime = [0,0,1,0,0,0]
// Output: 1
