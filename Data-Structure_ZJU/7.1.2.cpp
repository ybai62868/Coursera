void Bubble_Sort ( ElementType A[],int n ) 
{
	for ( int i = n-1;i >= 0;i-- ) {
		int flag = 0;
		for ( j = 0;j <= i;j++ ) {
			if ( A[i] > A[i+1] ) {
				swap(A[i],A[i+1]);
				flag = 1;
			}
		}
		if ( flag==0 ) break;
	}

}
