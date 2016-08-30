void PreOrderTraversal ( BinTree BT )
{
    if ( BT==NULL ) return
    else {
        printf("%c ",BT->val);
        PreOrderTraversal(BT->left);
        PreOrderTraversal(BT->right);
    }
}

void InOrderTraversal( BinTree BT )
{
    if ( BT==NULL ) return;
    else {
        InOrderTraversal(BT->left);
        printf("%c",BT->val);
        InOrderTraversal(BT->right);
    }
} 

void PostOrderTraversal( BinTree BT ) 
{
    if ( BT==NULL ) return;
    else {
        PostOrderTraversal(BT->left);
        PostOrderTraversal(BT->right);
        printf("%c",BT->val);
    }
}
