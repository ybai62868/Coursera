void LevelOrderTraversal( BinTree BT )
{
    Queue Q;
    BinTree T;
    if ( !BT ) return;
    Q = CreatQueue(MaxSize);
    AddQ( Q,BT );
    while ( !IsEmpty(Q) ) {
        T = DeleteQ(Q);
        printf("%d\n",T->val);
        if ( T->left ) AddQ(Q,T->left);
        if ( T->right ) AddQ(Q,R->right); 
    }
}
