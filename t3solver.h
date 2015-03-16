//Joseph Pallansch
#include <iostream>
#include <string>

using namespace std;

struct treeNode{
	string data;
	//pointer for each possible child
	treeNode *k1, *k2, *k3, *k4, *k5, *k6, *k7, *k8, *k9;
};
class t3solver{
	int numNodes, i, spaces, xs, os, count;
	string s;
	treeNode *root;
treeNode *n;
	public:
	t3solver(string board){
		numNodes = 0;
		root = new treeNode;
		root->data = board;
		root->k1 = 0;
		root->k2 = 0;
		root->k3 = 0;
		root->k4 = 0;
		root->k5 = 0;
		root->k6 = 0;
		root->k7 = 0;
		root->k8 = 0;
		root->k9 = 0;
		generateTree(root);
	}
	//returns pointer to root of tree
	treeNode* getRoot(){
		return root;
	}
	//returns total nodes
	int getTotalNodes(){
		return numNodes;
	}
	//creates the tree recursively
	void generateTree(treeNode *t){
		numNodes++;
		//base case
		if(isLeaf(t->data)){
			n = new treeNode;
			n->data = t->data;
			n->k1 = 0;
			n->k2 = 0;
			n->k3 = 0;
			n->k4 = 0;
			n->k5 = 0;
			n->k6 = 0;
			n->k7 = 0;
			n->k8 = 0;
			n->k9 = 0;
			t = n;
		}
		if(!isLeaf(t->data)){
			i = 0;
			spaces = 0;
			while(i<9){
				s = t->data.substr(i,1);
				if(s.compare("*") == 0){
					spaces++;
				}
				i++;
			}
			n = new treeNode;
			n->k1 = 0;
			n->k2 = 0;
			n->k3 = 0;
			n->k4 = 0;
			n->k5 = 0;
			n->k6 = 0;
			n->k7 = 0;
			n->k8 = 0;
			n->k9 = 0;
			//number of spaces is equal to number of possible moves
			switch(spaces){
				case(1):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					break;
				case(2):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					n->data = nextMove(t->data, 2);
					t->k2 = n;
					generateTree(t->k2);
					break;
				case(3):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					n->data = nextMove(t->data, 2);
					t->k2 = n;
					generateTree(t->k2);
					n->data = nextMove(t->data, 3);
					t->k3 = n;
					generateTree(t->k3);
					break;
				case(4):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					n->data = nextMove(t->data, 2);
					t->k2 = n;
					generateTree(t->k2);
					n->data = nextMove(t->data, 3);
					t->k3 = n;
					generateTree(t->k3);
					n->data = nextMove(t->data, 4);
					t->k4 = n;
					generateTree(t->k4);
					break;
				case(5):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					n->data = nextMove(t->data, 2);
					t->k2 = n;
					generateTree(t->k2);
					n->data = nextMove(t->data, 3);
					t->k3 = n;
					generateTree(t->k3);
					n->data = nextMove(t->data, 4);
					t->k4 = n;
					generateTree(t->k4);
					n->data = nextMove(t->data, 5);
					t->k5 = n;
					generateTree(t->k5);
					break;
				case(6):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					n->data = nextMove(t->data, 2);
					t->k2 = n;
					generateTree(t->k2);
					n->data = nextMove(t->data, 3);
					t->k3 = n;
					generateTree(t->k3);
					n->data = nextMove(t->data, 4);
					t->k4 = n;
					generateTree(t->k4);
					n->data = nextMove(t->data, 5);
					t->k5 = n;
					generateTree(t->k5);
					n->data = nextMove(t->data, 6);
					t->k6 = n;
					generateTree(t->k6);
					break;
				case(7):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					n->data = nextMove(t->data, 2);
					t->k2 = n;
					generateTree(t->k2);
					n->data = nextMove(t->data, 3);
					t->k3 = n;
					generateTree(t->k3);
					n->data = nextMove(t->data, 4);
					t->k4 = n;
					generateTree(t->k4);
					n->data = nextMove(t->data, 5);
					t->k5 = n;
					generateTree(t->k5);
					n->data = nextMove(t->data, 6);
					t->k6 = n;
					generateTree(t->k6);
					n->data = nextMove(t->data, 7);
					t->k7 = n;
					generateTree(t->k7);
					break;
				case(8):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					n->data = nextMove(t->data, 2);
					t->k2 = n;
					generateTree(t->k2);
					n->data = nextMove(t->data, 3);
					t->k3 = n;
					generateTree(t->k3);
					n->data = nextMove(t->data, 4);
					t->k4 = n;
					generateTree(t->k4);
					n->data = nextMove(t->data, 5);
					t->k5 = n;
					generateTree(t->k5);
					n->data = nextMove(t->data, 6);
					t->k6 = n;
					generateTree(t->k6);
					n->data = nextMove(t->data, 7);
					t->k7 = n;
					generateTree(t->k7);
					n->data = nextMove(t->data, 8);
					t->k8 = n;
					generateTree(t->k8);
					break;
				case(9):
					n->data = nextMove(t->data, 1);
					t->k1 = n;
					generateTree(t->k1);
					n->data = nextMove(t->data, 2);
					t->k2 = n;
					generateTree(t->k2);
					n->data = nextMove(t->data, 3);
					t->k3 = n;
					generateTree(t->k3);
					n->data = nextMove(t->data, 4);
					t->k4 = n;
					generateTree(t->k4);
					n->data = nextMove(t->data, 5);
					t->k5 = n;
					generateTree(t->k5);
					n->data = nextMove(t->data, 6);
					t->k6 = n;
					generateTree(t->k6);
					n->data = nextMove(t->data, 7);
					t->k7 = n;
					generateTree(t->k7);
					n->data = nextMove(t->data, 8);
					t->k8 = n;
					generateTree(t->k8);
					n->data = nextMove(t->data, 9);
					t->k9 = n;
					generateTree(t->k9);
					break;
				
			}
		}
	}
	//calculates the next moves in order and determines if X or O plays next
	string nextMove(string initial, int move){
		string pos;
		int xTurn = 0;
		i = 0;
		count = 0;
		xs = 0;
		os = 0;
		while(i<9){
			s = initial.substr(i,1);
			if(s.compare("X") == 0){
				xs++;
			}
			if(s.compare("O") == 0){
				os++;
			}
			i++;
		}
		if(xs == os){
			xTurn = 1;
		}
		i = 0;
		while(i<9){
			s = initial.substr(i,1);
			if(s.compare("*") == 0){
				count++;
				if(count  == move){
					if(i<8 && xTurn){
						pos = initial.substr(0,i) + "X" + initial.substr(i+1, 8-i);
						i = 9;
					}
					if(i==8 && xTurn){
						pos = initial.substr(0,i)+"X";
						i = 9;
					}
					if(i<8 && !xTurn){
						pos = initial.substr(0,i) + "O" +initial.substr(i+1, 8-i);
						i = 9;
					}
					if(i==8 && !xTurn){
						pos = initial.substr(0,i)+"O";
						i = 9;
					}
				}
			}
			i++;
		}
		return pos;
	}
			
	//used to determine if a leaf has been reached
	int getValue(string xo){
		if(xo.compare("X") == 0){
			return 1;
		}
		if(xo.compare("O") == 0){
			return 2;
		}
		return 0;
	}

	int one, two, three, four, five, six, seven, eight, nine, v1, v2, v3, h1, h2, h3, d1, d2;
	//determines if the string would be a terminal board position
	int isLeaf(string board){
		one = getValue(board.substr(0,1));
		two = getValue(board.substr(1,1));
		three = getValue(board.substr(2,1));
		four = getValue(board.substr(3,1));
		five = getValue(board.substr(4,1));
		six = getValue(board.substr(5,1));
		seven = getValue(board.substr(6,1));
		eight = getValue(board.substr(7,1));
		nine = getValue(board.substr(8,1));
		v1 = one*four*seven;
		v2 = two*five*eight;
		v3 = three*six*nine;
		h1 = one*two*three;
		h2 = four*five*six;
		h3 = seven*eight*nine;
		d1 = one*five*nine;
		d2 = three*five*seven;
		//1 is a row of X's, 8 is a row of O's, and if the prouct of vertical products isn't 0 then there are no spaces
		if((v1 == 1 || v1 == 8) || (v2 == 1 || v2 == 8) || (v3 == 1 || v3 == 8) || (h1 == 1 || h1 == 8) || (h2 == 1 || h2 == 8) || (h3 == 1 || h3 ==8) || (d1 == 1 || d1 == 8) || (d2 == 1 || d2 == 8) || ((v1*v2*v3) != 0)){
			return 1;
		}
		return 0;
	}
	//gives preoOrder traversal using recursion
	void preOrder(treeNode *head){
		cout<<head->data<<"\n";
		if(head->k1 != 0){
			preOrder(head->k1);
		}
		if(head->k2 != 0){
			preOrder(head->k2);
		}
		if(head->k3 != 0){
			preOrder(head->k3);
		}
		if(head->k4 != 0){
			preOrder(head->k4);
		}
		if(head->k5 != 0){
			preOrder(head->k5);
		}
		if(head->k6 != 0){
			preOrder(head->k6);
		}
		if(head->k7 != 0){
			preOrder(head->k7);
		}
		if(head->k8 != 0){
			preOrder(head->k8);
		}
		if(head->k9 != 0){
			preOrder(head->k9);
		}
	}
	//gives inOrder traversal using recursion
	void inOrder(treeNode *head){
		if(head->k1 != 0){
			inOrder(head->k1);
		}
		cout<<head->data<<"\n";
		if(head->k2 != 0){
			inOrder(head->k2);
		}
		if(head->k3 != 0){
			inOrder(head->k3);
		}
		if(head->k4 != 0){
			inOrder(head->k4);
		}
		if(head->k5 != 0){
			inOrder(head->k5);
		}
		if(head->k6 != 0){
			inOrder(head->k6);
		}
		if(head->k7 != 0){
			inOrder(head->k7);
		}
		if(head->k8 != 0){
			inOrder(head->k8);
		}
		if(head->k9 != 0){
			inOrder(head->k9);
		}
	}
	//gives postOrder traversal using recursion
	void postOrder(treeNode *head){
		if(head->k1 != 0){
			postOrder(head->k1);
		}
		if(head->k2 != 0){
			postOrder(head->k2);
		}
		if(head->k3 != 0){
			postOrder(head->k3);
		}
		if(head->k4 != 0){
			postOrder(head->k4);
		}
		if(head->k5 != 0){
			postOrder(head->k5);
		}
		if(head->k6 != 0){
			postOrder(head->k6);
		}
		if(head->k7 != 0){
			postOrder(head->k7);
		}
		if(head->k8 != 0){
			postOrder(head->k8);
		}
		if(head->k9 != 0){
			postOrder(head->k9);
		}
		cout<<head->data<<"\n";
	}
	//determines the left most path to a leaf
	void pathToFinish(treeNode *head){
		while(head->k1 != 0){
			cout<<head->data<<"\n";
			head = head->k1;
		}
		cout<<head->data<<"\n";
	}
};
