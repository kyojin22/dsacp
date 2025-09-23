// 23 September, 2025
// 
// had some free time at work
// so I solved tmrw's problem as well
//
// you(whoever is reading) know, how im choosing problems?
// these are suggested from ai
//
// building app that creates doc files from images
// is good for my bis project?
//

class MyCircularQueue {
public:
    vector<int> q;
    int front = 0;
    int rear = 0;
    int size = 0;
    int n = 0;

    MyCircularQueue(int k) {
        q.resize(k);
        n = k;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        q[rear] = value;
        size++;
        if (size == 1) front = rear;
        rear = (rear + 1) % n;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        front = (front + 1) % n;
        size--;
        if (size == 0 && n > 1) rear++;
        return true;
    }
    
    int Front() {
        if (size == 0) return -1;
        return q[front];
    }
    
    int Rear() {
        if (size == 0) return -1;
        return q[rear == 0 ? n - 1 : rear - 1];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == n;
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

