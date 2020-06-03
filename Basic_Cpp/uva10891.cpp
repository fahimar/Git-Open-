#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

#define MAXLEN 1000

int bet[MAXLEN];

/* return maximum sum of subsequence in sequence arr 
* @param	arr		sequence to search 
* @param	n		size of sequence
*/
int maxSubseqSum(int seq[], int n);

int main()
{
	int n, total;
	ifstream fin("e.in");

	assert(fin);

	while (fin >> n) {
		if (n == 0) break;

		for (int i = 0; i < n; i++)
			fin >> bet[i];

		total = maxSubseqSum(bet, n);
		cout << total << endl;
	}

	return 0;
}

int maxSubseqSum(int seq[], int n)
{
	int sum, maxsum;

	assert(n >= 0);

	maxsum = sum = seq[0];
	for (int i = 1; i < n; i++) {
		if (sum < 0)
			sum = 0;
		sum += seq[i];

		if (maxsum < sum)
			maxsum = sum;
	}

	return maxsum;
}
