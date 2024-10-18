class Solution {
public:
    int maximumSwap(int num) {
       string nums2=to_string(num);
        int s=nums2.size();
        vector<int>store(s,-1);
        store[s-1]=s-1;
        for(int i=s-2;i>=0;i--){
            int index=i+1;
            if(nums2[i]<=nums2[store[i+1]]){
                store[i]=store[i+1];
            }else{
                store[i]=i;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(nums2[i]<nums2[store[i]]){
                swap(nums2[i],nums2[store[i]]);
                return stoi(nums2);
            }
        }
        return stoi(nums2);
        
    }
};