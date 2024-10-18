#include<iostream>
#include<sstream>
#include<stack>
#include<string>
#include<cstdlib>


int evaluateRPN(const std::string&expression) {
    std::stack<int> stack;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '.')) {
            stack.push(std::stoi(token));
        } else {
          int operand2 = stack.top(); stack.pop();
          int operand1 = stack.top(); stack.pop();
          switch (token[0]) {
             case '+':
                 stack.push(operand1 + operand2);
                  break;
             case '-':
                  stack.push(operand1 - operand2);
                  break;
             case '*':
                 stack.push(operand1 * operand2);
                 break;
              case '/':
                 stack.push(operand1 / operand2);
                  break;
              default:
                  throw std::runtime_error("Unknown operator");

           }  

        }         

    }
    return stack.top();
}

int main() {
    std::string input;
    std::cout << "Enter the expression in reverse Polish entry: ";
    std::getline(std::cin, input);

    try {
        int result = evaluateRPN(input);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e){
        std::cerr << "Mistake: " << e.what() << std::endl;
    }

    return 0;
}