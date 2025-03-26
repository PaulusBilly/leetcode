class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> converted;
        for(vector<int>&num1 : grid) {
            for(int &num2 : num1) {
                converted.push_back(num2);
            }
        }

        sort(converted.begin(), converted.end());

        int firstElement = converted[0];
        int median = converted[converted.size() / 2];
        int answer = 0;

        for (int i = 0; i < converted.size(); i++) {
            int diff = converted[i] - firstElement;

        if(diff % x != 0) {
            return -1;
        }

        firstElement = converted[i];
        answer += (abs(median - converted[i])) / x;
    }

    return answer;
    }
};