class Solution {
public:
    void findCombinations(vector<vector<int>>& result, vector<int>& candidates, int target, vector<int>& current, int start) {
        if (target < 0) return; // If target becomes negative, stop further exploration
        if (target == 0) {
            result.push_back(current); // If target becomes 0, a valid combination is found
            return;
        }

        for (int i = start; i < candidates.size(); ++i) {
            current.push_back(candidates[i]); // Choose the current candidate

            // Continue exploring combinations, allowing the same candidate to be chosen (as it can be used multiple times)
            findCombinations(result, candidates, target - candidates[i], current, i);

            current.pop_back(); // Backtrack: remove the last chosen candidate for the next exploration
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;

        findCombinations(result, candidates, target, current, 0);

        return result;
    }
};
