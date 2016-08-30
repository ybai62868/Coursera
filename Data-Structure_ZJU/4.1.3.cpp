BinTree Delete( ElementType X, BinTree BST ) 
{
    Position Tmp;
    if ( BST==NULL ) printf("要删除的元素未找到\n");
    else if ( X < BST->val ) {
        BST->left = Delete(X,BST->left);
    } 
    else if ( X > BST->val ) {
        BST->right = Delete(X,BST->right);
    }
    else {
        if ( BST->right!=NULL&&BST->right!=NULL ) {
            Tmp = FindMin(BST->right);
            //Tmp = FindMax(BST->left);
            BST->val = Tmp->val;
            BST->right = Delete(BST->Data,BST->Right);
        }
        else {
            Tmp = BST;
            if ( BST->left!=NULL ) {
                BST = BST->right;
            }
            else if ( BST->right!=NULL ) {
                BST = BST->left;
            }
            free(Tmp);
        }
    }
    return BST;
}
