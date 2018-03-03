
#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 50;
	char userString[SIZE];
	cout << "Enter a string (up to 50 characters):\n" << endl;
	cin.getline(userString, SIZE);
  countWords(userString, (int) SIZE);
  return 0;
}
void countWords(char *strPtr, int SIZE)
{
int count1;
for (int count = 0; count < 50; count++)
	{
		if(*(strPtr + count) == *(strPtr + count + count1))
		{
			count1++;
		}
		else
		{
			count++;
		}

	}
  cout << "The mode is: " << *strPtr + count1 << endl;
}
