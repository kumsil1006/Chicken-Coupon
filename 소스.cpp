
#include <iostream>
using namespace std;
int S = 0;
int calc(int n, int k) {
	S += n / k;
	int r = n % k;
	if ((n / k)+r < k) return n / k; 
	else return calc(n / k + r, k);
}
int main()
{
	int n, k;
	while (cin >> n >> k) {
		//int n, k;
		//cin >> n >> k;
		
		S = 0;
		calc(n, k);
		int result = S + n;
		cout << result << endl;
	}

}