#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//语句就是由一个;隔开的就是一个语句
// int main()
// {
//     ;//也是一个语句，空语句
//     return 0;
// }   

/*int main()
{
//     int age=17;

    // if(age<18)
    //   printf("weichengnian");
    //   else if (age>=18 && age<28)
    //   printf("youngs");
    //   else 
    //   printf("good person");
      
    
    // if(age<18)
    // {
    //     printf("weichengnian\n");
    //     int a=18-age;
    //     printf("haiyou %dshuichengnian\n",a);
        
    // }//{}代码块，这样可以执行多行语句

    // if(age==16)
    //     if(age==17)
    // printf("hehe\n");
    //    else
    // printf("hahah\n");
    // else
    // printf("eeee\n");//else和离得 （最近的 未匹配）的if匹配

   //  int a=10;
   //  if(a=11)//如果一个变量和常量相比建议写成  (常量=变量)
   //  printf("bug happend");//会打印这一行，非0为真，且=是赋值
   //  else
   //  printf("bug happend again");
    

// switch分支
//     int day=0;
//     scanf("%d",&day);
//     switch(day)//()内只能是整形
//     {
//       case 1:
//       printf("monday\n");
//       break;//不一定case后都要加break
//       case 2:
//       printf("tuesday\n");
//       break;
//       case 3:
//       printf("wednesday\n");
//       break;
//       case 4:
//       printf("thursday\n");
//       break;
//       case 5:
//       printf("friday\n");
//       break;
//       case 6:
//       printf("saturday\n");
//       break;
//       case 7:
//       printf("sunday\n");
//       break;

//       //如果输入大于7的值
//       default ://当输入的值没有与相应的case匹配时会跳转到这个语句
//       printf("error value\n");
//       break;
//     }
//swtich可以嵌套
  int n=1;
    int m=2;
    switch(n)
    {
        case 1:m++;//m=3
        case 2:n++;//n=2
        case 3:
        switch(n)
        {
            case 1:n++;//不运行
            case 2:m++;n++;//m=4
            break;
        }
        case 4:m++;
        break;
        default:break;
    }
    printf("m=%d,n=%d\n",m,n);
    return 0;

}*/

// int main()
// {
    // int i=1;
    // while(i<=10)
    // {
        
    //     if(i==7)
    //     // break;//跳转到结尾处
    //     continue;//终止循环中本次循环后面的的代码
    //     printf("i=%d\n",i);
    //     i++;
    // }

//    int hz;
//     while(hz!=EOF)//EOf=-1,ctrl z=EOF
//     {
//         hz=getchar();//输入一个字符函数，相当于scanf
       
//         putchar(hz);
//         "\n";
//         printf("hz=%c\n",hz);
//     }
//     return 0;
// }

// int main()
// {
//     int ret;
//     int ch;
//     int passcod [20]={0};
//     printf("input passcode");
//     scanf("%s",&passcod);//我输入的内容之后，会敲一下回车同时该函数会有一个\n（每次输入进去会先进入数据缓冲区）
//     printf("que ding mi ma(Y/N):>");
//     while((ch=getchar())!='\n')
//     {;}
//     // getchar();
//     ret =getchar();
//     if(ret=='Y')
//     printf("sucss\n");
//     else
//     printf("failed\n");
//     return 0;
// }

// int main()
// {
//     int a;
//     while((a=getchar()) !=EOF)
//     {
//         if(a<'0'||a>'9')
//         {continue;}
//         putchar(a);
//     }
//     return 0;
// }



//for循环
// int main()
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         if(i==6)
//         break;
//     printf("%d\n",i);
//     }
//     return 0;
// }


//for循环的一些变种
// int main()
// {
//   int i=0;
//   for(;;)//for的初始化，判断，调整可以省略（不要随便省略）
//   {
//     i++;
//     printf("%d",i);
//     // if(i==100)
//     // break;
    
//   }
//   return 0;
// }


// int main()
// {
//     int i=0,j=0;
//     for(;i<10;i++)
//     {
//         for(;j<10;j++)//参考for(j=0;j<10;j++),得出的结果不一样，不要随便不写条件
//         {
//             printf("%d\n",j);
//         }
//     }
//    return 0; 
// }


// int mian()
// {
//     int x;
//     int y;
//     for(x=0,y=0;x<3&&y<5;x++,y++)
//     {
//         printf("hehe\n");
//     }
// //     return 0;


// int mian()
//   {
//     int i=1;
//     do
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     while(i<10);
//     return 0;
//   }

// int main()
// {
    // int i=1;
    // int n;
    // printf("which?\n");
    // scanf("%d",&n);
    // int temp=n;
    // while(n!=1)
    // {
    //     n--;
    //     i=i*n;
    // }
    // i=i*temp;
    // printf("%d\n",i);
    


    // int i;
    // int n;
    // int ret=1;
    // int sum=0;
    // printf("which?\n");
    // scanf("%d",&n);
    // for(n=1;n<=3;n++)
    // {
    //   ret=1;
    //   for(i=1;i<=n;i++)//注意i不能等于0
    // {
    //     ret=ret*i;
    // }
    //  sum=sum+ret;
    // }
    
    // printf("%d\n",sum);
    // return 0;
// } 

// int mian()
// {
//     int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//     int k=7;
//     // scanf("%d",&k);
//     int temp=sizeof(arr1)/sizeof(arr1[0]);
//     int i;
//     for(i=0;i<temp;i++)
//     {
//         if(k==arr1[i])
//         {
//             printf("find it,location is %d\n",i);
//             break;
//         }
//     }
//     if(i==temp)
//     printf("can not find it\n");
//     return 0; 
//     }


// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int k=7;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int left=0;
    //     int right=sz-1;
    //     while(left<=right)
    //     {
    //         int mid=(left+right)/2;
    //         if(arr[mid]>k)
    //         {
    //             right=mid-1;
    //         }
    //         else if(arr[mid]<k)
    //         {
    //             left=mid+1;
    //         }
    //         else
    //         printf("find it and loucation is:%d\n",mid);
    //         break;
    //         if(left>right)
    //         {
    //             printf("can't find it\n");
    //         }
    //     }
    // return 0;
    // }


    // int main()
    // {
    //     char arr1[]="hello narcissus";
    //     char arr2[]="!!!!!!!!!!!!!!!";
    //     int left=0;
    //     int right=sizeof(arr1)/sizeof(arr1[0])-2;
        
    //     while(left<=right)
    //     {
    //     arr2[left]=arr1[left];
    //     arr2[right]=arr1[right];
    //     Sleep(1000);//停止一秒
    //     printf("%s\n",arr2);
    //     left++;
    //     right--;
    //     }
    //     return 0;
    // }



int main()
{
    int i;
    char passcode[20]={0};
    for(i=1;i<4;i++)
    {
        printf("certain your password\n");
        scanf("%s",passcode);
        if(strcmp(passcode,"123456" == 0))
        {
            printf("passcode is right\n");
            break;
        }
        else
        printf("passcode is wrong\n");
    }
    if(i==3)
    {
        printf("your passcode is wrong too many times,and the system is clossed\n");
    }
}


//test1
/*int main()
{
   int num1;
   int i=1;
   int b;
   scanf("%d",&num1);
   b=num1%2;
   if(num1>0 && num1<=100)
   
    if(b==1)
      printf("jishu\n");
      else
      printf("oushu\n");
    
   else
    printf("not match condition");
   
   return 0;
}*/
