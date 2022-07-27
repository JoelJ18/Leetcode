class MinStack {
public:
    vector<pair<int,int>> s;
    int min=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(val<min){min=val;}
        s.push_back({val,min});
        
    }
    
    void pop() {
        s.pop_back();
        if(s.size()==0){min=INT_MAX;}
        else{min=s[s.size()-1].second;}
    }
    
    int top() {
        return s[s.size()-1].first;
    }
    
    int getMin() {
        return s[s.size()-1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */