class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int min_cost =0;
        int k=0;
        sort (cost.begin() , cost.end());
        for (int i =cost.size()-1 ; i >=0 ; i-- ){
            k++;
            if(k % 3 == 0){
                continue;
            }
            min_cost += cost[i];
        }
        return min_cost;
    }
};