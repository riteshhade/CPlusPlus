# include<iostream>
using namespace std;
int main()
{
    int num,temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    
   
        if(num%2==0){
            cout<<"EVEN: ";
        for (int i = 0; i < 5; i++)
        {
            if (num%2==0)
            {
               cout<<num<<"  ";
               num+=2;
            }
        }
        cout<<endl;
        cout<<"ODD:  ";
        for (int i = 0; i < 5; i++)
        {
            if(temp%2==0)
            {
                cout<<temp+1<< "  ";
                temp+=2;
            }
        }
        }
        else

        {
            cout<<"ODD:  ";
            for (int i = 0; i < 5; i++)
            {
                if(num%2==1)
                {
                    cout<<num<<' ';
                    num+=2;
                }
            }
            cout<<endl;

            cout<<"EVEN: ";
            for (int i = 0; i < 5; i++)
            {
                if (num%2==1)
                {
                    cout<<temp+1<<' ';
                    temp+=2;
                }
                
            }
            
        }


}