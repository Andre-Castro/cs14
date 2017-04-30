#ifndef ARITHMETICEXPRESSION_H
#define ARITHMETICEXPRESSION_H
#include <iostream>
#include <cstdlib>

using namespace std;
struct TreeNode{
    char data;
    char key;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char data, char key):data(data),key(key),left(0),right(0){}
};

class arithmeticExpression{
  private:
    string infixExpression;
    TreeNode* root;
  public:
    arithmeticExpression(const string &);
    //~arithmeticExpression();
    void buildTree();
    void infix();
    void prefix();
    void postfix();
    void visualizeTree(const string &);

 private:
    int priority(char);
    string infix_to_postfix();
    void infix(TreeNode *);
    void prefix(TreeNode *);
    void postfix(TreeNode *);
    void visualizeTree(ofstream &, TreeNode *);
};
#endif