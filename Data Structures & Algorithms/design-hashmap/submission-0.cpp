class MyHashMap {

private:

    vector<long> _map;

public:
    MyHashMap() {
        _map.resize(1000001, -1);
    }
    
    void put(int key, int value) {
        if(key < 0 || key > 1000001)
            return ;
        _map[key] = value;
    }
    
    int get(int key) {
        if(key < 0 || key > 1000001)
            return -1;
        return _map[key];
    }
    
    void remove(int key) {
        if(key < 0 || key > 1000001)
            return ;
        _map[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */