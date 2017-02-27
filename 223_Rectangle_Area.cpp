/*

Find the total area covered by two rectilinear rectangles in a 2D plane.

Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.


*/

#include <iostream>
#include <vector>

using namespace std;

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
   int innerL = max(A, E);
   int innerR = max(innerL, min(C, G));
   int innerB = max(B, F);
   int innerT = max(innerB, min(D, H));

   return ((C - A) * (D - B) - (innerR - innerL) * (innerT - innerB) + (G -E) * (H - F)); 
}

int main() {
	vector<int> input(8);
	for (int i = 0; i < 8; i++)
		cin >> input[i];

	cout << computeArea(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7]);
}
