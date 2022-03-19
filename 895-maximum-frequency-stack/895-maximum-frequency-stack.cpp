class FreqStack {
    priority_queue<pair<int, pair<int, int>>> pq;
    unordered_map<int, int> f;
    long long position = 0;
public:
    void push(int elm) {
        pq.emplace(++f[elm], make_pair(++position, elm));
    }
    
    int pop() {
        auto val = pq.top();
        pq.pop();
        int elm = val.second.second;
             f[elm]--;
        return elm;
    }
};