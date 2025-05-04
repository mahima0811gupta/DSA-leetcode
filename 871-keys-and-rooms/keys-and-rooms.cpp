class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        //approach-we have one open room .each room have key of some room means by this rrom we can enter in diff room .. its look like a directed graph in which we path from room to other
        // we can solve this by dfs/bfs
        // if rooms.size==visited (means if the open all the room ie traverse all the room      return true)
    

 unordered_set<int>visited;
    //using bfs

    queue<int>q;
   

    q.push(0);
    visited.insert(0);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto neighbour:rooms[curr]){
             if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
        }
        }
       
    }
    return visited.size()==rooms.size();

    }
};