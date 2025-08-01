class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int result=0, leftsum=0,rightsum=0;
        for(int i=0;i<k;i++) leftsum+=cardPoints[i];
        result=leftsum;
        int n=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            leftsum-=cardPoints[i];
            rightsum+=cardPoints[n];
            n--;
            result=max(result,leftsum+rightsum);
        }
        
        return result;
    }
};