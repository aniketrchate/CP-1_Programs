#include<iostream>
#include<iomanip>
using namespace std;
#define no_of_cents_to_distribute ncd
int main()
{

    int n, i, dollars, cents, total, avg, ncd, to_distribute;
    char c;
    int amt_of_students[100];

    cin>>n;
    while (n!=0)
    {
        for ( i = 0; i < n; i++)
        {
            cin>>dollars>>c>>cents;
            amt_of_students[i]=100*dollars+cents;
        }

        total=0;
        
        for ( i = 0; i < n; i++)
        {
            total=total+amt_of_students[i];
        }

        avg=total/n;
        ncd=total%n;
        to_distribute=0;

        for ( i = 0; i < n; i++)
        {
            if (amt_of_students[i]>avg)
            {
                to_distribute=to_distribute+(amt_of_students[i]-avg);
            }
            if (ncd > 0)
            {
                to_distribute=to_distribute-1;
                ncd=ncd-1;
            }
        }
        cout.fill('0');
        cout<<"$"<<to_distribute/100<<"."<<setw(2)<<to_distribute%100;
        cin>>n;
    }
    return 0;

}