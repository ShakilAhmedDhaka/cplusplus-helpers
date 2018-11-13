/* 

Function: parse
Input: string s = string to be parsed, string del = delimeter
output: a string vector containing all the tokens 

Sample Input:
a-f-*f a
- *
Sample Output:
a
f
f
a



*/




#include <iostream>
#include <cstdio>

#include <string>
#include <cstring>

#include <vector>

using namespace std;


vector<string> parse(string s, string del){
	char str[s.length()+1];
	strcpy(str,s.c_str());
	char * pch;

	vector<string> parsed;

	pch = strtok (str,&del[0]);
  	while (pch != NULL)
  	{
  		//cout<<pch<<endl;
    	parsed.push_back(string(pch));
    	pch = strtok (NULL, &del[0]);
  	}
	return parsed;
}


void print_output(vector<string> parsed){
	cout<<"number of tokens: "<<parsed.size()<<endl;
	for(int i=0;i<parsed.size();i++){
		cout<<parsed[i]<<endl;
	}

}


int main(){
	string s,del;
	getline(cin,s);
	getline(cin,del);
	vector<string> parsed;
	parsed = parse(s,del);
	print_output(parsed);

	return 0;
}