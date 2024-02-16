class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int count=0;
        long long sum=0;
        for(int i:arr){
            mp[i]++;
        }
    vector<pair<int,int>>vc(mp.begin(),mp.end());
    sort(vc.begin(),vc.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b){
        return a.second < b.second;
    });
       for(auto it:vc){
          if(count<k){
              while(it.second){
                  if(count<k){
                  count++;
                  }
                  else{
                      sum++;
                      break;
                  }
                  it.second--;
              }
          }
          else{
              sum++;
          }
         }

       return sum; 
    }
};