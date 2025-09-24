// 24 September, 2025
//
// still no idea about what to build for bisp
// yea i suck a lot
//
// i also need learn to learn
// learn how to question
// instead of just doing what was told or guided
//
// WHICH I DO ALWAYS
//
// fucking consumer im
//
// i was kind felt ashamed when i heard this from my friend
// he did not explicitly said that but he meant that
//
// anyway, my solution for lru
//

struct DoubleListNode {
    int key;
    int val;
    DoubleListNode *next;
    DoubleListNode *prev;
    DoubleListNode(int x, int y) : val(x), key(y), next(NULL), prev(NULL) {}
};

class LRUCache {
public:
    int n;
    int size = 0;
    unordered_map<int, DoubleListNode*> m;
    DoubleListNode *head = NULL;

    LRUCache(int capacity) {
        n = capacity;
    }

    void bringFront(int key) {
        if (head != m[key]) {
            DoubleListNode *node = m[key];
            if (node->prev != NULL) {
                node->prev->next = node->next;
            }
            if (node->next != NULL) {
                node->next->prev = node->prev;
            }

            node->prev = NULL;
            node->next = head;
            if (head != NULL) {
                head->prev = node;
            }

            head = node;
        }
    }
    
    int get(int key) {
        // if not exists return -1
        if (m.find(key) == m.end()) return -1;

        // get the key
        int v = m[key]->val;
        
        // move this key to the front
        bringFront(key);

        // return the key
        return v;
    }
    
    void put(int key, int value) {
        if (m.find(key) == m.end()) {
            // we do not have key inside map

            // create node
            DoubleListNode *node = new DoubleListNode(value, key);

            // push it to the front
            node->next = head;
            if (size != 0) {
                head->prev = node;
            }
            head = node;

            // update the size
            size++;

            // if overflow remove the last
            if (size > n) {
                DoubleListNode *curr = head;
                while (curr && curr->next) {
                    curr = curr->next;
                }
                curr->prev->next = NULL;
                m.erase(curr->key);
                size--;
            }

            // set it to the map
            m[key] = node;
            return;
        }
        
        // we have key inside map
        
        // update the value
        DoubleListNode *node = m[key];
        node->val = value;
        m[key] = node;

        // bring it to the front
        
        bringFront(key);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

