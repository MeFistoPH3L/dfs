vector < vector<int> > g; //graf
int n; // number of vertices

vector<int> color; // vertex color (0, 1, or 2)

vector<int> time_in, time_out; // "times" of entering and exiting the top
int dfs_timer = 0; // "timer" to determine the times

void dfs (int v) {
	time_in[v] = dfs_timer++;
	color[v] = 1;
	for (vector<int>::iterator i=g[v].begin(); i!=g[v].end(); ++i)
		if (color[*i] == 0)
			dfs (*i);
	color[v] = 2;
	time_out[v] = dfs_timer++;
}