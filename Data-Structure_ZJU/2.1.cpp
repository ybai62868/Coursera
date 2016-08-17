//线性表的顺序存储实现

# include <cstdio>
# include <iostream>
# include <cmath>
using namespace std;
# define MAX 123456
# define ElementType int
typedef struct {
	ElementType Data[MAX];
	int last;
}List;
List L, * Ptrl;
/*
	访问下标为i的元素：L.Data[i], Ptrl->Data[i]
	线性表的长度：L.last+1,Ptrl->last+1
*/
//初始化（建立空的顺序表）
List * MakeEmpty()
{
	List * Ptrl;
	Ptrl = (List *)malloc(sizeof(List));
	Ptrl->last = -1;
	return Ptrl;
}
//查找
int Find ( ElementType X,List * Ptrl ) 
{
	int i = 0;
	while ( i <= Ptrl->last&&Ptrl->Data[i]!=X ) i++;
	if ( i > Ptrl->last ) return -1;
	else return i;
}
//插入操作实现
void Insert ( ElementType X, int i, List * Ptrl ) 
{
	if ( Ptrl->last==MAX-1 ) {
		printf("FULL");
		return;
	}
	if ( i < 1 || i > Ptrl->last+2 ) {
		printf("ERROR");
		return;
	}
	for ( int j = Ptrl->last;j >= i-1;j-- ) {
		Ptrl->Data[j+1] = Ptrl->Data[j];
	} 
	Ptrl->Data[i-1] = X;
	Ptrl->last++;
	return;
}
//删除操作实现
void Delete( int i, List * Ptrl )
{
	if ( i < 1||i > Ptrl->last+1 ) {
		printf("%d is not exist\n",i);
		return;
	}
	for ( int j = i;j <= Ptrl->last;j++ ) {
		Ptrl->Data[j-1] = Ptrl->Data[j];
	}
	Ptrl->last--;
	return;
}
//打印这个顺序表
void print ( List * Ptrl )
{
	for ( int i = 0;i < Ptrl->last;i++ ) {
		cout<<Ptrl->Data[i]<<" ";
	}
	cout<<endl;
}
int main(void)
{
	Ptrl = MakeEmpty();
	cin>>Ptrl->last;
	for ( int i = 0;i < Ptrl->last;i++ ) cin>>Ptrl->Data[i];
	print(Ptrl);
	int pos = Find(1,Ptrl);
	if ( pos==-1 ) cout<<"Not Found"<<endl;
	else cout<<pos<<endl;
	Insert(1,1,Ptrl);
	Insert(7,2,Ptrl);
	Delete(4,Ptrl);
	print(Ptrl);
	return 0;
}
