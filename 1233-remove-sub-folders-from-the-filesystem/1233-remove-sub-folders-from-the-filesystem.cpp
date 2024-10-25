class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>result;
        unordered_set<string>st(folder.begin(),folder.end());
        for(string fold:folder){
            bool found=false;
            string duplicate=fold;
            while(!fold.empty()){
                size_t position=fold.find_last_of('/');
                fold=fold.substr(0,position);
                if(st.find(fold)!=st.end()){
                    found=true;
                    break;
                }
            }
            if(!found){
                result.push_back(duplicate);
            }
        }
        return result;
    }
};