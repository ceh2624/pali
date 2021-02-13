//Palindrome checker: see if a phrase is a palindrome
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int isPali(string);
string deSpace(string);

int main(void)
{
	string phrase;
	cout << "enter a string ->";
	//cin >> phrase;
	getline(cin, phrase);
	cout << "You entered \"" << phrase << "\" which is " << phrase.length() << " characters long.\n";
	if (isPali(phrase) == 1)
		cout << "Yes " << phrase << " is a palindrome.\n";
	else
		cout << "Nope " << phrase << " isn't a palindrome, sorry.\n";
	
	return 0;
}

int isPali(string ph)
{
	string phNew;
	phNew = ph;
	ph = deSpace(ph);
	phNew = deSpace(phNew);
	reverse(phNew.begin(), phNew.end());
	if (phNew == ph)
		return 1;
	else
		return 0;
}

string deSpace(string str)  
{ 
    str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
    return str; 
}
