
//输出二叉树中所有的叶子节点
void PreOrderTraversal( BinTree BT )
{
    if ( BT ) {
        if ( BT->left!=NULL && BT->right!=NULL ) {
            printf("%c",BT->val);
        }
        PreOrderTraversal(BT->left);
        PreOrderTraversal(BT->right);   
    }
}

//求二叉树的高度
void PostOrderGetHeight ( BinTree BT ) 
{
    int HL, HR, MaxH;
    if ( BT ) {
        HL = PostOrderGetHeight(BT->left);
        HR = PostOrderGetHeight(BT->right);
        MaxH = max(HL,HR);
        return MaxH+1;
    }
    else return 0;
}
