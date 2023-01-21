class Solution {
public:
   
   int d(vector<int>& p1, vector<int>& p2){
       return pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2);
   }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int d0,d1,d2,d3;
        vector<vector<int>> ptr = {p1,p2,p3,p4};
        sort(begin(ptr), end(ptr));
        d0 = d(ptr[0], ptr[1]), d1 = d(ptr[0], ptr[2]), d2 = d(ptr[0], ptr[3]), d3 = d(ptr[1], ptr[2]);
     return d0 && d2 && d0 == d1 && d2 == d3;
    }
};
