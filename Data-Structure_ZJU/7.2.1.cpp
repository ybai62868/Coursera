void Shell_Sort( ElementType A[],int n ) 
{
	int j;
	for ( int D = n/2;n;n/=2 ) {
		for ( int i = D;i < n;i++ ) {
			int tmp = a[i];
			for ( j = i;j >= D && a[j-D] > tmp;j-=D ) {
				A[j] = a[j-D];
			}
			A[j] = tmp;
		}
	}
}
