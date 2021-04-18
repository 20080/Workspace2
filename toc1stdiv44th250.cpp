#include <bits/stdc++.h>

using namespace std;
#define ll long long

class PaintingCells {
public:
	int paint(int rows, int columns)
	{
		return rows & 1 && columns & 1 ? ceil((rows * columns) / 2) + 1 : ceil((rows * columns) / 2);
	}

};

