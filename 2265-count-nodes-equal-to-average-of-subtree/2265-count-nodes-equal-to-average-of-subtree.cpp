/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    pair<int, int> sumSubtree(TreeNode* node) {
        if (!node)
            return {0, 0};
        int cnt = 1;
        int totalSum = node->val;

        if (node->left) {
            auto [leftSum, leftCnt] = sumSubtree(node->left);
            totalSum += leftSum;
            cnt += leftCnt;
        }

        if (node->right) {
            auto [rightSum, rightCnt] = sumSubtree(node->right);
            totalSum += rightSum;
            cnt += rightCnt;
        }

        return {totalSum, cnt};
    }

    int solve(TreeNode* node) {
        if (!node)
            return 0;
        int ans = 0;

        auto [sum, cnt] = sumSubtree(node);
        if (sum / cnt == node->val)
            ans++;

        ans += solve(node->left);
        ans += solve(node->right);

        return ans;
    }
    int averageOfSubtree(TreeNode* root) {
        if (!root)
            return 0;

        return solve(root);
    }
};