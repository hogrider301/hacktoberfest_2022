// C++ program to validate the pin code
#include <bits/stdc++.h>
using namespace std;

// Function to validate the pin code of India.
bool iVPinCode(string pinCode)
{
	
	// Regex to check valid pin code of India.
	const regex pattern("^[1-9]{1}[0-9]{2}\\s{0,1}[0-9]{3}$");

	// If the pin code is empty
	// return false
	if (pinCode.empty())
	{
		return false;
	}

	// Return true if the pin code
	// matched the ReGex
	if (regex_match(pinCode, pattern))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void print(bool n)
{
	if (n == 0)
	{
		cout << "False" << endl;
	}
	else
	{
		cout << "True" << endl;
	}
}

// Driver Code.
int main()
{
	
	// Test Case 1:
	string num1 = "222 456";
	cout << num1 + ": ";
	print(iVPinCode(num1));

	// Test Case 2:
	string num2 = "130520";
	cout << num2 + ": ";
	print(iVPinCode(num2));

	// Test Case 3:
	string num3 = "122675";
	cout << num3 + ": ";
	print(iVPinCode(num3));

	// Test Case 4:
	string num4 = "123432";
	cout << num4 + ": ";
	print(iVPinCode(num4));

	return 0;
}

