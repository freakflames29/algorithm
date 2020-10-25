let i,j,temp=0;
const a=Array(4,9,8,1,2);
// console.log(a.length);
    function sort()
    {
        console.log("The sorted array is ");
        for(i=1;i<a.length;i++)
        {
            for(j=0;j<a.length-i;j++)
            {
                while (a[j]>a[j+1])
                 {
                     temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;
                    
                }
            }
        }
        for(i=0;i<a.length;i++)
        {
            console.log(a[i]);
        }
    }
    sort();