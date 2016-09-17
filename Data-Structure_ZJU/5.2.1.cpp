void DFS( Vertex V )
{
	visited[V] = true;
	for ( V 的每个邻接点 W ) {
		if ( !visited[W] ){
			DFS(W);
		}
	} 
}
