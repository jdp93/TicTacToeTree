Joseph Pallansch
To compile use the  command:
make
OR
make compile
OR
g++ runner.cpp

To run use the command:
make run
OR
./a.out

To clea use the command:
make clean
OR
rm a.out

The program asks for an initial starting tic tac toe board given in row major
format. The program generates the tree and then gives the user a list of six
options although only the first five work.
The first option returns the total number of nodes in the tree. The next three
are different traversals of the tree. The fifth option returns the leftmost
path from the initial position to a leaf.
