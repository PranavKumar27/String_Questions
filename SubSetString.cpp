#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Find all possible subsets from a string 
// abc
// a, b, c, ab, bc, ca, abc

void generateSubSetStr(string input,string output,vector<string>& vs)
{
	if(input.size()==0)
	{
		vs.push_back(output);
		return ;
	}
	else
	{
		//vs.push_back(output);
	}
	char first=input[0];
	string reducedStr=input.substr(1);
	
	// Add the new char
	generateSubSetStr(reducedStr,output+first,vs);
	//vs.push_back(output+first);
	//cout << "first=" << first << " output=" << output+first	<<  endl;
	
	// Don't add new char
	generateSubSetStr(reducedStr,output,vs);
	//vs.push_back(output);
	//cout << "ouput=" << output << endl;
	return;
}

int compare(string s1,string s2)
{
	if(s1.size()==s2.size())
		return s1<s2;
		
	else
		return s1.size()<s2.size();
}
int main(int argc, char *argv[])
{
		vector<string> vs;
		string inpt="abc";
		string opt="";
		
		generateSubSetStr(inpt,opt,vs);
		
		
		sort(vs.begin(),vs.end(),compare);
		
		for(auto str:vs)
		{
			cout << str << ", ";
		}
		cout << endl;
		return 0;
		
}
