void BFS ( Vertex V )
{
	visited[V] = true;
	Enqueue(V,Q);
	while ( !Q.empty() ){
		V = Dequeue(Q);
		for ( V的每个邻接点 W ) {
			if ( !visited[W] ) {
				visited[W] = true;
				Enqueue(W,Q);
			}
		}
	}
}
