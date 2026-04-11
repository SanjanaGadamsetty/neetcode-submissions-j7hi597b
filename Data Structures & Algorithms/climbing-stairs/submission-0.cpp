class Solution {
public:
    int climbStairs(int n) {
        int f=1, s=1;
        for (int i=0; i<n-1; i++){
            int temp=f;
            f=f+s;
            s=temp;
        }
        return f;
    }
};
