class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start=0;
        int end=arr.size()-1;

        while(end-start >= k){
            if(abs(x-arr[start]) > abs(x-arr[end])){
                start++;
            }else{
                end--;
            }
        }
    cout<<start<<" - "<<end<<endl;
        return vector<int>(arr.begin()+start,arr.begin()+end+1);

    }
};