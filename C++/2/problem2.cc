#include <iostream>


//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.


int main(){
		int k = 1;
		int kPlusOne = 2;
		int sum = 0;
		while(k< 4000000){
				if(k%2 == 0){
						sum += k;
				}
				int temp = k + kPlusOne;
				k = kPlusOne;
				kPlusOne = temp;
		}
		std::cout << "The sum is: " << sum << std::endl;
		return sum;

}
