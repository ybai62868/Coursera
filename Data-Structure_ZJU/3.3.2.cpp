//中序遍历的非递归算法
void InOrderTraversal( BinTree BT ) 
{
    BinTree T = BT;
    Stack S = CreateStack ( MAXSIZE );
    while ( T||!isEmpty(S) ) {
        while ( T ) {
            Push(S,T);
            T = T->left;
        }
        if ( !isEmpty(S) ) {
            T = pop(S);
            printf("%c",T->val);
            T = T->right;
        }
    } 
}

//先序遍历的非递归算法
void PreOrderTraversal( BinTree BT ) 
{
    BinTree T = BT;
    Stack T = CreatStack( MAXSIZE );
    while ( T||isEmpty(S) ) {
        while ( T ) {
            Push(S,T);
            print("%c",T->val);
            T = T->left;
        }
        while ( !isEmpty(S) ) {
            T = pop(S);
            T = T->right;
        }
    } 
}
