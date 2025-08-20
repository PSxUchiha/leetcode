class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        vector<int> factorial(n + 1, 1);
        
        for (int i = 1; i <= n; ++i) {
            numbers.push_back(i);
            if (i > 1) {
                factorial[i] = factorial[i - 1] * i;
            }
        }
        k--;
        string result = "";
        solve(n, k, numbers, factorial, result);
        return result;
    }
    private:
    void solve(int n, int& k, std::vector<int>& numbers, const               std::vector<int>& factorial, std::string& result) {
        if (n == 0) {
            return;
        }
        int blockSize = factorial[n - 1];
        int index = k / blockSize;
        result += std::to_string(numbers[index]);
        numbers.erase(numbers.begin() + index);
        k = k % blockSize;
        solve(n - 1, k, numbers, factorial, result);
    }
};