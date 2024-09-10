class RandomizedSet {
public:
    unordered_set<int>* st;
    int size;
    RandomizedSet() {
        st = new unordered_set<int>();
        size = 0;
    }

    bool insert(int val) {
        for (auto it = st->begin(); it != st->end();it++) {
            if (val == *it)
                return false;
        }
        size++;
        st->insert(val);
        return true;
    }

    bool remove(int val) {
        for (auto it = st->begin(); it != st->end();it++) {
            if (val == *it) {
                st->erase(it); 
                size--;    // Erase returns an iterator to the next element
                return true; // Element is erased, return true
            }
        }
        return false;
    }

    int getRandom() {
        auto it = st->begin();
        advance(it,rand()%size);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
