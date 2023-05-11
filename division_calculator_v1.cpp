#include <iostream>
#include <cmath>



int main()
{
	int dividend{ 0 };                       //obtaining dividend
	std::cout << "Please enter a dividend: ";//}
	std::cin >> dividend;                    //}



	int divisor{ 0 };                                    //obtaining non-zero divisor
	while (divisor == 0) {                               //}(as dividing by zero is... well, impossible)
		std::cout << "Please enter a non-zero divisor: ";//}
		std::cin >> divisor;                             //}
	}                                                    //}

	int significant_digits{ 0 };                                                                             //obtaining the number of significant digits
	while (significant_digits < 1) {                                                                         //}(to us this means the # of chars (in this case digits of the quotient) the program outputs before closing)
		std::cout << "Please enter the desired number of significant digits\n" <<                            //}the first time it is used this will only act as a baseline that generates too many digits (wich will be truncated befor output to console) 
			"(keep in mind the program cannot run a negative number of times and will not run zero times): ";//}as this is actually more efficient than counting how many digits each calcuulation adds
		std::cin >> significant_digits;                                                                      //}(this is in a loop until we get a number grater than zero so the program does not:
	}                                                                                                        //}repeat infinately, close immedeatly, ect. (avoids undefined behavior))
	///////////////////////////////////////////////////////////////////////please note that due to time constraints the ^^^above^^^ is not quite true and the program just ouputs too many chars as I have not yet added string truncation
	int remainder{ 0 };



	if (dividend < 0 != divisor < 0) {//making sure that the '-' sign only appears before the entire # and not before every digit
	                                  //}(this happens because (practically speaking) every digit gets its own operation)
		std::cout << '-';             //}(if the divisor/dividend is negative we have to say that now)
                                      //}we detect the issue by seeing if the dividend OR(exclusively) the divisor is negative (as -#/-# = +#)
		divisor *= -1;                //}(to fix this we just make everything positive after this point)
                                      //}
	}                                 //}



	std::cout << dividend / divisor << '.';//getting the '>.0' part out of the way :) (by doing the first cycle outside the loop, then adding a '.')
	remainder = dividend % divisor;        //}this also ensures that even with a significant digit of 1 we would at least recieve a good number (technically incorrect)



	for (int count{ 1 }; count < significant_digits && remainder != 0; ++count) {//basically saying: execute the following until we have output the correct # of digits or got a remainder of zero
                                                                                 //}going one whole # division at a time by:
		dividend = remainder * 10;                                               //}making the new dividend the remainder times 10
		std::cout << dividend / divisor;                                         //}dividing the new 'dividend' by our divisor
		remainder = dividend % divisor;                                          //}...and setting the remainder as the new remainder of the previous steps
                                                                                 //}
	}                                                                            //}
}
//Currently this program prints too many digits;
//I am aware of how to solve this issue 
//(truncate the string post-calculation, pre-output and change the for loop from (output to console) to (construct string, then ouput string to console)) but do not have time now.
//for more detail see note at line 22



//this code is a tad bit patchey but for now the alternatives are more spaggheti like; there is no clean way to do this, sometimes code can't not be messey
//the fact that this program will always return everything >.0 is by design in the case that the number of digits is higher than expected the user will notice something is off rather than not having a warning sign
// however I do need to fix the fact that it always prints significant digit -1 digits to the terminal as this is not by design
//if this turns into a ksl::divide fctn and I see a valid reason for overturning the above significant digit decsision than I will ad a bool argument that makes it mathimatically correct 
//ie: ksl::divide(dividend,divisor,1) returns the whole number quotient or a one digit quotient but ksl::divide(dividend,divisor,1,true) returns mathimatically correct division



//this does not yet work with mixed decimal #s; I plan to add this feature



//this file and ones like it have v1 in their names only temporarily for complicated reasons related to trouble renaming/deleting files with a failing SSD