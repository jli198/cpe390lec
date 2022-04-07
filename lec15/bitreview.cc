#include <iostream>
using namespace std;
int main() {
	int a = 2;
	int b = 3;
	int c = a << b; // 00000000000000000000000000010000 = 16
	// lsl  w0,w1
	// lsl w0, #3

	uint64_t d = 0xFEEDF001U >> 2; // 11111110111011011111000000000001
	// 00111111101110110111110000000000

	int64_t d2 = 0xFEEDF001 >> 2; // 11111110111011011111000000000001
	// 11111111101110110111110000000000

	int32_t e = 7 >> 1; // 000000000000000000111  7/2 = 3
	                    // 000000000000000000011
	int32_t e2= -7 >> 1; //  111111111111111111111111001
	                     //  000000000000000000000000011
	                     //                            1
	                     //  000000000000000000000000100
	cout << e2 << '\n';
  // asr x0, #1

	
	

	//2s-complement arithmetic
	int8_t e3 = 0b10010011;
	//           01101100 // first invert every bit
	//            63
	//            42 84 1	
	//    +1     01101101   64+45 = -109
	//   1000 >> 1 --> divide by 2
	// 11111111
	// 110101001010101010101


}