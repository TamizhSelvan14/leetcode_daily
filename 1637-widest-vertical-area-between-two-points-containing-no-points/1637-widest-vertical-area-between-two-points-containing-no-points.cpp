class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
//         vector<int> temp;
        
//         for(int i=0;i<points.size();i++){
//             temp.push_back(points[i][0]);
//         }
        sort(points.begin(),points.end());
        
        int maxi=0;
        
        for(int i=1;i<points.size();i++){
            maxi=max(maxi,points[i][0]-points[i-1][0]);
        }
        
        return maxi;
        
    }
};