#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Find Out That How Many   No Vowels Are Present There In This Sentence";
    int vowel=0, consonant=0, space = 0;
    for ( int i = 0; str[i] != '\0'; i++ )
    {
        if ( str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            vowel++;
        }
        else if ( str[i] == ' ' || str[i]== '  ' || str[i] == '   ')
        {
            space++;
        }
        else    consonant++;
    }

    cout<<"No of vowels are:"<<vowel<<endl;
    cout<<"No of consonants are:"<<consonant<<endl;
    cout<<"No of words are:"<<space+1<<endl; // No of words is 1 greater than no of spaces.
    return 0;
}