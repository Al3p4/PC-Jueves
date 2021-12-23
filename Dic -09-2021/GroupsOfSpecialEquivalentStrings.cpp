class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        if(A.size()==0) return 0;
        
        vector<string> B;
        
        for(int i = 0; i < A.size(); i++){
            string s;
            
            for(int j = 0; j < A[i].size(); j+=2){
                s.push_back(A[i][j]);
            }
            for(int j = 1; j < A[i].size(); j+=2){
                s.push_back(A[i][j]);
            }
            sort(s.begin(), s.begin()+(s.size()+1)/2);
            sort(s.begin()+(s.size()+1)/2, s.end());
            B.push_back(s);
        }
        sort(B.begin(), B.end());
        
        int groups = 1;
        for(int i = 1; i < B.size(); i++){
            if(B[i]!=B[i-1]) groups++;
        }
        return groups;
    }
};
