#include<iostream>
#include<cstring>
using namespace std;

/*Letter Frequency*/

//global variable
int *count;

//function
void letterFrequency(string str)
{
	//array with 26 integers
	count = new int[26] {0};
	int x;
	
	//loop to count characters
	for (int i=0; i<str.length(); i++)
	{
		x = toupper(str[i])-65; //toupper() is used to convert character to Uppercase //A is 65 in ASCII
		*(count+x) = *(count+x) + 1 ;
	}
}

int main()
{
	string str;
	
	//get use input
	cout << "Enter String: ";
	getline(cin, str) ;
	
	//function call
	letterFrequency(str);
	
	//loop display occuring characters 
	for (int i=0; i<26; i++)
	{
		if (count[i] > 0)
		{
			cout << char(i+65) << ": " << count[i] << endl;
		}
	}
	delete []count;
}
