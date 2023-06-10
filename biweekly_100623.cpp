
/* class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n) + to_string(2*n) + to_string(3*n);
        map<char, int> m;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
                return false;
            m[s[i]] += 1;
        }
        for(int i = 0; i < s.size(); i++)
        {
            //cout<<m[s[i]]<<endl;
            if(m[s[i]] != 1)
                return false;
        }
        return true;
    }
}; */

//solve
//  |
//  V

/* class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        if(s.size() == 1)
            return 1;
        map<char, int> m, n;
        int i = 0, f1 = 0, f2 = 0, j = 0, l = s.size() - 1;
        while(i < s.size())
        {
            m[s[i]] += 1;
            if(m[s[i]] > 2 || (m[s[i]] == 2 && f1 == 1))
                break;
            if(m[s[i]] == 2)
                f1 = 1;
            i++;
        }
        while(l >= 0)
        {
            n[s[l]] += 1;
            if(n[s[l]] > 2 || (n[s[l]] == 2 && f2 == 1))
                break;
            if(n[s[l]] == 2)
                f2 = 1;
            l--;
            j++;
        }
        return max(i, j);
    }
}; */


/* class Solution {
    int findLeast(vector<vector<int>>& grid, int c)
    {
        for(int i = 0; i<grid.size(); i++)
        {
            int t = 0;
            for(int j = 0; j<grid[i].size(); j++)
            {
                if(grid[i][j] == 1)
                    t++;
            }
            if(t <= c)
                return i;
        }
        return -1;
    }
public:
    vector<int> goodSubsetofBinaryMatrix(vector<vector<int>>& grid)
    {
        vector<int> ret;
        int c = 0;
        int flt = 0;
        while(grid.size() > 0)
        {
            int fl = findLeast(grid, c);
            if (fl == -1)
            {
                if(c >= (grid[0].size() / 2) || flt >= grid[0].size())
                    break;
                else
                    c++;
            }
            else
            {
                flt += c;
                ret.push_back(fl);
                ret.erase(ret.begin()+fl);
            }
        }
        //sort(ret.begin(),ret.end());
        return ret;
    }
}; */