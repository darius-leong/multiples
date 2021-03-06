#include <iostream>
#include <string>

// variable declarations

std::string word;
int consonantNum;

// function declarations

void close();
int otherClose();
void length();
void vowelCount();
void consonantCount();
void concatenate();
void camelCaseChecker();
void wordInput();
void wordCheck();

// universal close function

void close () {
    std::cout << "Press enter to go back to the main menu of the program.\n";

    std::cin.ignore();
    std::cin.get();

    system("clear");
    system("./menu.out");
}

void length() {
    std::cout << "Word Length: " << word.size() + 1;
}

// finds the number of vowels in the string
// the same algorithm is used in consonantCount()

void vowelCount() {

    std::cout << "\n\n";

    // variable declarations

    int vowelNum = 0;
    int aNum = 0;
    int eNum = 0;
    int iNum = 0;
    int oNum = 0;
    int uNum = 0;

    const char vowel1 = 'a';
    const char vowel2 = 'e';
    const char vowel3 = 'i';
    const char vowel4 = 'o';
    const char vowel5 = 'u';

    // iterates through the word characters and checks each vowel

    for (int i = 0; i < word.size(); i++) {
        if (word[i] == vowel1) {
            std::cout << "Found an 'a'\n";
            vowelNum++;
            aNum++;
        } else if (word[i] == vowel2) {
            std::cout << "Found an 'e'\n";
            vowelNum++; 
            eNum++;
        } else if (word[i] == vowel3) {
            std::cout << "Found an 'i'\n";
            vowelNum++;
            iNum++;
        } else if (word[i] == vowel4) {
            std::cout << "Found an 'o'\n";
            vowelNum++;
            oNum++;
        } else if (word[i] == vowel5) {
            std::cout << "Found a 'u'\n";
            vowelNum++;
            uNum++;
        }
    }

    if (vowelNum == 0) {
        std::cout << "There are" << vowelNum << "vowels in your word.\n";
    } else {
        std::cout << "There are " << vowelNum << " vowels in your word, " << aNum << " a's in your word, " << eNum << " e's in your word. " << iNum << " i's in your word, " << oNum << " o's in your word, and " << uNum << " u's in your word.\n";
    }

    close();
}

void consonantCount() {

    // variable declarations

    int consonantNum = 0;

    const char consonant1 = 'b'; 
    const char consonant2 = 'c';
    const char consonant3 = 'd';
    const char consonant4 = 'f';
    const char consonant5 = 'g';
    const char consonant6 = 'h';
    const char consonant7 = 'j';
    const char consonant8 = 'k';
    const char consonant9 = 'l';
    const char consonant10 = 'm';
    const char consonant11 = 'n';
    const char consonant12 = 'p';
    const char consonant13 = 'q';
    const char consonant14 = 'r';
    const char consonant15 = 's';
    const char consonant16 = 't';
    const char consonant17 = 'v';
    const char consonant18 = 'w';
    const char consonant19 = 'x';
    const char consonant20 = 'y';
    const char consonant21 = 'z';

    // checks all the consonants 

    for (int i = 0; i <= word.size(); i++) {

        // apparently switch statements dont work with char variables..?

        if (word[i] == consonant1) {
            std::cout << "Found a 'b'\n";
            consonantNum++;
        } else if (word[i] == consonant2) {
            std::cout << "Found a 'c'\n";
            consonantNum++;
        } else if (word[i] == consonant3) {
            std::cout << "Found a 'd'\n";
            consonantNum++;
        } else if (word[i] == consonant4) {
            std::cout << "Found an 'f'\n";
            consonantNum++;
        } else if (word[i] == consonant5) {
            std::cout << "Found a 'g'\n";
            consonantNum++;
        } else if (word[i] == consonant6) {
            std::cout << "Found a 'h'\n";
            consonantNum++;
        } else if (word[i] == consonant7) {
            std::cout << "Found a 'j'\n";
            consonantNum++;
        } else if (word[i] == consonant8) {
            std::cout << "Found a 'k'\n";
            consonantNum++;
        } else if (word[i] == consonant9) {
            std::cout << "Found an 'l'\n";
            consonantNum++;
        } else if (word[i] == consonant10) {
            std::cout << "Found an 'm'\n";
            consonantNum++;
        } else if (word[i] == consonant11) {
            std::cout << "Found an 'n'\n";
            consonantNum++;
        } else if (word[i] == consonant12) {
            std::cout << "Found a 'p'\n";
            consonantNum++;
        } else if (word[i] == consonant13) {
            std::cout << "Found a 'q'\n";
            consonantNum++;
        } else if (word[i] == consonant14) {
            std::cout << "Found an 'r'\n";
            consonantNum++;
        } else if (word[i] == consonant15) {
            std::cout << "Found an 's'\n";
            consonantNum++;
        } else if (word[i] == consonant16) {
            std::cout << "Found a 't'\n";
            consonantNum++;
        } else if (word[i] == consonant17) {
            std::cout << "Found a 'v'\n";
            consonantNum++;
        } else if (word[i] == consonant18) {
            std::cout << "Found a 'w'\n";
            consonantNum++;
        } else if (word[i] == consonant19) {
            std::cout << "Found an 'x'\n";
            consonantNum++;
        } else if (word[i] == consonant20) {
            std::cout << "Found a 'y'\n";
            consonantNum++;
        } else if (word[i] == consonant21) {
            std::cout << "Found a 'z'\n";
            consonantNum++;
        }

    }

    std::cout << "There are " << consonantNum << " consonants in your word.\n";

    close();
}

void concatenate() {

    // variable declarations

    std::string words[102] = {word};
    int wordnum;

    std::cout << "How many words would you like to add onto '" << word << "'? (max is 100)\n";
    std::cin >> wordnum;

    std::string sentence = word + ' ';
    system("clear");
    for (int i = 1; i <= wordnum; i++) {
        std::cout << "Enter a word you would like to add on:\n";
        std::cin >> words[i];

        sentence += words[i];
        sentence += ' ';
        system("clear");
    }
    std::cout << "Your sentence is: '" << sentence << "'\n";
    close();
}

void camelCaseChecker() {
    int UppercaseLetters = 0; 
    int LowercaseLetters = 0;

    bool isCamelCase;

    for (int i; i < word.size(); i++) {
        if (word[i] == word[0]) {
            continue;
        } else {
            if (isupper(word[i]) == true) {
                UppercaseLetters++;
            } else {
                LowercaseLetters++;
            }
        }
    }

    if (isupper(word[0]) == false && LowercaseLetters > UppercaseLetters && UppercaseLetters >= 2) {
        isCamelCase = true;
    } else {
        isCamelCase = false;
    }

    if (isCamelCase == true) {
        std::cout << "Your word is camelCase!\n";
        std::cin.ignore();
        std::cin.get();
        system("clear");
        otherClose();
    } else {
        std::cout << "Your word is not camelCase.\n";
        std::cin.ignore();
        std::cin.get();
        system("clear");
        otherClose();
    }
}

void wordInput() {
    std::cout << "Enter your word here:\n";
    std::cin >> word;
    wordCheck();
}

void wordCheck() {
    std::string input;

    std::cout << "\n\nDo you want to find the length, the amount of vowels, the amount of consonants in your word, concatenate the inputted word with another word, or whether your word is camelCase?\n";
    std::cout << "length, vowels, consonants, concatenate, camelcase\n";
    std::cin >> input;

    if (input == "length") {
        system("clear");
        length();
    } else if (input == "consonants") {
        system("clear");
        consonantCount();
    } else if (input == "vowels") {
        system("clear");
        vowelCount();
    } else if (input == "concatenate") {
        system("clear");
        concatenate();
    } else if (input == "camelcase") {
        system("clear");
        camelCaseChecker();
    } else {
        system("clear");
        std::cout << "Not an input.\n\n";
        std::cin.ignore();
        std::cin.get();
        system("clear");
        wordCheck();
    }
}

int main() {
    wordInput();
}
