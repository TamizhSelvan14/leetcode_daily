https://leetcode.com/problems/letter-combinations-of-a-phone-number/discuss/8090/Iterative-c%2B%2B-solution-in-0ms
​
​
​
vector<string> comb={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
if(digits.size()==0)
return {};
​
vector<string> ans;
ans.push_back("");
for(auto digit:digits){
vector<string> temp;
for(auto c:comb[digit-'0']){
for(auto s:ans){
temp.push_back(s+c);
}
}
ans=temp;
}
return ans;