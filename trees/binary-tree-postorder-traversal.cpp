// 1 October, 2025
// 
// I dont know how to store / keep my daily solutions in this repo
//

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        TreeNode* last = NULL;
        
        while (curr != NULL || !s.empty()) {
            if (curr) {
                s.push(curr);
                curr = curr->left;
            } else {
                TreeNode* node = s.top();
                if (node->right && node->right != last) {
                    curr = node->right;
                } else {
                    res.push_back(node->val);
                    last = node;
                    s.pop();
                }
            }
        }

        return res;
    }
};

// Recursion solution
class Solution {
public:
    vector<int> res;
    vector<int> postorderTraversal(TreeNode* root) {
        dfs(root);
        return res;
    }

    void dfs(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        dfs(root->left);
        dfs(root->right);
        res.push_back(root->val);
    }
};

