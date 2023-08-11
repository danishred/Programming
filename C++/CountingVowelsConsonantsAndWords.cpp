//
#include <iostream>
using namespace std;

int main()
{
    int vowel = 0, cons = 0, word = 0, j;
    string str = "how   Many wOrds-7";

    for (int i = 0; str[i] != '\0'; i++)

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') // pressing enter won't matter
        {
            vowel += 1;
        }
        else if (str[i] == ' ')
        {
            word += 1;
            j = i;
            for (j; str[i] == ' '; j++)
            {
                i++;
            }
            i--;
        }
        else if ((str[i]>=65 && str[i]<=96) || (str[i]>=97 && str[i]<=122))
           {
               cons += 1;
           } 
           

    cout << "vowel=" << vowel << "\nconsonant=" << cons << "\nword=" << word + 1;

    return 0;
}
