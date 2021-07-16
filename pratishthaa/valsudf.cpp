bool isValidSudoku(vector<vector<char>>& board) {
         int i,j,k,num;
         int s1[9][9]={0}, s2[9][9]={0}, s3[9][9]={0};
         for(i=0;i<9;i++){
             for(j=0;j<9;j++)
             {
                 if(board[i][j]!='.')
                 {
                     num=board[i][j]-'0'-1, k=i/3*3+j/3;
                     if(s1[i][num] || s2[j][num] || s3[k][num]) 
                         return 0;
                     s1[i][num]=s2[j][num]=s3[k][num]=1;
                }
            }
        }
        return 1; 
    }
