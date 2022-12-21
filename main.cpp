#include "Crypto.h"
#include "Shablon.h"
#include "ToxerSyuner.h"
#include "RLE.h"

int main() {
	string s1 = "XXXvvvvvoo";
	RLE obj1(s1);
	cout << "RLE" << endl;
	cout << "String is: " << s1 << endl;
	cout << "Encrypted string is: " << obj1.deCoder() << endl;
	cout << "Decrypted string is: " << obj1.nCoder() << endl << endl;
	
	string s2 = "karg jeep";
	ToxerSyuner obj2(s2, 3);
	cout << "Toxer/Syuner" << endl;
	cout << "String is: " << s2 << endl;
	cout << "Encrypted string is: " << obj2.deCoder() << endl;
	cout << "Decrypted string is: " << obj2.nCoder() << endl << endl;
  
	string s3 = "hello world";
	Shablon obj3(s3);
	cout << "Shablon" << endl;
	cout << "String is: " << s3 << endl;
	cout << "Encrypted string is: " << obj3.deCoder() << endl;
	cout << "Decrypted string is: " << obj3.nCoder() << endl << endl;
}
