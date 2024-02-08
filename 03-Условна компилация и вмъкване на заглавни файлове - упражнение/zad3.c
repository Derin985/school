 #include <stdio.h>
 
 #define SIZE 10
 void sortOS(int a[]);

 void main()
 {
    int a[SIZE] = {1,10,-12,6,12,15,-16,8,133,20};
    sortOS(a);
    for(int i = 0 ; i<SIZE ; i++)
    {
        printf("%d ",a[i]);
    }
 }

  void sortOS(int a[])
 {
  #ifdef _WIN32
    for (int i = 0; i < SIZE - 1; i++) 
    {
        for (int j = 0; j < SIZE - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
        }
    }


  #elif defined __linux__
    int index;
    for (int i = 0; i < SIZE - 1; i++) 
    {
        index = i;
        for (int j = i + 1; j < SIZE; j++) 
        {
            if (a[j] < a[index])
                index = j;
        }
        if (index != i) 
        {
            int temp = a[index];
            a[index] = a[i];
            a[i] = temp;
            
        }
    }


  #elif defined __APPLE__
    {
    int key;
    for (int i = 1; i < SIZE; i++) 
    {
        key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) 
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    }

  #else 
    for(int i = 0 ; i<SIZE/2 ; i++)
    {
        int temp = a[i];
        a[i]=a[SIZE-i-1];
        a[SIZE-i-1] = temp;
    }

  #endif
 }