// Developed By Kumaresan.L

#include<iostream.h>
#include<conio.h>
float x[500],y[500],f[500],temp,m,med,cf[500],sumf,M;
int i,j,limit,l,pcf,c;

class median         //developed by KumaresanL
{
	public:
	        void individual() //developed by KumaresanL
		{
			cout<<"Enter the limit of x : ";
			cin>>limit;
			cout<<"\nEnter the x values : ";
			cout<<"\n";
                        for(i=0;i<limit;i++)
			{
				cin>>x[i];
			}
			for(i=0;i<limit;i++)
			{
				for(j=i+1;j<limit;j++)
				{
					if(x[i]>x[j])
					{

				        	temp=x[i];
				              	x[i]=x[j];
					        x[j]=temp;
		     		        }
			}       }

		cout<<"\nsoln :- ";
		cout<<"\nArrange the data in ascending order ";
		for(i=0;i<limit;i++)
		{
			cout<<'\t'<<x[i];
		}
		cout<<"\nHere n= "<<limit;
	        med=(limit+1)/2;
		cout<<"\nFormula : m= size of(n+1)/ 2th item";
		cout<<"\n= size of("<<limit<<"+1)/2 item";
		cout<<"\n= size of("<<limit+1<<"/2) item";
                if(limit%2==1)
                {
	        	cout<<"\n= size of "<<med<<" item";
                }
                else if(limit%2==0)
                {

                   	cout<<"\n= size of "<<(med+(med+1))/2<<" item";
                }

		for(i=0;i<med;i++)
		{
                  if(limit%2==1)
                  {
                     m=x[i];
                  }
                  else if(limit%2==0)
                  {
                      m=(x[i]+x[i+1])/2;
                  }
                }
	    cout<<"\n\nMedian = "<<m;
	    cout<<"\n\n";
            getch();
	  }  //developed by kumaresanL
          void discrete()  //developed by kumaresanL
          {
             	        cout<<"Enter the limit of x : ";
			cin>>limit;
			cout<<"\nEnter the x values : ";
			cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cin>>x[i];
			}
                        cout<<"\nEnter the f values  ";
			cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cin>>f[i];
			}
                        for(i=0;i<limit;i++)
			{
			  for(j=i+1;j<limit;j++)
			  {
			   if(x[i]>x[j])
			   {
                             temp=x[j];
			     x[j]=x[i];
			     x[i]=temp;
                             temp=f[j];
                             f[j]=f[i];
                             f[i]=temp;
		     	   }
			 }
                        }
                        for(i=0;i<limit;i++)
                        {
                           sumf=sumf+f[i];
                        }
                       for(i=0;i<limit;i++)
                       {
                       for(j=0;j<i+1;j++)
                       {
                            cf[i]=cf[i]+f[j];
                       }

                        }
                        cout<<"\nSoln : ";
                        cout<<"\n\nArrange X values in acending Order and sort f values accordingly- ";
                        cout<<"\n\nX       f       c.f";
                        for(i=0;i<limit;i++)
                        {
                         cout<<"\n"<<x[i]<<'\t'<<f[i]<<'\t'<<cf[i];
                        }
                        cout<<"\n\nsummation f : "<<sumf<<'\t'<<'\t'<<"(:. summationf = N";
                cout<<"\nHere N= "<<sumf;
	        med=(sumf+1)/2;
		cout<<"\nFormula : m= size of(N+1)/ 2th item";
		cout<<"\n= size of("<<sumf<<"+1)/2 item";
		cout<<"\n= size of("<<sumf+1<<"/2) item";
                for(i=0;i<limit;i++)
                {
                     if(cf[i]>=med)
                     {
                         cout<<"\n"<<cf[i]<<" >= "<<med;
                         cout<<"\nM = "<<x[i];
                         break;
                     }
                }

                        getch();
          } //developed by KumaresanL
          void continuous() //developed by kumaresanL
          {

                        cout<<"\nEnter the limit of X : ";
			cin>>limit;
			cout<<"\nEnter X values  ";
			cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cout<<"\nFrom : ";
				cin>>x[i];
				cout<<"To   : ";
				cin>>y[i];
       		        }
		    cout<<"\nEnter the f values  ";
		    cout<<"\n";
			for(i=0;i<limit;i++)
			{
				cin>>f[i];
			}
			for(i=0;i<limit;i++)
			{
				sumf=sumf+f[i];
			}
                       for(i=0;i<limit;i++)
                       {
                       for(j=0;j<i+1;j++)
                       {
                            cf[i]=cf[i]+f[j];
                       }

                        }


			cout<<"\n\nSoln:- ";
			cout<<"\n\nX       f       m       fm        c.f";

			for(i=0;i<limit;i++)
			{
				cout<<"\n"<<x[i]<<"-"<<y[i]<<'\t'<<f[i]<<'\t'<<(x[i]+y[i])/2<<'\t'<<f[i]*(x[i]+y[i])/2<<'\t'<<cf[i];
			}
                         cout<<"\n\nsummation f : "<<sumf<<'\t'<<'\t'<<"(:. summationf = N";
                cout<<"\nHere N= "<<sumf;
	        med=sumf/2;
		cout<<"\n\nFormula : m= size of(N/2)th item";
		cout<<"\n= size of("<<sumf<<"/2) item";
		cout<<"\n= size of("<<sumf<<"/2) item";
                for(i=0;i<limit;i++)
                {
                     if(cf[i]>=med)
                     {
                         cout<<"\n\n"<<cf[i]<<" >= "<<med;
                         cout<<"\nMedian class : "<<x[i]<<"-"<<y[i];
                         l=x[i];
                         pcf=cf[i-1];
                         c=y[i]-x[i];
                         M=l+((med-pcf)/f[i])*c;
                         cout<<"\n\nM=l+{(((N/2)-p.c.f/f)*c)";
                         cout<<"\nM="<<l<<"+{("<<med<<"-"<<pcf<<")/"<<f[i]<<")*"<<c<<")";
                         cout<<"\n\nMedian = "<<M;
                         break;
                     }
                } //developed by kumaresanL

                  getch();
          }
}; //developed by KumaresanL
void main() //developed by kumaresanL
{
        clrscr();
	median ob;
	int option;
	cout<<"MEDIAN- "<<"\n\n"<<"1.Individual"<<"\n"<<"2.Discrete"<<"\n"<<"3.Continuous";
	cout<<"\n\nEnter what data to perform : ";
	cin>>option;
	switch(option)
	{
		case 1 : ob.individual(); break;
                case 2 : ob.discrete(); break;
                case 3 : ob.continuous(); break;
                default : cout<<"Option Wrong !";
                getch();

        }

} //developed by kumaresanL
