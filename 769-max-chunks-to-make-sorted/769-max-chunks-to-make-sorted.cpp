class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
    
        
//         index start from 0->n-1
            
//             so  1 0 | 2 | 3 |4 | 5
    
//             the obstacle in between defines that left side is small elements and righ has higher elements
            
            
//             so take 2 arr
            
// 0,1,2,3,4,5,6          index sum arr => 0 1 3 6 10 
//                        arr sum       => 4 7 9 10 10   
            
            int count=0;
            int n=arr.size();
            int indexSum=0;
            int arrSum=0;
        for(int i=0;i<n;i++){
            
            indexSum+=i;
            arrSum+=arr[i];
            
            if(indexSum==arrSum)
                count++;
            
            
        }
       
        
        return count;
        
    }
};