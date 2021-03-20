// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

// Function to find the smallest number
// greater than or equal to n represented 
// as the sum of distinct powers of k
void greaterK(ll n, ll k)
{

	// Vector P to store the base k
	// representation of the number
	vector<ll> p;
	ll x = n;
	while (x) {
		p.pb(x % k);
		x /= k;
	}
	int idx = 0;
	for (ll i = 0; i < (ll)p.size() - 1; ++i) {
		if (p[i] >= 2) {

			// If the representation is >=2, then
			// this power of k has to be added
			// once again and then increase the
			// next power of k and make the
			// current power 0

			p[i] = 0;
			p[i + 1]++;

			// Reduce all the lower power of
			// k to 0

			for (int j = idx; j < i; ++j) {
				p[j] = 0;
			}
			idx = i + 1;
		}

		if (p[i] == k) {
			p[i] = 0;
			p[i + 1]++;
		}
	}
	ll j = (ll)p.size() - 1;

	// Check if the most significant
	// bit also satisfy the above
	// conditions

	if (p[j] >= 2) {
		for (auto& i : p)
			i = 0;
		p.pb(1);
	}
	ll ans = 0;

	// Converting back from the
	// k-nary representation to
	// decimal form.
	for (ll i = p.size() - 1; i >= 0; --i) {
		ans = ans * k + p[i];
	}
	cout << ans << endl;
}

int main()
{
	ll n = 29, k = 7;
	greaterK(n, k);
	return 0;
}
