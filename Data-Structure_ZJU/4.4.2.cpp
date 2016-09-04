typedef struct TreeNode * HuffmanTree;
struct TreeNode
{
    int Weight;
    HuffmanTree Left,Right;
};
HuffmanTree HuffmanTree ( MinHeap H )
{
    HuffmanTree T;
    BuildMinHeap(H);
    for ( int i = 1;i < H->Size;i++ ) {
        T = malloc(sizeof(struct TreeNode)); 
        T->Left = DeleteMin(H);
        T->right = DeleteMin(H);
        T->Weight = T->left->Weight+T->right->Weight;
        Insert(H,T);
    }
    T = DeleteMin(H);
    return T;
}
