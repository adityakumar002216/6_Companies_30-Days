class Solution {
public:
void solve(int i,vector<string>&v,map<char,string>&m,string &ht,string &temp){
    if(i==ht.size())
    {
      v.push_back(temp);
      return; 
    }
  string temp1=m[ht[i]];
  for(int j=0;j<temp1.size();j++){
     temp.push_back(temp1[j]);
     solve(i+1,v,m,ht,temp);
     temp.pop_back();
  }
}
    vector<string> letterCombinations(string digits) {
        vector<string>v;
        if(digits.size()==0)
        return {};
        map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        string temp;
        solve(0,v,m,digits,temp);
        return v;
        }
};
