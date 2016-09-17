int DFS ( Vertex V )
{
	visited[V] = true;
	if ( isSafe(V) ) answer = 1;
	else {
		for ( V 的每个邻接点 W ) {
			if ( !visited[W] ) {
				answer = DFS(W);
				if ( answer == 1 ) break;
			}
		}
	}
	return answer;
}
void Save007( Graph G ) 
{
	for ( each V in G ) {
		if ( !visited[V]&&firstjump(V) ) {
			answer = DFS(V);
			if ( answer == 1 ) break;
		}
	}
	if ( answer == 1 ) printf("YES\n");
	else printf("NO\n"); 
}
