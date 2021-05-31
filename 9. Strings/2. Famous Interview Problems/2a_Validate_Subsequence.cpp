#include<bits/stdc++.h>
using namespace std;

/*
Subsequence :
	a subsequence is a sequence that can be derived from another sequence 
	by deleting some or no elements without changing the order of the remaining 
	elements.

	eg :s1="ABCDE"
		s2="ACE"

		ss is a subsequence of s
*/

//iterative solution
bool isSubsequence(string s1,string s2)//time comp. O(m+n) ; space comp. O(1)
{
	int m=s1.length();
	int n=s2.length();

	int i=0,j=0;

	while(i<m and j<n)
	{
		if(s1[i]==s2[j])
		{
			j++;
		}
		i++;
	}

	return (j==n);
}

int main()
{
	string s1="parth";
	string s2="path";

	cout<<isSubsequence(s1,s2);
	return 0;
}