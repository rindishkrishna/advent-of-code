#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
  fstream newfile;
  newfile.open ("input.txt");
  string text;
  int curtext = 0;
  int maxtext = 0;
  while (getline (newfile, text))
    {
      if (text == ""){
        maxtext = max (curtext, maxtext);
	    curtext = 0;
	  }
      else{
	    curtext += stoi (text);
	  }
    }
    cout << maxtext;
}
