void Dijkstra ()
{
	book[s] = 1;
	dis[s] = 0;
	int _min = inf;
	for ( int i = 1;i <= n-1;i++ ) {
		_min = inf;
		for ( int j = 1;j <= n;j++ ) {
			if ( book[j]==0&&dis[j] < _min ) {
				_min = dis[j];
				u = j;
			}
		}
		book[u] = 1;
		for ( int v = 1;v <= n;v++ ) {
			if ( e[u][v] < inf ) {
				if ( dis[v] < dis[u]+e[u][v] ) {
					dis[v] = dis[u]+e[u][v];
				}
			}
		}
	}
}
