/*
**2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
**What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


#include <iostream>
using namespace std;

bool isTrue(int num);

int main() 
{
	int num = 19*20;
	bool done = false;

	while (done != true)
	{
		done = isTrue(num);
		if (done != true)
		{
			num+= (19*20);
		}
	}

	cout << num << endl;

	system("pause");
	return 0;
}

bool isTrue(int num)
{
	bool keepGoing = true;

	for (int i = 1; i <= 20; i++)
	{
		if (num%i != 0) 
		{	
			//cout << num << " % " << i << " = " << num % i << endl;
			keepGoing = false;
		}
		
		if (keepGoing == false)
		{
			break;
		}
	}

	return keepGoing;
}