#include <iostream>
#include <cmath>

int main() {
    // 2**10 = 1024 1k
    // 2**20 = 1024*1024 1M
    // 2**30 = 1024**3 = 1G

    // 1 bit = 2   2 bits = 4
    // 3 bits = 8  6 bits = 64
    int32_t b = 0; // -2100000000 ... +2100000000
	uint32_t a = 0; // 4200000000U
	uint64_t c = 123456789012345678ULL;

// IEE754
	float f = 1.2345678f; // 32 bits
	f = 12.345678f;
	f = 12345678.f;
	f = .000000012345678;
	f = 1.23e+23;
	f = 6.023e-23;
	double pi = 3.14159265358979;
	double d = 1.23456789012345; // 64 bits
	d = 123456789012345E+308;
	d = -123456789012345E+308;
	d = 123456789012345E-308;
	long double x; // ???

	//__float128 ...
	std::cout << "FLOAT128 WOOP WOOP";
}