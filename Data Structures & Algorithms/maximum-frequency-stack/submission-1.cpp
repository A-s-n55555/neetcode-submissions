class FreqStack {
public:
    priority_queue<tuple<int, int, int>> pq;
    unordered_map<int, int> mp;
    int order = 0;
    FreqStack() {
        
    }
    
    void push(int val) {
        if (mp.count(val)) {
            pq.push({mp[val] + 1, order++, val});
            mp[val]++;
        }
        else {
            mp[val]++;
            pq.push({mp[val], order++, val});
        }
    }
    
    int pop() {
        auto p = pq.top();
        mp[get<2>(p)]--;
        pq.pop();
        return get<2>(p);
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */