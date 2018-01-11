#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
	int N=10;
	int i;
	float x;
	float suma;
	float srednia;
	int a;
	srand( time(NULL));
	while (N<=10000)
	{
		suma=0;
		for (i=0; i<N; i++)
		{
			x=rand()/(float)RAND_MAX;
			suma+=x;

		}

	srednia=(suma/N);
	cout<<N<<" "<<srednia<<endl;
	N++;
	}
}
