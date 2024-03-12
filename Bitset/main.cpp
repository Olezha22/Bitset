#include <iostream>
#include "bitset.h"

int main()
{
    Bitset myBitset;

    myBitset.set(1);
    myBitset.set(3);
    myBitset.set(5);

    std::cout << "Bitset: ";
    myBitset.print();

    std::cout << "Test(1): " << myBitset.test(1) << '\n';
    std::cout << "Test(2): " << myBitset.test(2) << '\n';

    std::cout << "Reset (1) ";
    myBitset.reset(1);
    std::cout << "Bitset: ";
    myBitset.print();
    std::cout << "size: " << myBitset.size() << '\n';
    myBitset.flip();
    std::cout << "Bitset after flip: ";
    myBitset.print();
    myBitset.resetAll();
    std::cout << "Bitset after resetAll: ";
    myBitset.print();


	system("pause");
	return 0;
}