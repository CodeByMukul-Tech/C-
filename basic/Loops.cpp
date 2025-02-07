#include <iostream>
using namespace std;

void one_to(int no)
{
    for (int i = 1; i <= no; i++)
    {
        cout << i << endl;
    }
}


/*

for(inititialiation ; condition; increment or decrement ){
}



*/
int main()
{
    one_to(100);
     return 0;
}