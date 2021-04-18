#include <bits/stdc++.h>

using namespace std;
#define ll long long


pair<ll, ll> findEntryWithLargestValue(
    map<ll, ll> sampleMap)
{

	// Reference variable to help find
	// the entry with the highest value
	pair<ll, ll> entryWithMaxValue
	    = make_pair(0, 0);

	// Iterate in the map to find the required entry
	map<ll, ll>::iterator currentEntry;
	for (currentEntry = sampleMap.begin();
	        currentEntry != sampleMap.end();
	        ++currentEntry) {

		// If this entry's value is more
		// than the max value
		// Set this entry as the max
		if (currentEntry->second
		        > entryWithMaxValue.second) {

			entryWithMaxValue
			    = make_pair(
			          currentEntry->first,
			          currentEntry->second);
		}
	}

	return entryWithMaxValue;
}


// if(s.size()==S)
// 		return S-H;
// 	if(s.size()>=H)
// 		return s.size();
ll solution() {
	set<ll>s;

	ll S, H;
	cin >> S >> H;

	map<ll, ll> m;

	for (ll i = 0; i < S; ++i)
	{
		ll x;
		cin >> x;
		m[x]++;
	}

	ll max = m.size();

	if (m.size() == S)
		return S - H;
	if (m.size() >= H)
		return m.size();

	for (auto x : m) {
		m[x.first]--;
	}


	while (H && !m.empty()) {
		pair<ll, ll> MaxValue
		    = findEntryWithLargestValue(m);

		if (MaxValue.second > H) {
			m[MaxValue.first] -= H;
			H  = 0;
			break;
		}

		else {
			H -= MaxValue.second;
			m.erase(MaxValue.first);
		}


	}







	// for (auto x : m) {

	// 	if (H == 0)
	// 		break;
	// 	if (H > x.second) {
	// 		H -= x.second;
	// 		m.erase(x.first);
	// 	}

	// 	else {
	// 		m[x.first] -= H;
	// 		H = 0;
	// 	}


	// }

	while (H) {
		max--;
		H--;
	}

	return max < m.size() ? max : m.size();
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}
