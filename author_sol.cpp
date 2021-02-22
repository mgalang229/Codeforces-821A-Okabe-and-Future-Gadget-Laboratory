#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin >> a[i][j];
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			//skip the loop if it a[i][j]=1
			if(a[i][j]==1)
				continue;
			bool ok=0;
			for(int r=0; r<n; ++r) {
				//skip the row index of the current element
				if(r==i)
					continue;
				for(int c=0; c<n; ++c) {
					// skip the col index of the current element
					if(c==j)
						continue;
					//check if the sum of a number in the same
					// column and a number in the same row
					// is equal to the current element
					if(a[r][j]+a[i][c]==a[i][j]) {
						ok=1;
						break;
					}
				}
				if(ok)
					break;
			}
			if(!ok) {
				cout << "No\n";
				return 0;
			}
		}
	}
	cout << "Yes\n";
}
