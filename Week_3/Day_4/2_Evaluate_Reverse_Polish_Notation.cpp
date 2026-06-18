class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (int i = 0; i < tokens.size(); i++) {
            string curr = tokens[i];

            if (curr == "+" || curr == "-" ||
                curr == "*" || curr == "/") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int result;

                if (curr == "+")
                    result = b + a;
                else if (curr == "-")
                    result = b - a;
                else if (curr == "*")
                    result = b * a;
                else
                    result = b / a;

                s.push(result);
            }
            else {
                s.push(stoi(curr));
            }
        }

        return s.top();
    }
};
