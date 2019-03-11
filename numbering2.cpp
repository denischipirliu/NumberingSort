#include<fstream>
#include<iostream>
using namespace std;
int n;
int V[100000];
int R[100000];

int read_data()
{fstream f;
f.open("input.dat",ios::in);
f>>n;
for(int i=1;i<=n;i++) f>>V[i]; }

int print_data(int some_data[],int this_size)
{ cout<<endl;
   for(int i=1;i<this_size;i++) cout<<some_data[i]<<" ";
   cout<<some_data[this_size];}

int sort_data(int some_data[],int this_size,int some_result[])
{ for(int i=this_size;i>0;i--)
    {  int this_devil=V[i];
        int devil_place=0;
        for(int j=n;j>0;j--)
        {   if (some_data[j]<this_devil) { devil_place++;}
        }
        if (devil_place!=0) some_result[devil_place+1]=this_devil;
                            else some_result[1]=this_devil;
    }
}
int main()
{
read_data();
print_data(V,n);
sort_data(V,n,R);
print_data(R,n);

}
