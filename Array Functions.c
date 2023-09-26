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

int main()
{
    /*
    int arr[10]={100,200,300,400,500,600};
    int arr2[20]={1,2,3,4,5,6,7,8,9,19,11,12,13,19,15,16,17,18,19,20};
    int arr3[5]={1,2,4,5};

    array_print(arr,10);
    array_reverse(arr,10);
    array_print(arr,10);
    /* array_print(arr2,20);
    array_swap(arr,10,arr2,20);
    array_print(arr,10);
    array_print(arr2,20);
    // array_print(arr3,5);
    // array_print(arr,10);
    // array_print(&x,20);

    //int x=array_sum(arr2,20);
    //printf("sum=%d",x);
    /*
    int x = array_search(arr,10,600);
    if(x==-1)
    {
        printf("NOT FOUND\n");
    }
    else
    {
         printf("FOUND ON INDEX %d\n",x);
         arr[x]=70;
         array_print(arr,10);
    }

    int c;
    int x=array_search(arr2,20,20,&c);
    arr2[x]=0;
    array_print(arr2,20);
    printf("%d   %d   %d",x,c,arr2[x]);

    ar ray_print(arr2,20);
    array_removePrime(arr2,20);
    array_print(arr2,20);
    printf("Counter=%d",array_print_prime(arr2,20));
    */
    //  int arr[10]= {1,2,3,4,5,6,7,8,9,10};

    /* int*p=0;
     p=array_scan();
     array_print(p,5); */
    /*
            int arr[5];
            int arr2[5];
            int *p2;
            int *p=0;
            int s1=0,s2=0;
        array_print(arr,s1);
        while(1)
        {
            s1=array_scan(arr,5);
            array_print(arr,s1);
            s2=array_scan(arr2,5);
            array_print(arr2,s2);

        }
    */
    /*

    int s=0,s1=0;
    int arr[20];
    int arr1[20];
    s=array_scan(arr,20);
    s1=array_findPrime(arr,s,arr1);
    array_print(arr1,s1);
    array_print(arr,s);
    */

    /*
    int arr1[]={1,2,3,4,5,6,7,8};
    int arr2[]={11,12,13,14,15,16,17,18};
    int arr3[100];
    int arr4[100];
    int s4=array_scan(arr4,100);
    int s3=array_merge(arr1,8,arr4,s4,arr3);
    array_print(arr3,s3);
    */
    int arr[10];
    int max2;
    int s4=array_scan(arr,10);
    array_print(arr,s4);
    int max=array_max(arr,s4,&max2);
    printf("MAX1 = %d\n",max);
    printf("MAX2 = %d\n",max2);


    // printf("main%d\n",*p);
    // p=array_scan();
    // array_print(p,5);
    return 0;
}
