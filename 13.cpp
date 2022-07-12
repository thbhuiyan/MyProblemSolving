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
        if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
        {
            cout<<c<<" is a VOWEL!\n";
        }
        else
            cout<<c<<" is a CONSONANT!\n";
        i++;
    }
    return 0;
}

