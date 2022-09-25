class MyCircularQueue {
public:
    struct Node{
        int val;
        Node* next;
        Node(int x){
            val = x;
            next = NULL;
        }
    };
    Node* front = NULL;
    Node* rear = NULL;
    int cur=0;
    int max;
    MyCircularQueue(int k) {
        max= k;
    }
    
    bool enQueue(int value) {
         if(cur < max){
            Node* new_node = new Node(value);
            if(front == NULL) {
                front = new_node;
                rear = new_node;
            }
            else{
                rear -> next = new_node;
                rear = new_node;
            }
            cur++;
            return true;
        }
        return false; 
    }
    
    bool deQueue() {
        if(cur>0){
            Node* temp= front;
            front= front->next;
            temp -> next = NULL;
            delete temp;
            cur--;
            return true;
        }
        return false;
    }
    
    int Front() {
         if(cur>0)
           return front->val;
    return -1;
    }
    
    int Rear() {
       if(cur>0)
           return rear->val;
    return -1;
    }
    
    bool isEmpty() {
        return cur==0;
    }
    
    bool isFull() {
        return cur == max;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */