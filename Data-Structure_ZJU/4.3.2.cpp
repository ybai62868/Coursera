//最大堆的创建
typedef struct HeapStruct * MaxHeap;
struct HeapStruct
{
    ElementType * Elements;
    int Size;
    int Capacity;
};
MaxHeap Create( int MaxSize )
{
    MaxHeap H = malloc(sizeof(struct HeapStruct));
    H->Elements = malloc((MaxSize+1)*sizeof(ElementType));
    H->Size = 0;
    H->Capacity = MaxSize;
    H->Elements[0] = MaxData;
    return H;
}


void Insert( MaxHeap H, ElementType item )
{
    if ( IsFull(H) ){
        printf("最大堆已满\n");
        return;
    }
    int i = H->Size++;
    for ( ;H->Elements[i/2]<item;i/=2 ) {
        H->Elements[i] = H->Elements[i/2];
    }
    H->Elements[i] = item;
}
