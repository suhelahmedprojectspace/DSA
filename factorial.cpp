// C++ implementation of the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to Print factorial using Recursion
void PrintFactorialNums(int n, int fac, int i)
{
	i++;
	if (fac > n) // if fac>n return because
	{
		return;
	} // we have to find in [1,N]

	cout << fac << " "; // print Factors

	// recursive call
	PrintFactorialNums(n, fac * i, i);
}

// Drive Code
int main()
{
	int n = 6;

	// Function call
	PrintFactorialNums(n, 1, 1);

	return 0;
}

// This code is contributed by nikhilsainiofficial546
