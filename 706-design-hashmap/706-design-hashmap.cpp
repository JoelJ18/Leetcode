class MyHashMap {
public:
    struct ListNode {
        int key;
        int val;
        ListNode* next;     
        ListNode(int x) : key(x), val(0), next(NULL) {}
        ListNode(int x, int y) : key(x), val(y), next(NULL) {}
    };
    
    ListNode* head;
    
    MyHashMap() {
        head = new ListNode(-1);  
    }
    
    void put(int key, int value) {
        ListNode* temp = new ListNode(key, value);
        ListNode* curr = head;
        while(curr->next) {
            curr = curr->next;
            if(curr->key == key) {
                curr->val = value;
                return;
            }
        }
        curr->next = temp;
    }
    
    int get(int key) {
        ListNode* curr = head;
        while(curr) {
            if(curr->key == key)    return curr->val;
            curr = curr->next;
        }
        return -1;
    }
    
    void remove(int key) {
        ListNode* curr = head;
        while(curr) {
            if(curr->next and curr->next->key == key) {
                curr->next = curr->next->next;
            }
            curr = curr->next;
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