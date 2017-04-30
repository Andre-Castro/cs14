#include <iostream>
#include <string>
#include "arithmeticExpression.h"

using namespace std;

int main(){
    string expression = "a+b+c+d";
    arithmeticExpression tree(expression);
    tree.buildTree();
    tree.infix(); cout << endl;
    tree.prefix(); cout << endl;
    tree.postfix(); cout << endl;
    tree.visualizeTree(expression);
    return 0;
}

