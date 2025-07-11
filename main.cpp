/*** Project A Problem 7.6, Chapter 7
*--------------------------------------------- ***** 
Modify Programming Project 7.20.3 so that you first print the lines in the order that they were entered, then print them in sorted order. 
***** When you sort the lines, only rearrange the pointers in the lines array. Write a program that reads lines of text and appends them to a char buffer[1000]. */

// Programmer: Heily Cabrera // Tester: Ashley Jacobson

#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()

char buffer[1000];
char ch; 
char* lines[1000] = {0};
char former;
int lineCounter = 1;

streambuf *cinbuffer = cin.rdbuf();
ifstream file ("prideandprejudice.txt");
if (!file)
{
    cerr << "couldn't open file" << endl;
    return 1;
}
cin.rdbuf(file.rdbuf());

int count = 0;
while (cin.get(ch) && count < sizeof(buffer) - 1)
{
    if (ch == '\n' )
    {
      buffer[count++] = '\0';
    }
    else
    {
        buffer[count] = ch;
    }
    buffer[count] = '\0';
}

lines[0] = buffer;

for (int i = 0, i < count, i++)
    {
    if (buffer[i] == '\0' && i = 1 < count)
    {
    lines[lineCounter++] = &buffer[i + 1];
    }
    }

cout << "Original Order:\n";
    for (int i = 0, i < lineCounter, i++)
    {
    if (lines[i])
    {
    cout << lines[i] << endl;
    }
    }

    sort(lines, lines + lineCounter, [](const char* a, const char* b)
    {
        return strcmp(a, b) < 0;
    });

    cout << "\nSorted Order:\n";
    for (int i = 0; i < lineCounter; ++i) {
        if (lines[i]) {
            cout << lines[i] << endl;
        }
    }

cin.rdbuf(cinBuffer);

return 0;

}





