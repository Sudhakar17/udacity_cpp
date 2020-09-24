/* How many times will this loop execute?
If you said 300, you would have been correct if i had been declared as an int. 
However, since i was declared as an unsigned char, the corrct answer is that this code
will result in an infinite loop.

Here’s why:

The expression 2 * half_limit will get promoted to an int (based on C++ conversion rules) 
and will have a value of 300. However, since i is an unsigned char,
it is rerepsented by an 8-bit value which, after reaching 255, will overflow 
(so it will go back to 0) and the loop will therefore go on forever. */


#include <iostream>

using namespace std;

int main()
{
    unsigned char half_limit = 150;

    //Hint to the answer: run this code as is. 
    //then uncomment the line below. What happens?
    //cout<<"half_limit = "<<half_limit<<"\n"; 
    
    cout<<"i = \n";
    for (unsigned char i = 0; i < 2 * half_limit; ++i)
    {
        
        cout<<i<<", ";
        // cout<<"half_limit = "<<half_limit<<"\n";
        //This is another hint...
        //Why do we have a break here?
        if(i > 60)
            break;
    }
    return 0;
}
