// 28 September, 2025
// 
// Difference between DFS and BFS is ds used in them
// one uses stack and the other queue
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
//
// Depth First Search Solution
//
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }

        stack<TreeNode*> s;
        s.push(root);

        while (!s.empty()) {
            TreeNode* node = s.top();
            s.pop();

            TreeNode* temp = node->left;
            node->left = node->right;
            node->right = temp;

            if (node->left) s.push(node->left);
            if (node->right) s.push(node->right);
        }

        return root;
    }
};

//
// Breadth First Search Solution
//
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            TreeNode* temp = node->left;
            node->left = node->right;
            node->right = temp;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        return root;
    }
};

//
// Recursion Solution
//
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return root;
        }

        TreeNode* temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);

        return root;
    }
};

