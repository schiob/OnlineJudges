#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>
#include <stdlib.h>

using namespace std;

struct node {
	int id;
	node *left;
	node *right;
};

void insert(node *root, int nex){
	if(nex > root->id){
		if(root->right == NULL){
			root->right = new node;
			root->right->id = nex;
			return;
		}
		else{
			insert(root->right, nex);
		}
	}
	else{
		if(root->left == NULL){
			root->left = new node;
			root->left->id = nex;
			return;
		}
		else{
			insert(root->left, nex);
		}
	}
}

void in_order(node *root){
	if(root->left != NULL){
		in_order(root->left);
	}
	cout << " " << root->id;
	if(root->right != NULL){
		in_order(root->right);
	}
}

void pre_order(node *root){
	cout << " " << root->id;
	if(root->left != NULL){
		pre_order(root->left);
	}
	if(root->right != NULL){
		pre_order(root->right);
	}
}

void pos_order(node *root){
	if(root->left != NULL){
		pos_order(root->left);
	}
	if(root->right != NULL){
		pos_order(root->right);
	}
	cout << " " << root->id;
}

int main(){
	int c, n;
	cin >> c;
	for(int i = 1 ; i <= c ; i++){
		cin >> n;
		int nex;
		cin >> nex;
		node *root;
		root = new node;
		root->id = nex;
		while(--n){
			cin >> nex;
			insert(root, nex);
		}
		cout << "Case " << i << ":\n";
		cout << "Pre.:";
		pre_order(root);
		cout << "\n";
		cout << "In..:";
		in_order(root);
		cout << "\n";
		cout << "Post:";
		pos_order(root);
		cout << "\n\n";
	}
	return 0;
}
