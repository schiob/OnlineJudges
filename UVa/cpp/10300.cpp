#include <cstdio>
#include <string>

using namespace std;

int main(){
	int c, g, s, a, e, res;
	scanf("%d", &c);
	for(int i = 0 ; i < c ; i++){
		res = 0;
		scanf("%d", &g);
		for(int j = 0 ; j < g ; j++){
			scanf("%d %d %d", &s, &a, &e);
			res += s*e;
		}
		printf("%d\n", res);
	}
	return 0;
}