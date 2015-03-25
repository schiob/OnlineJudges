#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct node{
	char id;
	mutable bool pass;
	bool operator=(const node &n) const{
		return id == n.id;
	}
	bool const operator<(const node &n) const{
		return id < n.id;
	}
};

vector<char> still;

string DFS(map<node, vector<char> > &m, node &v, string &s){
	s += v.id;
	s += ",";
	m.find(v)->first.pass = true;
	for(unsigned int i = 0 ; i < still.size() ; i++){
		if(still[i] == v.id) still.erase(still.begin()+i);
	}
	for(vector<char>::iterator ite = m[v].begin() ; ite != m[v].end() ;ite++){
		node n;
		n.id = *ite;
		if(!m.find(n)->first.pass){
			DFS(m, n, s);
		}
	}
	return s;
}

int main(){
	int c;
	cin >> c;
	for(int i = 1 ; i <= c ; i++){
		int V, E, count = 0;
		char min = 'a'-1;
		cin >> V >> E;
		map<node, vector<char> > edges;
		vector<char> disco;
		for(int j = 0 ; j < E ; j++){
			char a, b;
			cin >> a >> b;
			node n;
			n.id = a;
			n.pass = false;
			edges[n].push_back(b);
			n.id = b;
			n.pass = false;
			edges[n].push_back(a);
			if(a > min) min = a;
			if(b > min) min = b;
		}
		for(int j = 0 ; j < V ; j++){
			still.push_back('a'+j);
		}
		cout << "Case #" << i << ":" << endl;
		for(map<node, vector<char> >::iterator it = edges.begin() ; it != edges.end() ;it++){
			if(!it->first.pass){
				while(it->first.id > still[0] && still.size() != 0){
					cout << still[0] << ",\n";
					still.erase(still.begin());
					count++;
				}
				node n = it->first;
				string s = "";
				cout << DFS(edges, n, s) << endl;
				count++;
			}
		}
		while(still.size() != 0){
			cout << still[0] << ",\n";
			still.erase(still.begin());
			count++;
		}
		cout << count << " connected components\n"<< endl;

	}
	return 0;
}