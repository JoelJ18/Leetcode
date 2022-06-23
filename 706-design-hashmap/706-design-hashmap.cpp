class MyHashMap {
public:
    vector<pair<int,int>> m;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        
        int flag=-1;
        for(int i=0;i<m.size();i++){
            if(m[i].first==key){flag=i;break;}}
        
        if(flag==-1){m.push_back({key,value});}
        else{m[flag].second=value;}
        
        
    }
    
    int get(int key) {
        for(auto i:m){if(i.first==key){return i.second;}}
        return -1;
    }
    
    void remove(int key) {
        int count=0;
        for(auto i:m){
            if(i.first==key){
                m.erase(m.begin()+count);
            }
            else{count++;}
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */