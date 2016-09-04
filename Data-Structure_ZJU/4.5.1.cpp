
# define MAX 123456
int father[MAX];
void Init()
{
    for ( int i = 1;i <= n;i++ ) father[i] = i;
}
void Union( int x,int y )
{
    int t1 = getf(x);
    int t2 = getf(y);
    if ( t1!=t2 ) {
        father[t2] = t1;
    } 
}
void Getf( int x ) 
{
    if ( father[x]==x ) return x;
    else {
        father[x] = getf(father[x]);
        return father[x];
    }
}
