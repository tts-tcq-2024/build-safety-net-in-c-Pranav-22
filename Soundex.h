#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>
char getSoundexCode(char c)
{
    int i = 0;
    char res = '0';
    char chararr[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char codearr[26] = {'0','1','2','3','0','1','2','0','0','2','2','4','5','5','0','1','2','6','2','3','0','1','0','2','0','2'};

    c = toupper(c);

    while(i < 26)
    {
        if(c == chararr[i])
        {
            res = codearr[i];
            break;
        }
        i++;
    };

    return res;
}

char checkcode(char code,char *soundex,int sIndex)
{
    if(code != '0' && code != soundex[sIndex - 1])
    {
        return code;
    }
    else
    {
        return 0;
    }
}
void generateSoundex(const char *name, char *soundex)
{
    soundex[0] = toupper(name[0]);
    int sIndex = 1;

    for (int i = 1; i < 4; i++)
    {
        char code = getSoundexCode(name[i]);
        if (checkcode(code,soundex,sIndex))
        {
            soundex[sIndex++] = code;
        }
    }

    while (sIndex < 4) {
        soundex[sIndex++] = '0';
    }

    soundex[4] = '\0';
}

#endif // SOUNDEX_H
