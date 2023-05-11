#include <iostream>
#include <bitset>



int main() //prints an ascii table
{
	for (unsigned short count{ 32 }; count < 127; ++count) {



		std::cout << std::bitset<8>{count} << '\t' << count << '\t' << static_cast<char>(count) << '\n';



	}
}

//this file and ones like it have v1 in their names only temporarily for complicated reasons related to trouble renaming/deleting files with a failing SSD

////////////////////////////////////////////////////////////////////////////////
//a wild commit test comment has appeared!                                   ///
//                                                                           ///
//-> use commit [type: git bash] *effective*                                 ///
//__ use copy [type: file explorererer] *not very effective*                 ///
//__ use disable compiler warnings [type: visual studio] *not very effective*///
//__ use yell [type: emotional] *no effect*                                  ///
////////////////////////////////////////////////////////////////////////////////