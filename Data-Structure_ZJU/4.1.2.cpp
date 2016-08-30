BinTree insert( ElementType X, BinTree BST ) 
{
    if ( !BST ) {
        BST = malloc(sizeof(struct BinTree));
        BST->left = NULL;
        BST->right = NULL;
    }
    else {
        if ( X > BST->val ) {
            BST->left = Insert(X,BST->left);
        }
        else if ( X > BST->right ) {
            BST->right = Insert(X,BST->right);
        }
    }
    return BST;
}
