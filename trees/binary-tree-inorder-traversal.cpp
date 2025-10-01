// 1 October, 2025
//
// so around 1 week I will be doing mostly trees
//
// inorder -> do smth between left and right
// preorder -> do smth before left and right
// postorder -> do smth after left and right
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;

        while (root != NULL || !s.empty()) {
            while (root != NULL) {
                s.push(root);
                root = root->left;
            }

            root = s.top();
            s.pop();
            res.push_back(root->val);
            root = root->right;
        }

        return res;
    }
};


// Recursion solution
class Solution {
public:
    vector<int> res;

    vector<int> inorderTraversal(TreeNode* root) {
        dfs(root);
        return res;
    }

    void dfs(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        dfs(root->left);
        res.push_back(root->val);
        dfs(root->right);
    }
};

