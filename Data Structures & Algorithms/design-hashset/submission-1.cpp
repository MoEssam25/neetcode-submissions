class MyHashSet {

private:

    vector<bool> _myMap;

public:
    MyHashSet() {
        _myMap.resize(1000001, 0);
    }
    
    void add(int key) {
        if(key < 0 || key > 1000000)
            return;
        _myMap[key] = 1;
    }
    
    void remove(int key) {
        if(key < 0 || key > 1000000)
            return;
        _myMap[key] = 0;
    }
    
    bool contains(int key) {
        if(key < 0 || key > 1000000)
            return false;
        return (_myMap[key] == 1);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */