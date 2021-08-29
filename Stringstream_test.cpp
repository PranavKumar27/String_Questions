#include<iostream>
#include<sstream>
#include<vector>
#include<string>

using namespace std;

// String tokenization using stringstream obj

int main(int argc, char *argv[])
{
	string input;
	getline(cin,input);
	
	string token;
	stringstream ss(input);
	
	vector<string> token_list;
	
	// Use getline only when delimiter is other than space.
	/*while(getline(ss,token,' '))
	{
		token_list.push_back(token);
	}*/
	
	// If delimiter is space use right shift on stringstream object for tokenization
	string word;
	
	while(ss>>word)
	{
		token_list.push_back(word);
	}
	
	
	for(auto test:token_list)
	{
		cout << test << "||" ;
	}
	return 0;	
}
