#include <iostream>
#include <string>

using namespace std;

int main(){
	bool o = true;
	size_t p = 0;
	string line;
	while(getline(cin, line)){
		p = line.find('"', p);
		while(p != string::npos){
			if(o){
				line.replace(p, 1, "``");
				o = false;
			}
			else{
				line.replace(p, 1, "''");
				o = true;
			}
			p = line.find('"', p);
		}
		p = 0;
		cout << line << endl;
	}	
	return 0;
}
