// Developed By Kumaresan.L

#include<iostream.h>
#include<conio.h>
float l,f1,f2,c,x[500],temp,y[500],f[500],cf[500],med,medf,Z;
int i,j,limit,sumf;
int ft[500],st[500],tt[500],frt[500],fvt[500];

class mode   //developed by kumaresanL
{
public:
void individual() //developed by kumaresanL
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

		 }
              }
                clrscr();
                cout<<"\nsoln :- ";
		cout<<"\nArrange the data in ascending order ";
		for(i=0;i<limit;i++)
		{
			cout<<'\t'<<x[i];
		}
                cout<<"\nMode : ";
                for(i=0;i<limit;i++)
                {
                 if(x[i]==x[i+1])
                  {
                    cout<<" "<<x[i];
                  }
                  else if(x[i]!=x[i])
                  {
                     cout<<" "<<x[i];
                  }
                }
     getch();
} //developed by KumaresanL
void discrete() //developed by KumaresanL
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

                        cout<<"\nSoln : ";
                        cout<<"\n\nArrange X values in acending Order and sort f values accordingly- ";
                        cout<<"\n\nGrouping Table :- ";
                        cout<<"\n\nX       f       II     III     IV       V       VI";

                        for(i=0;i<limit;i++)
                        {
                           ft[i]=f[i]+f[i+1];
                           i++;
                        }
                        for(i=0;i<limit;i++)
                        {
                           st[i]=f[i+1]+f[i+2];
                           i++;
                        }
                        for(i=0;i<limit;i++)
                        {
                           tt[i]=f[i]+f[i+1]+f[i+2];
                           i++;
                           i++;

                        }
                        for(i=0;i<limit;i++)
                        {
                            frt[i]=f[i+1]+f[i+2]+f[i+3];
                            i++; i++; i++; i++;
                        }
                        for(i=0;i<limit;i++)
                        {
                            fvt[i]=f[i+2]+f[i+3]+f[i+4];
                            i++; i++;
                        }
                        for(i=0;i<limit;i++)
                        {
                            cout<<"\n"<<x[i]<<'\t'<<f[i];
                            if(i%2==1)
                            {
                              cout<<'\t'<<" ";
                            }
                            else if(i%2==0)
                            {
                              cout<<'\t'<<ft[i];
                            }
                            if(i%2==1)
                            {
                              cout<<'\t'<<st[i-1];
                            }
                            else if(i%2==0)
                            {
                              cout<<'\t'<<" ";
                            }
                            if(tt[i]==0)
                            {
                            cout<<'\t'<<" ";
                            }
                            else if(tt[i]!=0)
                            {
                            cout<<'\t'<<tt[i];
                            }
                            if(i==2)
                            {
                            cout<<'\t'<<frt[i-2];
                            }
                            else
                            {
                            cout<<'\t'<<" ";
                            }
                            if(i==3)
                            {
                            cout<<'\t'<<fvt[i-3];
                            }
                            else
                            {
                            cout<<'\t'<<" ";
                            }
                         }
                         cout<<"\n-------------------------------------------------------";
                         for(i=1;i<limit;i++)
                         {
                            if(f[0]<f[i])
                            {
                                temp=f[0];
                                f[0]=f[i];
                                f[i]=temp;
                            }
                         }
                         cout<<"\n"<<'\t'<<f[0];

                         for(i=1;i<limit;i++)
                         {
                            if(ft[0]<ft[i])
                            {
                               temp = ft[0];
                               ft[0] = ft[i];
                               ft[i] = temp;
                            }

                         }
                         cout<<'\t'<<ft[0];
                          for(i=1;i<limit;i++)
                         {
                            if(st[0]<st[i])
                            {
                               temp = st[0];
                               st[0] = st[i];
                               st[i] = temp;
                            }

                         }
                         cout<<'\t'<<st[0];
                         for(i=1;i<limit;i++)
                         {
                            if(tt[0]<tt[i])
                            {
                               temp = tt[0];
                               tt[0] = tt[i];
                               tt[i] = temp;
                            }

                         }
                         cout<<'\t'<<tt[0];
                         for(i=1;i<limit;i++)
                         {
                            if(frt[0]<frt[i])
                            {
                               temp = frt[0];
                               frt[0] = frt[i];
                               frt[i] = temp;
                            }

                         }
                         cout<<'\t'<<frt[0];
                         for(i=1;i<limit;i++)
                         {
                            if(fvt[0]<fvt[i])
                            {
                               temp = fvt[0];
                               fvt[0] = fvt[i];
                               fvt[i] = temp;
                            }

                         }
                         cout<<'\t'<<fvt[0];


                getch();
} //developed by KumaresanL
void continuous() //developed by KumaresanL
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
			cout<<"\n\nX       f       m       fm      c.f";
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
                        if(limit%2==0)
                        {
                                cout<<"\n = sizeof "<<med<<" item";
                        }
                        else if(limit%2==1)
                        {
                                medf = (med+(med+1))/2;
                                cout<<"\n= size of "<<medf<<" item";
                        }
                        for(i=0;i<limit;i++)
                        {
                                if(limit%2==0)
                                {
                                if(cf[i]>=med)
                                {
                                        cout<<"\n\n"<<cf[i]<<" >= "<<med;
                                        cout<<"\nMedian class : "<<x[i]<<"-"<<y[i];
                                        l=x[i];
                                        f2=f[i+1];
                                        f1=f[i-1];
                                        c=y[i]-x[i];
                                        Z=l+((f2/(f1+f2))*c);
                                        cout<<"\n\nZ=l+((f2/(f1+f2))*c)";
                                        cout<<"\nZ="<<l<<"+(("<<f2<<"/("<<f1<<"+"<<f2<<"))"<<"*"<<c<<")";
                                        cout<<"\n\nZ = "<<Z;
                                        break;
                                }
                                }
                    else if(limit%2==1)
                    {   if(cf[i]>=medf)
                     {
                         cout<<"\n\n"<<cf[i]<<" >= "<<medf;
                         cout<<"\nMedian class : "<<x[i]<<"-"<<y[i];
                         l=x[i];
                         f2=f[i+1];
                         f1=f[i-1];
                         c=y[i]-x[i];
                         Z=l+((f2/(f1+f2))*c);
                         cout<<"\n\nZ=l+((f2/(f1+f2))*c)";
                         cout<<"\nZ="<<l<<"+(("<<f2<<"/("<<f1<<"+"<<f2<<"))"<<"*"<<c<<")";
                         cout<<"\n\nZ = "<<Z;
                         break;
                     }
                    }

                }


                getch();
} //developed by KumaresanL
}; //developed by KumaresanL
void main() //developed by KumaresanL
{
       clrscr();
	mode ob;
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

} //developed by KumaresanL
