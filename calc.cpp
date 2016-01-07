#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdint>

using namespace std;

// I know, the code is dirty, but it still works

int calc(void) {
for (uint64_t i=1000000009ULL; i<=9100000000ULL; i+=1ULL) {
	int next = 0;
	uint64_t iOrg = i;
	next:
	if(next!=1) {
	if(i%100000000==0) cout << "at: " << i << endl;
	int isTdn = 1;
	int tdn[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int digit_sum = 0;
	for (int j=9; j>=0; j--) {
		int digit = i % 10;
		i = i / 10;
		tdn[digit] += 1;
		digit_sum += digit;
		if (digit_sum > 10) {
			next = 1;
			goto next;
		}
	}
	if (digit_sum < 10) {
		next = 1;
		goto next;
	}
	i=iOrg;
	for (int j=9; j>=0; j--) {
		int digit = i % 10;
		i = i/10;
		if (tdn[j] != digit) {
			isTdn = 0;
			j=-1;
		}
	}
	if (isTdn == 1) {
		cout << "Ten Digit Seft Descriptive Number: " << iOrg << endl;
		ostringstream iOrg_string;
		iOrg_string.clear();
		iOrg_string << iOrg;
		string save = iOrg_string.str() + '\n';
		ofstream tdn_file;
		tdn_file.open("./tdn", ios_base::app);
		tdn_file << save;
		tdn_file.close();
	}
	}
	i = iOrg;
}
cout << "All valid numbers written to file" << endl;
return 0;
}

int main(void) {
	calc();
	return 0;
}
