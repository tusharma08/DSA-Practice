// Problem statement
// You're given a string 'S' consisting of "{", "}", "(", ")", "[" and "]" .

// Return true if the given string 'S' is balanced, else return false.

// For example:
// 'S' = "{}()".

// There is always an opening brace before a closing brace i.e. '{' before '}', '(' before ').
// So the 'S' is Balanced.

bool isValidParenthesis(string expression) {
  stack<char> s;
  for (int i = 0; i < expression.length(); i++) {

    char ch = expression[i];

    if (ch == '(' || ch == '{' || ch == '[') {
      s.push(ch);
    } else {
      // for closing bracket
      if (!s.empty()) {
        char top = s.top();
        if ((ch == ')' && top == '(') || (ch == '}' && top == '{') ||
            (ch == ']' && top == '[')) {
          s.pop();
        } else {
          return false;
        }
      } else {
        return false;
      }
    }
  }

  if (s.empty())
    return true;
  else
    return false;
}