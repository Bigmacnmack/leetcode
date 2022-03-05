class Solution 
{
public:
    unordered_map<int,int> m;
    int climbStairs(int n) 
    {
        
        if(m.find(n)!=m.end())
            return m[n];
        
        int result=0;
        
        if(n==0)
            result = 0;
        
        else if(n==1)
            result = 1;
        
        else if(n==2)
            result = 2;
        
        else
            result = climbStairs(n-1) + climbStairs(n-2);
     
        
        
        m[n]=result;
        return result;
    }
};