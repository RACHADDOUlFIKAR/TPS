// exemple de template type en orienté objet
#include <iostream>
template<class r>
r avg(r a, r b) {
	r res = (a + b)/2;
	return res;
}
int main()
{
	std::cout << avg(12, 12) << std::endl;
	std::cout << avg(12.00, 12.50);
	//on a geré le changement de type par la notion template

}

