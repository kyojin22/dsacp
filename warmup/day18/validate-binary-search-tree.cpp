// 29 September, 2025
//
// the last warm up day, ig
// I am too tired for today
// screwed up my iot seminar projects 
// and failed to understand today's topics
//
// during ml class i researched and planned
// for my bisp project
//
// at work, there was no task
// and sometimes, i feel like none of them
// cares for the job
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
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        queue<pair<long, long>> qRange;
        qRange.push({ LONG_MIN, LONG_MAX });

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            pair<long, long> nodeRange = qRange.front();
            qRange.pop();

            if (node->val <= nodeRange.first || node->val >= nodeRange.second) {
                return false;
            }

            if (node->left) {
                q.push(node->left);
                qRange.push({ nodeRange.first, node->val });
            }

            if (node->right) {
                q.push(node->right);
                qRange.push({ node->val, nodeRange.second });
            }
        }

        return true;
    }
};

