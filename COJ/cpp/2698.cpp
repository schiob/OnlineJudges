
using namespace std;

int main(){
	string w, r1, r2;
	int val = 0, may = 0, men = 0;
	cin >> w;
	for(unsigned int i = 0 ; i < w.length() ; i++){
		val += (int)w.at(i) - 64;
	}
	if(val%2 == 0){
		val = val / 2;
		may = val / 26;
		men = val % 26;
		r1.append(may, 'Z');
		if(men != 0){
			r1.append(1, (char)men+64);
		}
		r2 = r1;
	}
	else{
		val = (val / 2) + 1;
		may = val / 26;
		men = val % 26;
		r1.append(may, 'Z');
		if(men != 0){
			r1.append(1, (char)men+64);
		}
		val = val - 1;
		may = val / 26;
		men = val % 26;
		r2.append(may, 'Z');
		if(men != 0){
			r2.append(1, (char)men+64);
		}
	}
	cout << r2 << " " << r1 << endl;
	return 0;
}

