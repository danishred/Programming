// Recursive program to check for palindrome

#include <iostream>
#include <cstring>
using namespace std;

// Mine
bool recChkPalin(char str[], int n, int k)
{
    if (n <= k)
        return true;
    if (str[n] == str[k])
        return recChkPalin(str, n - 1, k + 1);
    else
        return false;
    return 1;
}
// Time Complexity: O(n) ( Θ(n) in the worst case)  
// Auxiliary Space: O(n) ( Θ(n) in the worst case)      


int main()
{
    int n, k = 0;
    char str[100];
    cin >> str;
    n = strlen(str);
    cout << recChkPalin(str, n - 1, k) << endl;
    return 0;
}

// Sir's
// #include <iostream>
// using namespace std;


// bool isPalindrome(string str, int start, int end)
// {
// 	if(start >= end)
// 		return true;

// 	return ((str[start]==str[end]) && 
// 		     isPalindrome(str, start + 1, end - 1));
// }

// int main() {
	
// 	string s = "GeekskeeG";
	
// 		printf("%s", isPalindrome(s, 0, s.length() -1) ? "true" : "false");
	
// 	return 0;
// }