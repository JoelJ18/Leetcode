class Solution {
public:
    int help(int n,int k)
    {
        if(n == 1)
        {
            return 0;
        }
        else
        {
            int next = help(n-1,k);
            int curr = (next+k)%n;
            return curr;
        }

    }
    int findTheWinner(int n, int k) {
        int result = help(n,k);
        return result+1;
    }
};