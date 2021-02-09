// reading a text file the most simple and straight forward way
#include <iostream>
#include <fstream>
#include <string>
#include <curses.h>

using namespace std;

int main () {
int a[100],i=0,x;
  ifstream myfile ("example.txt");
  if (myfile.is_open())  // if the file is found and can be opened
  {
    while ( !myfile.eof() ) //read if it is NOT the end of the file
    {

      myfile>>a[i++];// read the numbers from the text file...... it will automatically take care of the spaces :-)

    }
    myfile.close(); // close the stream
  }

  else cout << "Unable to open file";  // if the file can't be opened
  // display the contents
  int j=0;
  for(j=0;j<i;j++)
   {//enter code here
    cout<<a[j]<<" ";                 

 }
//getch();
  return 0;
}
