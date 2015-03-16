#include <iostream>
#include <string>
#include "t3solver.h"

using namespace std;
int main(){
	string board;
	string  option;
	int invalid = 1;
	while(invalid){
		invalid = 0;
		cout<<"Please enter an initial board position:\nNOTE: use X,O or * not x, o\n";
		getline(cin, board);
		if(board.length() != 9){
			invalid  = 1;
			cout<<"Invalid board\n";
		}
		int i = 0;
		while(i<9){
			if(board.substr(i,1).compare("X") != 0 && board.substr(i,1).compare("O") != 0 && board.substr(i,1).compare("*") != 0){
				invalid = 1;
				cout<<"Invalid board\n";
			}
			i++;
		}
	}
	t3solver tic(board);	
	cout<<"\n\nBoard serialization is: "<< board << "\n\nPlease choose from the following:\n\n1: Total Nodes\n2: PreOrder Traversal\n3: PostOrder Traversal\n4: LevelOrderTraversal\n5: Path to a terminal board position\n6: Find max winners from a given game board\nAny other number: EXIT\n";
	getline(cin, option);
	if(option.compare("1") == 0){
		cout<<"Total Nodes: "<<tic.getTotalNodes()<<"\n";
	}
	if(option.compare("2") == 0){
		tic.preOrder(tic.getRoot());
	}
	if(option.compare("3") == 0){
		tic.postOrder(tic.getRoot());
	}
	if(option.compare("4") == 0){
		tic.inOrder(tic.getRoot());
	}
	if(option.compare("5") == 0){
		tic.pathToFinish(tic.getRoot());
	}
	if(option.compare("6") == 0){
	}
}
