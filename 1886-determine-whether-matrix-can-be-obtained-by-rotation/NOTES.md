0 1 1
​
Now you can see that, this resulted matix is the 90 degree rotation of the original matrix. We need to do this 2 more time to check for 180, 270 degree's.
​
class Solution {
public:
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
int n = mat.size();
if(mat == target) {     // rotation by 0 degree.
return true;
}
int deg = 3;    // more rotations with 90, 180, 270 degree's.
while(deg --) {
for(int i = 0; i < n; i ++) {
for(int j = i; j < n; j ++) {
swap(mat[i][j], mat[j][i]);     // transpose of matrix.
}
}
for(int i = 0; i < n; i ++) {
reverse(mat[i].begin(),mat[i].end());       // reverse each row.
}
if(mat == target) {
return true;
}
}
return false;
}
};