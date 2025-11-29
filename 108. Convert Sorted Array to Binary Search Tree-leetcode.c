struct TreeNode *rec(const int *nums, int left, int right) {
    if (left > right) return NULL;
    int mid = (left + right) / 2;
    struct TreeNode *n = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    if (!n) exit(EXIT_FAILURE);
    n->val = nums[mid];
    n->left = rec(nums, left, mid - 1); n->right = rec(nums, mid + 1, right);
    return n;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return rec(nums, 0, numsSize - 1);
}
