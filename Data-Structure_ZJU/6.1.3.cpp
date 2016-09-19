void floyd()
{
	for ( int i = 0;i < n;i++ ) {
		for ( int j = 0;j < n;j++ ) {
			path[i][j] = -1;
		}
	}
	for ( int i = 0;i < n;i++ ) {
		for ( int j = 0;j < n;j++ ) {
			for ( int k = 0;k < n;k++ ) {
				if ( e[i][j] > e[i][k]+e[k][j] ) {
					e[i][j] = e[i][k]+e[k][j];
					path[i][j] = k;
				}
			}
		}
	}
}
