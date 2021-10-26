#include <iostream>
#include <string>

using std::logic_error;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::stoi;

auto main(int argc, const char* argv[]) -> int
{
	try
	{
		if (argc <= 1)
		{
			throw logic_error{ "Nie podano zadnego argumentu" };
		}

		int N = stoi(argv[1]);

		if (N < 1)
		{
			throw logic_error{ "Podana liczba musi być większa od 0" };
		}


		for (int i = N; i >= 1; )
		{
			cout << i << " ";
			cout << ((i <= 1) ? "bottle" : "bottles");

			cout << " of beer on the wall, " << i << " ";
			cout << ((i <= 1) ? "bottle" : "bottles");

			cout << " of beer." << endl;
			cout << "Take one down, pass it arround, ";

			if (--i == 0)
			{
				cout << "no more ";
			}
			else 
			{
				cout << i << " ";
			}

			cout << ((i <= 1) ? "bottle" : "bottles");
			
			cout << " of beer on the wall. " << endl;
		}

		cout << "No more bottles of beer on the wall, no more bottles of beer. " << endl;
		cout << "Go to the store and buy some more, " << N << " bottles of beer on the wall..." << endl;

		return 0;
	}
	catch (logic_error ex)
	{
		cerr << ex.what() << endl;
		return 1;
	}
}