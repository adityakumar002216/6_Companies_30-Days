//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
       int d=0,m=0;
        vector<int>mp(n+1,0);
        for(auto i:arr) mp[i]++;
        for(int i=1;i<=n;i++){
            if(mp[i]==0) m=i;
            if(mp[i]==2) d=i;
        }
        return {d,m};
   }
};

