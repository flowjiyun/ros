#include <iostream>
#include <cstdlib>
#include "mysqrt.h"
#include "mysquare.h"

using namespace std;
int	main(int argc, char **argv)
{
	cout << argv[1] << "sqrt is" << mysqrt(static_cast<double>(atof(argv[1]))) << '\n';
	cout << argv[1] << "square is" << mysquare(static_cast<double>(atof(argv[1]))) << '\n';
	return (0);
}