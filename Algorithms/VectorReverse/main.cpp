#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int index = 0; index < n; index++) {
		int tmpNumber;

        cin >> tmpNumber;
		
        arr[(n - 1) - index] = tmpNumber;
    }
	
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i];
		
		if (i != arr.size() - 1) { cout << " "; }
	}
	
    return 0;
}
