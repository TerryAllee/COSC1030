//
// Name: Terry Allee
// Date: April 20, 2025
// Pig Latin Programming Project
// COSC 1030
//

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

//This function checks if a character is punctuation (like , ? . !)
bool isPunctuation(char ch) {
    return ispunct(static_cast<unsigned char>(ch));
}

//This function converts a single word to Pig Latin
string toPigLatin(const string& word) {
    // If word is just one letter like "I" just add "AY" to it
    if (word.length() <= 1) {
        return word + "ay";
    } else {
        //Move the first letter to the end and add "AY"
        string pig = word.substr(1) + word[0] + "ay";

        //Make the entire word lowercase first
        for (char& c : pig) {
            c = tolower(c);
        }
        
        // If the orignal word was capitalized, then capitalize the new first letter
        if (isupper(word[0])) {
            pig[0] = toupper(pig[0]);
        }

        return pig;

        }
    }


int main() {
    string sentence;

    //Ask user to type in a sentence
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    string pigLatinSentence = "";

    // Go through each word in the sentence
    while (ss >> word) {
        string coreWord = "";
        char punctuation = '\0';

    //Check if the last character is punctuation
    if (isPunctuation(word.back())) {
        punctuation = word.back();
        coreWord = word.substr(0, word.length() - 1); //removes the punctuation
    } else {
        coreWord = word;
    }

    //convert to uppercase
    for (char& c : coreWord) {
        c = toupper(c);
    }

    //Convert the word Pig Latin
    string pigLatinWord = toPigLatin(coreWord);

    // Add the punctuation back if it was there
    if (punctuation != '\0') {
        pigLatinWord += punctuation;
    }

    // Add the converted word to our final sentence
    pigLatinSentence += pigLatinWord + " ";

}


    //Clean up and remove any trailing space at the end
    if (!pigLatinSentence.empty()) {
        pigLatinSentence.pop_back();

    }

    //Show the result
    cout << "Pig Latin: " << pigLatinSentence << endl;

    
    return 0;
}