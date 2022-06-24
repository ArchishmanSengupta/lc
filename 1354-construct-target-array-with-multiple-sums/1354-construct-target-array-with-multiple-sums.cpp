class Solution {
public:
    bool isPossible(vector<int>& target) {
        long long s = accumulate(begin(target), end(target), 0ll);
    priority_queue<int> pq(begin(target), end(target));
    while (s > 1 and pq.top() > s / 2){
        long long cur = pq.top(); pq.pop();
        s -= cur;
        if (s <= 1)
            return s;
        pq.push(cur % s);
        s += cur % s;
    }
    return s == target.size();
    }
};