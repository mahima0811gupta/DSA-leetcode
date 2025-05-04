class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        //brure fortce method is traverse the 2d matrix(edges)  the node have maxinum m frequncy have the centre of the graph but the time complexity is V+E

        ///2nd method is we toook to eges {a b} and {c,d} (given size of graph is n<=3)
        //notes if a==c ya b==c then centre is either c or d   bcz tum socho ek ege me se koi ek to centre hoga hi na
       
       int a=edges[0][0];
       int b=edges[0][1];
       int c=edges[1][0];
       int d=edges[1][1];
    
    return {(a==c || b==c ? c : d)};
    }
};