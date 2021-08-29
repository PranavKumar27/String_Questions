#include<iostream>
#include<cstring>


using namespace std;

int main(int argc, char *argv[])
{
	char str[]="This is a Bright and Sunny Day!!";
	
	char *token=strtok(str," ");
	
	while(token!=NULL)
	{
		cout << token << endl;
		token=strtok(NULL," ");	
		//cout << token << endl;
		// Can't print at end because if Null it gives Segmentation fault
		
	}	
}
