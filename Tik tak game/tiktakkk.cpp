#include<iostream>

#include<cstring>
using namespace std;
int main()
{
  
    int mat[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<mat[i][j]<<"  ";  
         
        }
       cout<<endl;  
    }
   int playerone;
    char playertwo;
    cout<<"entr the number of player one\n";
    cin>>playerone;
    char a='x';
   
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(mat[i][j]==playerone)
          {
          mat[i][j]=a;   
          }
         cout<<mat[i][j]<<"   ";
        }
        cout<<endl;
  }
    
    
    
    
}