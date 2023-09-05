//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
	vector<string> ans;
	unordered_map<int, string> mp;
	Solution()
	{
		mp[2] = "abc";
		mp[3] = "def";
		mp[4] = "ghi";
		mp[5] = "jkl";
		mp[6] = "mno";
		mp[7] = "pqrs";
		mp[8] = "tuv";
		mp[9] = "wxyz";
	}


	void fun(string s, int a[], int N, int index)
	{
		if (index == N)
		{
			ans.push_back(s);
		}
		string tmp = mp[a[index]];

		for (int j = 0; j < tmp.length(); j++)
		{
			fun(s + tmp[j], a, N, index + 1);
		}
		return ;
	}

	// Function to find list of all words possible by pressing given numbers.
	vector<string> possibleWords(int a[], int N)
	{
		// Your code here
		string s = "";
		fun(s, a, N, 0);
		return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	cout << "Enter number of keypress: " << endl;
	int N;

	cin >> N; // input size of array

	int a[N]; // declare the array

	cout << "Enter keys being pressed: " << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i]; // input the elements of array that are keys to be pressed
	}

	Solution obj;

	vector<string> res = obj.possibleWords(a, N);
	for (string i : res)
		cout << i << " ";
	cout << endl;

	return 0;
}