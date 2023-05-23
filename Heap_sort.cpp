#include <iostream>
#define max 20
using namespace std;

class stud {

    public:
    int mks[max];

    stud()
    {
        for (int i = 0; i < max; i++)
        {
            mks[i]=0;
        }
        
    }

    void insertHeap(int total);
    void displayMinHeap(int total);
    void showMaxValue(int total);
    void showMinValue();
};
    void stud::insertHeap(int total)
    {
        for (int i = 1; i <=total; i++)
        {
            cout<<"Enter The marks"<<endl;
            cin>>mks[i];

            int j = i;
            int par =j/2;

            while (mks[j]<mks[par] && j!=0)
            {
                int temp = mks[j];
                mks[j] = mks[par];
                mks[par] =temp;
                
                j = par;
                par=j/2;
            }
            
        }
        
    }

    void stud::displayMinHeap(int total)
    {
        int i=1, space =6;
        cout<<endl<<endl;

        while (i<=total)
        {
            if (i==1 || i==2 || i==4 || i==8 || i==16)
            {
                cout<<endl<<endl;
                for (int j =0; j<space; j++)
                {
                    cout<<" ";
                }
                space-=2;
            }
            cout<<" "<<mks[i];
                i++;
            
        }
        

    }

    void stud::showMaxValue(int total)
    {
        int max1 =mks[1];

        for (int i =2; i<=total; i++)
        {
            if(max1<mks[i])
            {
                max1 = mks[i];
            }

        }
        cout<<max1<<endl;
    }

    

    void stud::showMinValue()
    {
        cout<<mks[1]<<endl;
    }

int main()
{

    int ch,count,total;
    stud s1;

    do
    {
        cout<<"Enter Your Choice"<<endl;
        cout<<"1.Insert The value"<<endl;
        cout<<"2.Display the min heap"<<endl;
        cout<<"3.print Max Value"<<endl;
        cout<<"4.print Min Value"<<endl;

        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter The number of students you want to insert";
            cin>>total;

            s1.insertHeap(total);
            break;

            case 2:
            s1.displayMinHeap(total);
            break;

            case 3:
            s1.showMaxValue(total);
            break;
        
            case 4:
            s1.showMinValue();
            break;

        default:
        cout<<"Enter Correct Choice"<<endl;
            break;
        }
        cout<<endl<<"Press 1 to continue in main menu"<<endl;
        cin>>count;
    } while (count ==1);
    
    return 0;

}
