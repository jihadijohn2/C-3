#include"jihadijohn.h"
void main()
{
    clrscr();
    int l=0,u=0,d=0;
    char ch[50];
    cout<<"ENTER THE SENTENCE=";
    gets(ch);
    for(int i=0;ch[i]!='\0';i++)
    {
       if(ch[i]>='a'&&ch[i]<='z')
       {
	  l++;
       }
       else if(ch[i]>='A'&&ch[i]<='Z')
       {
	  u++;
       }
       else if(ch[i]>='0'&&ch[i]<='9')
       {
	  d++;
       }

    }
    cout<<"\nupper case letters="<<u;
    cout<<"\nlower case letters="<<l;
    cout<<"\ndigits="<<d;
    getch();
}
