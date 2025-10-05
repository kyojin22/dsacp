// 1 October, 2025

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Dfs solution
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        if (root != NULL) s.push(root);

        while (!s.empty()) {
            TreeNode* node = s.top();
            s.pop();
            res.push_back(node->val);

            if (node->right != NULL) {
                s.push(node->right);
            }

            if (node->left != NULL) {
                s.push(node->left);
            }
        }

        return res;
    }
};

// Recursion solution
class Solution {
public:
    vector<int> res;
    
    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return res;
    }

    void dfs(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        res.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
};

