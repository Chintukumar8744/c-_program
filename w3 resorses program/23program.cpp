#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        int choice = 0,size=0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                choice++;
            }
        }
        if (choice == 0)
        {
            for (int k = 2; k < num; k++)
            {
                for (int l = 2; l <i; l++)
                {
                    if (k % l == 0)
                    {
                        size++;
                    }
                    if (size==0&&choice==0)
                    {
                        if (i+k==num)
                        {
                            cout<<i<<"+"<<k<<"="<<num;
                        }
                        
                    }
                    
                }
            }
        }
    }
    return 0;
}