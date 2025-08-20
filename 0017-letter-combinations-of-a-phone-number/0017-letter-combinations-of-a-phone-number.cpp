class Solution {
public:
    
    void cartesianProduct(const vector<vector<string>>& input,
                      int depth,
                      string current,
                      vector<string>& result) {
        if (depth == input.size()) {
            result.push_back(current);
            return;
        }

        for (auto& s : input[depth]) {
            cartesianProduct(input, depth + 1, current + s, result);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        map<int, vector<string>> hash= {{2,{"a", "b", "c"}},
                                        {3,{"d", "e","f"}}, 
                                        {4, {"g", "h", "i"}}, 
                                        {5,{"j","k","l"}}, 
                                        {6,{"m","n", "o"}}, 
                                        {7,{"p","q","r","s"}}, 
                                        {8,{"t","u","v"}},
                                        {9,{"w","x","y","z"}}};
        if(digits == "") return {};
        int n = stoi(digits);
        int d;
        vector<vector<string>> out;
        while(n){
            d = n%10;
            out.insert(out.begin(), hash[d]);
            n/=10;
        }
        vector<string> result;
        cartesianProduct(out, 0, "", result);

        return {result};
    }
};