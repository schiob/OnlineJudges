#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <map>
#include <set>

#define MAX 10001
#define INF (2<<20)
#define pp pair<int, int>
#define mi map<int, pair<vector<int>, vector<int> > >

using namespace std;

pair<vector<int>, vector<int> > bellman(int verti, vector<pair<pp, int> > edges, int source){
	pair<vector<int>, vector <int> > dp;
	// init the graph
	for(int i = 1 ; i <= verti ; i++){
		if(i == source) dp.first.push_back(0);
		else dp.first.push_back(INF);
		dp.second.push_back(0);
	}
	// relax edges
	for(int i = 1 ; i <= verti -1 ; i++){
		for(unsigned int j = 0 ; j < edges.size() ; j++){
			int u = edges[j].first.first, v = edges[j].first.second, w = edges[j].second;
			if(dp.first[u-1] + w < dp.first[v-1]){
				dp.first[v-1] = dp.first[u-1] + w;
				dp.second[v-1] = u;
			}
		}
	}
	return dp;

}

int main(){
	int N, E, K;
	cin >> N >> E;
	while(N != 0){
		vector<pair<pp, int> > edges;
		map<int, set<int> > adj;
		for(int i = 0 ; i < E ; i++){
			pair<pp, int> ed;
			cin >> ed.first.first >> ed.first.second >> ed.second;
			edges.push_back(ed);
			adj[ed.first.first].insert(ed.first.second);
			for(map<int, set<int> >::iterator it = adj.begin() ; it  != adj.end() ; it++){
				if(it->second.find(ed.first.first) != it->second.end()){
					it->second.insert(ed.first.second);
				}
			}
		}

		for(map<int, set<int> >::iterator it = adj.begin() ; it  != adj.end() ; it++){
			map<int, set<int> >::iterator it2 = it;
			for(++it2; it2 != adj.end() ; it2++){
				if(it->second.find(it2->first) != it->second.end() && it2->second.find(it->first) != it2->second.end()){
					pair<pp, int> ed;
					ed.first.first = it->first;
					ed.first.second = it2->first;
					ed.second = 0;
					edges.push_back(ed);
					ed.first.first = it2->first;
					ed.first.second = it->first;
					ed.second = 0;
					edges.push_back(ed);
				}
			}
		}

		cin >> K;
		mi m;
		while(K--){
			int o, d;
			cin >> o >> d;
			mi::iterator it = m.find(o);
			if(it == m.end()){
				m[o] = bellman(N, edges, o);
			}
			if(m[o].first[d-1] < INF){
				cout << m[o].first[d-1] << endl;
			}
			else{
				cout << "Nao e possivel entregar a carta" << endl;
			}
		}
		cout <<  endl;
		cin >> N >> E;
	}
	return 0;
}