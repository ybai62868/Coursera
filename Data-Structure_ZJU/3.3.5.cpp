Position Find( ElementType X, BinTree BST ) 
{
    if ( BST==NULL ) return NULL;
    if ( X > BST->val ) {
        return Find(X,BST->right);
    }
    else if ( X < BST->val ) {
        return Find(X,BST->left);
    }
    else return BST
}

Position IterFind( ElementType X, BinTree BST ) 
{
    while ( BST ) {
        if ( X > BST->val ) {
            BST = BST->right;
        }
        else if ( X < BST->val ) {
            BST = BST->left;
        }
        else return BST;
    }
    return NULL;
}

Position FindMin( BinTree BST ) 
{
    if ( BST==NULL ) return NULL;
    else if ( BST->left != NULL ) return BST;
    else return FindMin(BST->left);
    
}

Position IterFindMin( BinTree BST ) 
{
    if ( BST!=NULL ) {
        while ( BST->left!=NULL ) BST = BST->left;
    }
    return BST;
}

Position FindMax( BinTree BST ) 
{
    if ( BST==NULL ) return NULL;
    else if ( BST->right!=NULL ) return BST;
    else return BST->right;
}

Position IterFindMax( BinTree BST ) 
{
    if ( BST!=NULL ) {
        while ( BST->right!=NULL ) BST = BST->right;
    }
    return BST;
}

