class Solution {
public:
    void dfs(vector<vector<int>>& image,int currrow,int currcol,int initialcolor,int newcolor){
        int n=image.size();
        int m=image[0].size();
       if(currrow<0 || currrow>=n || currcol<0 || currcol>=m)   return ;

       if(image[currrow][currcol]!=initialcolor)  return;
      //if the cell you landed is notof initail color
       image[currrow][currcol]=newcolor;
       dfs(image,currrow+1,currcol,initialcolor,newcolor);  //down
        dfs(image,currrow-1,currcol,initialcolor,newcolor);  //up
        dfs(image,currrow,currcol+1,initialcolor,newcolor);  //right
        dfs(image,currrow,currcol-1,initialcolor,newcolor);  //left
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)  return image;  //edge case otherwise stuck in infinite loop
        dfs(image,sr,sc,image[sr][sc],color);
         return image;

    }
};