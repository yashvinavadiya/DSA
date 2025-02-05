#include <iostream>
#include <cctype> // For isupper(), islower(), toupper(), tolower()

using namespace std;

void toggleFirstLetterCase(string &str) {
    bool newWord = true;  // To check if we are at the start of a new word
    
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {  // Only check alphabetic characters
            if (newWord) {  // If it's the first letter of the word
                if (isupper(str[i])) {
                    str[i] = tolower(str[i]);  // Convert to lowercase
                } else if (islower(str[i])) {
                    str[i] = toupper(str[i]);  // Convert to uppercase
                }
                newWord = false;  // Mark that the word has started
            }
        } else {
            newWord = true;  // Non-alphabet character means new word starts
        }
    }
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);  // Read the sentence including spaces
    
    toggleFirstLetterCase(sentence);
    
    cout << "Modified sentence: " << sentence << endl;
    
    return 0;
}

