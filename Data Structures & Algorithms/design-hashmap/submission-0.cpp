class MyHashMap {
private:
    vector<int> arr;
public:
    MyHashMap() {
        arr.resize(1000001,INT_MAX);
    }
    
    void put(int key, int value) {
        arr[key]= value;
    }
    
    int get(int key) {
        return arr[key]!=INT_MAX?arr[key]:-1;
    }
    
    void remove(int key) {
        arr[key] = INT_MAX;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */