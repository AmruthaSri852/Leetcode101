// 1423. Maximum Points You Can Obtain from Cards

class Solution {
public:
	int maxScore(vector<int>& cardPoints, int k) {
		int n=cardPoints.size(),j=n-k,i=0;
		int sum=0,ans=0;
		
       for(int j=n-k;j<n;j++) 
            
            sum+= cardPoints[j];
		    ans=sum;

		while(i<k) {
			sum+= cardPoints[i]-cardPoints[j];
			ans= max(ans,sum);
			i++; j++;
		}
		return ans;
	}
};

// Input: cardPoints = [1,2,3,4,5,6,1], k = 3
// Output: 12
    
// Input: cardPoints = [2,2,2], k = 2
// Output: 4
    
// Input: cardPoints = [9,7,7,9,7,7,9], k = 7
// Output: 55    
 
