#include<iostream>
using namespace std;
class sorted
{
  int n,temp=0;
  int a[20];
public:
  sorted()
  {
    cout <<"Enter the length "<<endl;
    cin >>n;


  }
  void input() //taking input for the length
  {
      cout <<"Enter the element "<<endl;
      for(int i=0;i<n;i++)
      {
        cin >>a[i];
      }
  }
  void calculate() //calculating the result
  {
    for(int i=1;i<n;i++)
    {
      for(int j=0;j<n-i;j++)
      {
        while(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }

      }
    }
  }
  void print()//printing the result
  {
    cout<<"The sorted list "<<endl;
    for(int i=0;i<n;i++)
    {
      cout<<" "<<a[i];
    }
    cout<<endl;
  }
};
int main()
{
  sorted ob; //constructor called automatically and calling function respe
  ob.input();
  ob.calculate();
  ob.print();
}
