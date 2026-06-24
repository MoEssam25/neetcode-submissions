class MyHashSet {
private:

    vector<int>start;

public:

    MyHashSet() {

    }
    
    void add(int key) {
        if(!contains(key))
            start.push_back(key);
    }
    
    void remove(int key) {
        auto it = std::find(start.begin(), start.end(), key);
        if (it != start.end()) {
            start.erase(it);
        }
    }
    
    bool contains(int key) {
        return std::find(start.begin(), start.end(), key) != start.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */