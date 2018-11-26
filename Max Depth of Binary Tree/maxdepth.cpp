/*
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int len = 0;
        findlen(root, 1, len);
        return len;
    }
    void findlen(TreeNode* node, int curlen, int &len)
    {
        if (!node)
            return;
        if (!node->left && !node->right)
        {
            if (curlen > len)
                len = curlen;
        }
        findlen(node->left, curlen + 1, len);
        findlen(node->right, curlen + 1, len);
    }
};
