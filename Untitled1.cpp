#include<bits/stdc++.h>
using namespace std;



double root(double x)
{
	return x*x*x - 2*x - 5;


}

void bisec(double a, double b)
{


	double z = a;
	int i=5;

	for(i=1; i<=5; i++){
		z = (a+b)/2;

		if (root(z) == 0)
			break;

		else if (root(z)>0)
			b = z;
		else
			a = z;


	   cout << "The value of root is : " << z<<endl;
	}

}
int main()
{

	double a,b;
	cin>>a>>b;
	bisec(a, b);
	return 0;
}


