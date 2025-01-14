#ifndef CMAKEPROJECT_STRINGHELPER_H
#define CMAKEPROJECT_STRINGHELPER_H

#include <string>
#include <vector>
#include <algorithm>

#include "StdVectorHelper.h"

using namespace std;

class StringHelper {

private:
    // Hide the constructor
    StringHelper() = default;

    inline const static double average_word_length = 5.28, average_sentence_length = 10.38;

    // List of conjunctions in russian language
    inline const static vector<string> conjunctions = {
            "�", "���������", "�����", "�����", "��������", "��", "����", "����", "��", "����", "�����", "����", "�����", "����", "�����", "�", "���", "���", "����", "���", "�����", "����", "����", "��", "����", "������", "��������", "��������", "��", "������", "������", "������", "����", "��������", "������", "���������", "������", "������", "������", "������", "������", "�����", "���", "������", "�����", "����", "������", "�����", "����", "���", "���", "����", "�����"
    };

    // List of prepositions in russian language
    inline const static vector<string> prepositions = {
            "���", "����", "�", "������", "���", "���", "��", "��", "��", "��-��", "��-���", "�", "�����", "�����", "���", "��", "��", "����", "��", "���", "����", "�", "��", "���", "��", "���", "�����", "������", "����", "�����", "��", "���", "����", "���", "���", "����", "�", "��", "������", "�����", "�", "�����",
    };

    // List of popular letter combinations in russian language
    inline const static vector<string> popular_combinations = {
            "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "���", "���", "���", "���", "���", "���"
    };

    // List of vowel letters in russian language
    inline const static vector<char> vowel_letters = {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};

    // List of consonant letters in russian language
    inline const static vector<char> consonant_letters = {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};

    // List of rare consonants
    inline const static vector<char> rare_consonants = {'�', '�', '�', '�', '�', '�', '�'};

    // List of rare letters
    inline const static vector<char> rare_letters = {'�', '�', '�', '�'};

    // List of voiceless consonants
    inline const static vector<char> voiceless_consonants = {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};

    // List of voices consonants
    inline const static vector<char> voiced_consonants = {'�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�'};

    // List of adjective endings
    inline const static vector<string> adjective_ends = {
            "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "���", "���", "���", "���"
    };

    // List of punctuation marks
    inline const static vector<char> punctuation_marks = {',', '-', ':', ';'};

    // List of softening letters
    inline const static vector<char> softeners = {'�', '�', '�', '�', '�', '�'};

    // List of soft letters
    inline const static vector<char> soft_letters = {'�', '�', '�'};

    // List of hard letters
    inline const static  vector<char> hard_letters = {'�', '�', '�'};

    // List of pronouns
    inline const static vector<string> pronouns = {
            "�", "��", "��", "���", "���", "��", "��", "���", "����", "����", "���", "��", "���", "���", "��", "���", "����", "���", "��", "���", "���", "��", "����", "����", "���", "��", "���", "���", "��", "����", "����", "�����", "�����", "��", "��", "��", "����", "����", "���", "���", "���", "����", "���", "���", "���", "���", "���", "����", "����", "����", "�����", "���", "����", "���", "���", "����", "���", "����", "����", "����", "����", "���", "����", "����", "����", "����", "���", "����", "����", "����", "����", "�����", "������", "������", "������", "������", "����", "�����", "�����", "�����", "�����", "����", "�����", "�����", "�����", "�����", "�����", "������", "������", "������", "������", "����", "�����", "�����", "�����", "�����", "���", "����", "����", "����", "����", "�����", "������", "������", "������", "������", "����", "�����", "�����", "�����", "�����"
    };

public:

    // Char to lower case
    static char to_lower(char c);

    // String to lower case
    static string to_lower(const string &str);

    // Parse string into sentences
    static vector<string> parse_into_sentences(const string &str);

    // Parse string into words
    static vector<string> parse_into_words(const string &str);

    // Parse sentences into words
    static vector<vector<string>> parse_into_sentences_with_words(const vector<string> &sentences);

    // Check if the word is conjunction
    static bool is_conjunction(const string &word);

    // Check if the word is preposition
    static bool is_prepositions(const string &word);

    // Check if the word is popular letter combination
    static bool is_popular_combination(const string &word);

    // Check if a letter is a vowel
    static bool is_vowel(char c);

    // Check if a letter is consonant
    static bool is_consonant(char c);

    // Check if is letter
    static bool is_letter(char c);

    // Check if is a rare consonant
    static bool is_rare_consonant(char c);

    // Check if is a rare letter
    static bool is_rare_letter(char c);

    // Check if a string consists of only vowel letters
    static bool only_vowels(const string &str);

    // Check if a string consists of only consonant letters
    static bool only_consonants(const string &str);

    // Count letters in a string
    static int count_letters(const string &str);

    // Check if is voiceless
    static bool is_voiceless(char c);

    // Check if is voiced
    static bool is_voiced(char c);

    //Check if is adjective
    static bool is_adjective(const string &s);

    //Check if is punctuation mark
    static bool is_punctuation_mark(char c);

    // Check if is pronoun
    static bool is_pronoun(const string &word);

    // Check if hard letter
    static bool is_hard(char c);

    // Check if soft letter
    static bool is_soft(char c);

    // Check if softener
    static bool is_softener(char c);
};

#endif //CMAKEPROJECT_STRINGHELPER_H
