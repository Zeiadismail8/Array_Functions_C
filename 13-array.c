



void array_print(int arr[],int size)//int arr[]
{
    int i;
    /*if(arr==0)
    {
        return ;
    }*/

    for(i=0; i<size; i++)
    {
        printf("%3d ",arr[i]);
    }
    printf("\n");
}

int array_sum(int*arr,int size)
{
    int sum=0,i;
    for(i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int array_printPrime(int*arr,int size)
{
    int i,c=0;
    for(i=0; i<size; i++)
    {
        if(IsPrime(arr[i]))
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
    printf("\n");
    return c;
}

void array_removePrime(int*arr,int size)
{
    int i,c=0;
    for(i=0; i<size; i++)
    {
        if(IsPrime(arr[i]))
        {
            arr[i]=0;
        }
    }
}

int array_findNumber(int*arr,int size,int num,int*pcount)
{
    int i,index=-1,c=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            index= i;
            c++;
        }
    }
    *pcount=c;
    return index;
}

void array_swap(int*arr1,int size1,int*arr2,int size2)
{
    int i,size,temp;;
    if(size1>size2)
    {
        size=size2;
    }
    else
    {
        size=size1;
    }
    for(i=0; i<size; i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }



}
int array_swap2(int*arr1,int size1,int*arr2,int size2)
{
    int i,size,temp;;

    if(size1!=size2)
    {
        return 0;
    }
    for(i=0; i<size1; i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    return 1;

}

void array_revese(int*arr,int size)
{

    int i,temp,j=size-1;
    for(i=0; i<size/2;)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
        // j--;
        i++;
    }

}

int array_scan(int* arr,int maxSize)
{

    int i,total=0;
    printf("enter total numbers not more than %d\n",maxSize);
    scanf("%d",&total);
    /* if(total>maxSize)
     {
         return 0;
     }*/
    for(i=0; (i<total)&&(i<maxSize); i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;

}

int array_findPrime(int *arr,int size,int*primeArr)
{
    int i,j=0;
    for(i=0; i<size; i++)
    {
        if(IsPrime(arr[i]))
        {
            primeArr[j]=arr[i];
            j++;
        }
    }
    return j;
}

int array_merge(int *ar1,int s1,int *ar2,int s2,int *arrnew)
{
    int i,j=0;
    int newsize=s2*2;
    for(i=0; j<s1; i++)
    {
        if(i%2==0)
        {
            arrnew[i]=ar1[j];
        }
        else
        {
            arrnew[i]=ar2[j];
            j++;
        }
    }

    return i;
}
int array_merge2(int *ar1,int s1,int *ar2,int s2,int *arrnew)
{
    int i,j=0;
    int newsize=s2*2;
    for(i=0; i<newsize; i++)
    {
        arrnew[i]=ar1[j];
        i++;
        arrnew[i]=ar2[j];
        j++;
    }

    return i;
}
