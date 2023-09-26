#include <stdio.h>
#include <stdlib.h>

void array_print(int* arr, int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int array_sum(int* arr,int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int array_search(int* arr, int size, int num,int* count)
{
    int i,index=-1,c=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            index=i;
            c++;
        }
    }
    *count=c;
    return index;
}


int IsPrime(int n)
{
    if(n<2)
    {
        return 0;
    }
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}

int array_print_prime(int* arr, int size)
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

int array_findPrime(int* arr,int Size,int* primeNumber)
{
    int i,j=0;
    for(i=0; i<Size; i++)
    {
        if(IsPrime(arr[i]))
        {
            primeNumber[j]=arr[i];
            j++;
        }
    }
    return j;
}

void array_removePrime(int* arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(IsPrime(arr[i]))
        {
            arr[i]=0;
        }
    }
}

void array_swap(int*arr,int size1,int*arr2,int size2)
{
    int size,temp;
    if(size1>size2)
    {
        size=size2;
    }
    else
    {
        size=size1;
    }
    int i;
    for(i=0; i<size; i++)
    {
        temp=arr[i];
        arr[i]=arr2[i];
        arr2[i]=temp;
    }
}

void array_reverse(int* arr, int size)
{
    int i,temp;
    for(i=0; i<size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}

int array_scan(int* arr,int maxSize)
{
    int i,total=0;
    printf("Enter total number not more than %d\n",maxSize);
    scanf("%d",&total);
    for(i=0; (i<total)&&(i<maxSize); i++)
    {
        scanf("%d",&arr[i]);
    }
    return i;
}

int array_merge(int* ar1,int s1,int* ar2,int s2,int* arrnew)
{
    int i,j=0;
    int newsize=s1*2;
    for(i=0; i<newsize; i=i+2)
    {
        arrnew[i]=ar1[j];
        arrnew[i+1]=ar2[j];
        j++;
    }
    return newsize;
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

int array_max(int* arr,int size,int* ptr)
{
    int mx1=0;
    int mx2=0;
    int index=0;
    int i;

    for(i=0; i<size; i++)
    {
        if(arr[i]>=mx1)
        {
            mx1=arr[i];
            index=i;
        }
    }

    for(i=0; i<size; i++)
    {
        int flag=0;
        if(i!=(index))
        {
            flag=1;
        }

        if(flag==1 && arr[i]>mx2)
        {
            mx2=arr[i];
        }
    }
    *ptr=mx2;
    return mx1 ;
}
