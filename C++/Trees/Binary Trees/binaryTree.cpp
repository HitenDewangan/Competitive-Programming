// ======================= binary tree I M P L E M E N T A T I O N ========================
//https://g.co/gemini/share/d6d92f0b7dea

#include<iostream>
using namespace std;

// ================================ CLASS DEFINITION =================================
class Node{
public:
    // class members
    int data;
    Node* left;
    Node* right;
    Node* parent;

    Node(int data){
        this->data = data;
        left = right = parent = nullptr;
    }

    // // Accessor functions (getters) only needed if data members are private
    // int getData() const { return data; }
    // Node* getLeft() const { return left; }
    // Node* getRight() const { return right; }

};

// ================================ Binary Tree CLASS DECLARATION =================================
class BinaryTree{
private:
    Node* root; // pointer to the root of the tree

public:
    // --------- constructor -------- (empty tree) //
    BinaryTree() : root(nullptr) {}

    // --------- destructor --------- //
    ~BinaryTree(){
        delete root;
    }
    
    // ------------- public functions ---------//
    void printTree(Node *root);
    void insert(Node* root, int data);
    int getTreeSize();

private:
    // --------- helper functions -------- //
    void insertNode(Node* left, Node* right, int data);
    int getTreeSize();
};

void BinaryTree:: printTree(Node* root) {
    if(root == nullptr) {
        cout << "Tree is empty" << endl;
    }
    cout << "Tree: " << endl;
    cout << root->data << " ";
    if(root->left != nullptr) {
        cout << "left: " << root(root->left) << " ";
    }
    if(root->right != nullptr) {
        cout << "right: " << root->right->data << " ";
    }
    cout << endl;
}

void BinaryTree::insert(Node* root, int data) {
  if (root == nullptr) {
    root = new Node(data);
    return;
  }
  insertNode(root->left, root->right, data); // pass subtrees to helper function
}

// Helper function for recursive insertion (internal to Node class)
void BinaryTree::insertNode(Node* left, Node* right, int data) {
  if (left->getTreeSize() <= right->getTreeSize()) {
    insertNode(left, left->right, data);
  } else {
    insertNode(right, right->right, data);
  }
}

// ============ get the size of the tree ============
int BinaryTree::getTreeSize() {
  if (left == nullptr && right == nullptr) {
    return 1;
  } else if (left == nullptr) {
    return 1 + right->getTreeSize();
  } else if (right == nullptr) {
    return 1 + left->getTreeSize();
  } else {
    return 1 + left->getTreeSize() + right->getTreeSize();
  }
}
