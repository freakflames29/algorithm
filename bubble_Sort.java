import java.util.Scanner;
class bubble_Sort
{
  public static void main(String[] args) {
    Scanner s=new Scanner(System.in);
    int i,j,temp;
    System.out.println("Enter the length");
    int n=s.nextInt();
    System.out.println("Enter the elements");
    for(i=0;i<n;i++)
    {
      a[i]=s.nextInt();
    }
    for (i=1;i<n;i++)
    {
      for(j=0;j<n-i;j++)
      {
        while(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
    }
    System.out.println("The result");
    for(i=0;i<n;i++)
    {
      System.out.print(" "+a[i]);
    }
    System.out.println();

  }
}
