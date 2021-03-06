// Liapunov Exponent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Formatting.h"

int main()
{
	int n = 4;
	bool out = false;  

	double d = pow(10,-10);
	double mt = 2000.0;
	bool xy = Y;
	int IndNum = RLI;		//Choices: LE, CLE, FLI, RLI, EUL

	Formatting f(n, mt, d, xy, out);
	//f.uniformField(IndNum);

	//ofstream out("_FLI.txt");
	//f.checkbounds(out);
	
	Vec_DP y(4);
	y[0] = 90 * c; y[1] = 180 * c; y[2] = 0.359226837; y[3] = -0.135753237;   // Demo 23
	//y[0] = 0 * c; y[1] = 0 * c; y[2] = 0.26376138; y[3] = 0.041348036;   // Demo 11
	//callIntegrate(y, 200, true, pow(10, -10), 0);
	EulerIntegrate(y, 200, true, pow(10, -10), 0);
	//callIntegrate(getIC(-0.010000000615014493, 0.176893868, Y), 1000, true, pow(10, -5));
	//renormalize(y, 1000, true, pow(10,-5),10);
	//cout << renormalize(y, 1000, true, pow(10, -5), 100);
	//cout << setprecision(17) << E(y);
	return 0;
}
