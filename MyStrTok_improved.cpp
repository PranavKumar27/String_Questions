#include<iostream>
#include<cstring>

using namespace std;

// Implement strtok 

char * MyStrTok(char * str, char delimiter)
{
	static char * input=NULL;
	
	if(str!=NULL)
	{
		input=str;
	}
	
	
	if(input==NULL)
	{
		cout << "Returning Null" << endl;
		return NULL;
	}
	int n=strlen(input);
	
	char * temp = new char[n+1];
	
	int i=0;
	for(;input[i]!='\0';i++)
	{
		//cout << "input=" << input <<  " i="  << i << endl;
		//cout << "input[i]=" << input[i] << " i=" << i << endl;
		if(input[i]!=delimiter)
		{
			temp[i]=input[i];
		}
		else
		{
			temp[i]='\0';
			input=input+i+1;
			return temp;
		}
	}
	
	temp[i]='\0';
	
	cout << "temp=" << temp << endl;
	
	input=NULL;
	/*
	cout << "temp=" << temp << endl;
	if(input[i]=='\0')
		{
			cout << "input is set NULL" << endl;
			input=NULL;
			delete [] input;
			cout << "input delete completed" << endl;
		}
	else
		{
			cout << "Input is Not set NULL" << endl;
			input=input+i+1;
		}
	*/
	cout << " After input=" << input << endl;
	
	
	return temp;
	
	
}

int main(int argc, char *argv[])
{
	char str[100];
	cin.getline(str,100);
		
	char *token=MyStrTok(str,' ');
	
	while(token!=NULL)
	{
		cout << "token=" << token << endl;
		token=MyStrTok(NULL,' ');
	}
	
	return 0;
}
