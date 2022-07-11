//12. Given a character C. Determine the character is an uppercase alphabet or lowercase alphabet or a digit.
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
        if(islower(c))
        {
            cout<<c<<" is LOWERCASE alphabet! ";
        }
        else if(isupper(c))
        {
            cout<<c<<" is UPPERCASE alphabet! ";
        }
        else
            cout<<(int)c<<" is a digit ! ";
        i++;
    }
    return 0;
}

