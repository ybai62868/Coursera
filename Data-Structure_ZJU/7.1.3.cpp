void Insertion_Sort( ElementType A[],int n )
{
	int j;
	for ( int i = 1;i < n;i++ ) {
		int tmp = A[i];
		for ( j = i;j > 0 && A[j-1] > tmp;j-- ) {
			A[j] = A[j-1];
		}
		A[j] = tmp;
	}
}
