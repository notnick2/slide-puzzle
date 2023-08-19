#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int q,w,i,j,k,h,num,temp,rpos,cpos,ask;
int count,cout=1;
int numbers1[3][3] = {4, 0, 5, 6, 1, 2, 8, 7, 3};
int numbers2[3][3] = {0, 1, 2, 4, 8, 3, 7, 6, 5};
int numbers3[3][3] = {1, 0, 2, 7, 5, 4, 8, 6, 3};
int numbers4[3][3] = {0, 2, 3, 1, 4, 6, 7, 5, 8};
int numbers5[3][3] = {1, 3, 6, 4, 0, 2, 7, 5, 8};
int key[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 0};
int a[3][3];
void home()
{
    printf("Enter1: display grid\n");
    printf("Enter2: display rules\n");
    //printf("important hack: this game sometimes becomes compicated so when ever you feel the game is complicated and you need help just enter\"ask_ai\" to take help from our ai to easily solve the puzze\n");
}
void display_grid()
{
   srand(time(NULL));
        num = (rand() % 5) + 1;
    switch (num)
        {
            case 1:
            system("cls");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d ",numbers1[i][j]);
                    a[i][j]=numbers1[i][j];
                }
            printf("\n");
             
            }
            break;
            case 2:
            system("cls");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d ",numbers2[i][j]);
                    a[i][j]=numbers2[i][j];
                }
            printf("\n");
            }
            break;
            case 3:
            system("cls");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d ",numbers3[i][j]);
                    a[i][j]=numbers3[i][j];
                }
            printf("\n");
            }
            break;
            case 4:
            system("cls");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d ",numbers4[i][j]);
                    a[i][j]=numbers4[i][j];
                }
            printf("\n");
            }
            break;
            case 5:
            system("cls");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d ",numbers5[i][j]);
                    a[i][j]=numbers5[i][j];
                }
            printf("\n");    
            }
            break;
        }

}
void display_rules()
{
    printf("here are the rules:\n");
    printf("arrange the given numbers in ascending order i.e in the below order:\n");
    printf("1 2 3\n");
    printf("4 5 6\n");
    printf("7 8 0\n");
    printf("Remeber that only numbers that are adjacent to zero can only be swapped and only be swapped with zero\n");
    printf("for example:\n");
    printf("3 1 8\n");
    printf("2 4 6\n");
    printf("7 5 0\n");
    printf("only 5 and 6 can be swapped with zero. Any other swapping is not possible");
    printf("swap 5 is possible\n");
    printf("swap 6 is possible\n");
    printf("swap 4 is not possible and is invalid");
    printf("hope you enjoy the game\n");
    printf("! !\n");
    printf(" -\n");
}    
void start()
{

    while(1)
    {
        count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==key[i][j])
            {
                count++;
            }
        }
    }
    if(count==9)
    {
        printf("winner\n");
        printf("number of moves: %d\n",cout-1);
        break;
    }
    else if(count!=9)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(a[i][j]==0)
                {
                    rpos=i;
                    cpos=j;
                }
            }
        }
        
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",a[i][j]);
            }
        printf("\n");
        }
        
        printf("Enter the number to be swapped:");
        scanf("%d",&ask);
        if (rpos==0 && cpos==0)
        {
            if(ask==a[0][1])
            {
                temp=ask;
                a[0][1]=a[0][0];
                a[0][0]=temp;
            }
            else if (ask==a[1][0])
            {
                temp=ask;
                a[1][0]=a[0][0];
                a[0][0]=temp;
            }
            else 
            {
                printf("number can't be swapped\n");
            }
        }
        if (rpos==2 && cpos==0)
        {
            if(ask==a[1][0])
            {
                temp=ask;
                a[1][0]=a[2][0];
                a[2][0]=temp;     
            }
            else if (ask==a[2][1])
            {
                temp=ask;
                a[2][1]=a[2][0];
                a[2][0]=temp;            
            }
            else
            {
                printf("number can't be swapped\n");
            }
        }
        if (rpos==0 && cpos==2)
        {
            if(ask==a[0][1])
            {
                temp=ask;
                a[0][1]=a[0][2];
                a[0][2]=temp;
            }
            else if (ask==a[1][2])
            {
                temp=ask;
                a[1][2]=a[0][2];
                a[0][2]=temp;          
            }
            else
            {
                printf("number can't be swapped\n");
            }
        }
        if (rpos==2 && cpos==2)
        {
            if(ask==a[1][2])
            {
                temp=ask;
                a[1][2]=a[2][2];
                a[2][2]=temp;           
            }
            else if (ask==a[2][1])
            {
                temp=ask;
                a[2][1]=a[2][2];
                a[2][2]=temp;           
            }
            else
            {
                printf("number can't be swapped\n");
            }
        }
        if (rpos==0 && cpos==1)
        {
            if (ask==a[0][0])
            {
                temp=ask;
                a[0][0]=a[0][1];
                a[0][1]=temp;  
            }
            else if (ask==a[0][2])
            {
                temp=ask;
                a[0][2]=a[0][1];
                a[0][1]=temp;           
            }
            else if (ask=a[1][1])
            {
                temp=ask;
                a[1][1]=a[0][1];
                a[0][1]=temp;           
            }
            else
            {
                printf("number can't be swapped\n");
            }
        }
        if (rpos==1 && cpos==0)
        {
            if (ask==a[0][0])
            {
                temp=ask;
                a[0][0]=a[1][0];
                a[1][0]=temp;         
            }
            else if (ask==a[1][1])
            {
                temp=ask;
                a[1][1]=a[1][0];
                a[1][0]=temp;         
            }
            else if (ask=a[2][0])
            {
                temp=ask;
                a[2][0]=a[1][0];
                a[1][0]=temp;           
            }
            else
            {
                printf("number can't be swapped\n");
            }
        }
        if (rpos==2 && cpos==1)
        {
            if (ask==a[2][0])
            {
                temp=ask;
                a[2][0]=a[2][1];
                a[2][1]=temp;            
            }
            else if (ask==a[1][1])
            {
                temp=ask;
                a[1][1]=a[2][1];
                a[2][1]=temp;          
            }
            else if (ask=a[2][2])
            {
                temp=ask;
                a[2][2]=a[2][1];
                a[2][1]=temp;            
            }
            else
            {
                printf("number can't be swapped\n");
            }
        }    
        if (rpos==1 && cpos==2)
        {
            if (ask==a[0][2])
            {
                temp=ask;
                a[0][2]=a[1][2];
                a[1][2]=temp;
            }
            else if (ask==a[1][1])
            {
                temp=ask;
                a[1][1]=a[1][2];
                a[1][2]=temp;
            }
            else if (ask=a[2][2])
            {
                temp=ask;
                a[2][2]=a[1][2];
                a[1][2]=temp;          
            }
            else
            {
                printf("number can't be swapped\n");
            }
        }
        if (rpos==1 && cpos==1)
        {
            if(ask==a[0][1])
            {
                temp=ask;
                a[0][1]=a[1][1];
                a[1][1]=temp; 
            }
            else if (ask==a[1][0])
            {
                temp=ask;
                a[1][0]=a[1][1];
                a[1][1]=temp;       
            }
            else if (ask==a[2][1])
            {
                temp=ask;
                a[2][1]=a[1][1];
                a[1][1]=temp;
            }
            else if (ask==a[1][2])
            {
                temp=ask;
                a[1][2]=a[1][1];
                a[1][1]=temp;
            }
            else
            {
                printf("number can't be swapped\n");
            }
        }       
    }
    
    printf("number of moves: %d\n",cout);
    cout++;
    
    }
}
void main()
{
    home();
    scanf("%d",&q);
    if (q==1)
    {
        display_grid();
        printf("Enter1: start\n");
        printf("Enter2: change puzzle\n");
        printf("Enter3: go home\n");
        scanf("%d",&k);
        if (k==1)
        {
            start();
            
        }
        else if (k==2)
        {
            printf("here is a new puzzle!\n");
            display_grid();
            printf("Enter1: start\n");
            printf("enter2: go home\n");
            scanf("%d",&h);
            if (h==1)
            {
                start();

            }
            if (h==2)
            {
                return main();
            }
            else
            {
                printf("Invalid input\n");
                return main();
            }
        }
        else if (k==3)
        {
           return main();
        }
        else 
        {
            printf("invalid input\n");
            return main();
        }


    }
    else if (q==2)
    {
        display_rules();
        return main();

    }
    else
    {
        printf("Invalid input\n");
        return main();

    }

}
