/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: confusedboi
TASK: paint
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	// ofstream fout ("paint.out");
	// ifstream fin ("paint.in");
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int ans = 0;
	ans += b - a;
	ans += d - c;

	ans -= max(0, min(b, d) - max(a, c));
	cout << ans << endl;


	return 0;
}