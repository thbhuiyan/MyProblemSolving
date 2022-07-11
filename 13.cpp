//13. Given a character C. Determine the character is a vowel or consonant.
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    char c;
    while(i!=6)
    {
        cout<<"\n\nEnter character: ";
        cin>>c;
        if(c==('A'||'a'||'E'||'e'||'I'||'i'||'O'||'o'||'U'||'u'))
        {
            cout<<c<<" is a VOWEL!\n";
        }
        else
            cout<<c<<" is a CONSONANT!\n";
        i++;
    }
    return 0;
}

