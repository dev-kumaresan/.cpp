//Devoloped By Kumaresan.L 

#include<iostream.h>
#include<conio.h>
int N[500],x[500],Nx[500],i,limit;
float Cm,sumN,sumNx;
class combined_mean                 //Developed By Kumaresan L
{
  public:
  void compute()
  {
     cout<<"Enter the no.of observations : ";
     cin>>limit;
     cout<<"\nEnter N values : \n";
     for(i=0;i<limit;i++)
     {
      cin>>N[i];
     }
     cout<<"\nEnter X values : \n";
     for(i=0;i<limit;i++)
     {
       cin>>x[i];
     }
     for(i=0;i<limit;i++)
     {
        Nx[i]=N[i]*x[i];
     }
     for(i=0;i<limit;i++)
     {
        sumNx+=Nx[i];
     }
     for(i=0;i<limit;i++)
     {
        sumN+=N[i];
     }
     Cm=sumNx/sumN;
     cout<<"\n\nSoln :- ";
     cout<<"\nN       x       Nx";
     for(i=0;i<limit;i++)
     {
     cout<<"\n"<<N[i]<<'\t'<<x[i]<<'\t'<<Nx[i];
     }
     cout<<"\n\nsummation Nx : "<<sumNx;
     cout<<"\nsummation N : "<<sumN;
     cout<<"\n\nCombined Mean (C.M) :- \nsumNx/sumN = "<<Cm;
     getch();
  }
};                                                           //Developed By Kumaresan L
void main()
{
   clrscr();
   combined_mean cm;
   cm.compute();
}                                                            //Developed By Kumaresan L
