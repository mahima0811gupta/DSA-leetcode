class Solution {
public:


    void dfs(vector<vector<int>>& image,int currr,int currc,int currcolor,int newcolor){
        int r=image.size();
        int c=image[0].size();


        if(currr<0 || currr>=r || currc<0 || currc>=c || image[currr][currc]!=currcolor)  return;
        
        image[currr][currc]=newcolor;

        dfs(image,currr+1,currc,currcolor,newcolor);
                dfs(image,currr-1,currc,currcolor,newcolor);
                dfs(image,currr,currc+1,currcolor,newcolor);
                        dfs(image,currr,currc-1,currcolor,newcolor);        

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
        dfs(image,sr,sc,image[sr][sc],color);
        return image;
    }
};