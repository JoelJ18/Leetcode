struct Node{
    int val;
    Node* next;
    
    Node(int x){val=x; next=nullptr;}
};

class MyLinkedList {
public:
    Node* head;
    int size=0;
    MyLinkedList() {
        head=nullptr;
    }
    
    int get(int index) {
        Node* temp=head;
        
        while(index>0){
            if(temp==nullptr){return -1;}
            temp=temp->next;
            index--;
        }
        if(temp==nullptr){return -1;}
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* temp=new Node(val);
        
        temp->next=head;
        head=temp;
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp=new Node(val);
        Node* t2=head;
        int flag=0;
        if(t2==nullptr){flag=1;}
        while(t2&&t2->next){
            t2=t2->next;
        }
        if(flag==1){head=temp;}
        else{t2->next=temp;}
        size++;
    }
    
    void addAtIndex(int index, int val) {
        Node* temp=new Node(val);
        Node* t2=head;
        
        if(index>size){return;}
        else if(index==size){addAtTail(val);}
        else if(index==0){addAtHead(val);}
        else{
            while(index-1>0){
                t2=t2->next;
                index--;
            }
            temp->next=t2->next;
            t2->next=temp;
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        Node* prev;
        Node* t2=head;
        int flag=0;
        if(index==0){flag=1;}
        while(index>0){
            if(t2->next==nullptr){return;}
            prev=t2;
            t2=t2->next;
            index--;
        }
        if(flag==1){head=head->next;}
        else{prev->next=t2->next;}
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */