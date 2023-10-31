class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> result;
        generate("", n, n, result);
        return result;
    }

    void generate(string p, int left, int right, vector<string> &parens)
    {
        if (left > 0)
            generate(p + '(', left - 1, right, parens);
        if (right > left)
            generate(p + ')', left, right - 1, parens);
        if (right == 0)
            parens.push_back(p);
    }
};
