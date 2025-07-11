/*** Project A Problem 7.6, Chapter 7
*--------------------------------------------- ***** 
Modify Programming Project 7.20.3 so that you first print the lines in the order that they were entered, then print them in sorted order. 
***** When you sort the lines, only rearrange the pointers in the lines array. Write a program that reads lines of text and appends them to a char buffer[1000]. */

// Programmer: Heily Cabrera // Tester: Ashley Jacobson

#include <iostream>
#include <stream>
using namespace std;

int main()

char buffer[1000];
char ch; 
char* lines[1000] = {};
char former;
int lineCounter = 0;

streambuf *cinbuffer = cin.rdbuf();
ifstream file ("prideandprejudice.txt");
cin.rdbuf(file.rdbuf());

int count = 0;
while (cin.get(ch) || count < 1000)
{
    buffer[count] = ch;
    if (buffer[count] == '/n' )
    {
      buffer[count] = '/0';
    }
    count++;
}

int charTracker = 0;
int counter2 = 0;

for (int i = 0, i < count, i++)
{
  if (previous == '/0')
  {
  lines[lineCounter2] = &buffer[count - charTracker];
  charTracker 0;
  lineCounter++;
  }
  previous = buffer[i];
  counter2++;
  charTracker++;
}

for (int j = lineCounter; j >= 0; j--)
{ 
  if(lines[j])
  {
    cout << lines[j];
  }
  cout << endl;
}
cin.rdbuf(cinBuffer);

return 0;

}





