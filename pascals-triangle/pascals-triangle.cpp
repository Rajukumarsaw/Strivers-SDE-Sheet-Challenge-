class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
          if(i==0 || i==1){
              vector<int> temp(i+1,1);
              ans.push_back(temp);
          }
          else{
              vector<int> temp(i+1,0);
              ans.push_back(temp);
          }
        }
           for(int i=2;i<numRows;i++){
           for( int j=0;j<ans[i].size();j++){
               if(j==0 || j==ans[i].size()-1){
                   ans[i][j]=1;               }
                   else{
                       ans[i][j]=ans[i-1][j-1]+ ans[i-1][j];
                   }
           }
    }
    return ans;
    }
};