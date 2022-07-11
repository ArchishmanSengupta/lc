class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
       vector<pair<int, pair<int, int>>> distanceWithXY;
            int distance;
            
            for(auto i: points){
                    distance = i[0]*i[0] + i[1]*i[1];
                    distanceWithXY.push_back({distance, {i[0],i[1]}});
            }
            sort(distanceWithXY.begin(), distanceWithXY.end());
            vector<vector<int>> kClosetPoints(k);
            for(int i=0;i<k;i++){
                    kClosetPoints[i].push_back(distanceWithXY[i].second.first);
                    kClosetPoints[i].push_back(distanceWithXY[i].second.second);
            }
            return kClosetPoints;
    }
};