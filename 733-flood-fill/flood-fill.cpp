class Solution {
public:

    void dfs(vector<vector<int>>& image,int currr,int currc,int initialcolor,int newcolor){
        int r=image.size();
        int c=image[0].size();
        /////if it is out of bound
        if(currr<0 || currr>=r || currc<0 || currc>=c)   return;

        /// if the that cell is not same of color of initial color

        if(image[currr][currc]!=initialcolor)   return;
        //if the cell you landed is notof initail color
       image[currr][currc]=newcolor;
      //up
        dfs(image,currr-1,currc,initialcolor,newcolor);
        //down
          dfs(image,currr+1,currc,initialcolor,newcolor);
        //left
       dfs(image,currr,currc-1,initialcolor,newcolor);
        //right
          dfs(image,currr,currc+1,initialcolor,newcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       //edge case if the starting color is already same as the given new color 
       //then reutn 
       if(image[sr][sc]==color)  return image;
       dfs(image,sr,sc,image[sr][sc],color);
       return image;
    }
};