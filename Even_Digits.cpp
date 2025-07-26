class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int even_count=0;
        

        for(int i=0;i<n;i++){
            int count=0;
            int num=nums[i];
            while(num>0){
                num=num/10;
                count=count+1;
            }

            if (count%2==0){
                even_count++;
            }
        
        }
        return even_count;
    }
};
