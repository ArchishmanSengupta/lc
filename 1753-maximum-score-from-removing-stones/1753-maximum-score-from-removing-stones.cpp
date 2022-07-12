class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
            
            pq.push(a);
            pq.push(b);
            pq.push(c);
            int score = 0;
            while(pq.size()>1){
                    
                    int x = pq.top();
                    pq.pop();
                    int y = pq.top();
                    pq.pop();
                    
                    x--;
                    y--;
                    score++;
                    if(x>0){
                            pq.push(x);
                    }
                    if(y>0) pq.push(y);
            }
            return score;
    }
};