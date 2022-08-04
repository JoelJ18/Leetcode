class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> keys;
        keys.push(0);
        while(!keys.empty()){
            for(auto i:rooms[keys.front()]){if(i!=-1){keys.push(i);}}
            rooms[keys.front()]={-1};
            keys.pop();
        }
        
        for(int i=0;i<rooms.size();i++){
            if(rooms[i].empty()==true || rooms[i][0]!=-1){return false;}
        }
        
        return true;
    }
};