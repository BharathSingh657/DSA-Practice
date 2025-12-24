class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        

        int max=0;
        for(int i=0;i<sentences.size();i++)
        {
           /*cout<<sentences[i];
           cout<<"\n";*/
           int count=0;
           

           for(int j=0;j<sentences[i].size();j++)
           {
            if (sentences[i][j]==' ')
            {
                count=count+1;
                
            }
           }

           if (count>max)
           {
            max = count;
           
            
           }
            

           
        }

        return max+1;

        
    }
};