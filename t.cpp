#include <iostream>
using namespace std;

int main()
{
	int numbers[5]; 
	int cnt=0; 
	int N =5;
	for(int i=0; i<N; i++)
	{
		cin >> numbers[i];
	}

	for(int i=0; i<N-1; i++)
	{
		if (numbers[i] < numbers[i+1])
		{
			cnt++;
		}
	}
	printf("\nTotal %d pairs\n", cnt);

}