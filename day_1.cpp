//============================================================================
// Name        : NAME NAME NAME NAME NAME NAME NAME
// Author      : Moh_ALjebori
// Version     :version 1.0
// Copyright   : this program is copyright protected
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;

bool fx(float r){
	if (r>7)
	  return true;
	else
		return false;
}

int main() {
	string x;
	bool y;
	int ints[]={10,12,13,14,11,20};
	x="Hello Friends";
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	y=fx(8.5);
	if(y)
		x="true";
	else
		x="false";

	cout<<x<<endl;
	for(int i=0;i<=10;i++){
		cout<<"I ="<<i<<endl;
	}
    int  *foo = std::find(ints, end, 20);
	{
	    cout<<"true";
	} else {
		cout<<"false";
	}
	return 0;
}
