#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string replace_all(string w, string line){
	size_t pos = line.find(" " + w + " ");
	while(pos != string::npos){
		line.replace(pos+1, w.length(), w.substr(0,1)+".");
		pos = line.find(" " + w + " ");
	}
	return line;
}

int main(){
	string line;
	getline(cin, line);
	while(line != "."){
		map<string, int> m;
		map<char, int> cont;
		map<char, string> buenas;
		istringstream iss(line);
		string word;
		while(iss >> word){
			if(word.length() < 3) continue;
			else{
				m[word] += word.length()-2;
				if(m[word] > cont[word[0]]){
					buenas[word[0]] = word;
					cont[word[0]] = m[word];
				}
			}
		}
		int c = 0;
		line = " " + line + " ";
		for(map<char, string>::iterator it = buenas.begin() ; it != buenas.end() ; it++){
			c++;
			line = replace_all(it->second, line);
		}
		line = line.substr(1, line.size()-2);
		cout << line << endl << c << endl;
		for(map<char, string>::iterator it = buenas.begin() ; it != buenas.end() ; it++){
			cout << it->first << ". = " << it->second << endl;
		}
		getline(cin, line);
	}
	return 0;
}