#include<stdio.h>
int main()
// {
//     char day;
//     printf("enter day");
//     scanf("%s",&day);

// switch (day){

//     case 'm' :printf("Monday");
//         break;
//     case 't' :printf("Tuesday");
//         break;
//     case 'w' :printf("wednesday\n");
//           break;
//     case 'T':printf("thrusday\n");
//           break;
//     case 'f' :printf("friday\n");
//          break;      
//     case 's':printf("saturday\n");
//           break;
//     case 'S':printf("sunday\n");
//           break;
//     default :printf("not a valid\n");
// }
// return 0;
// }
// {
//     int num;
//     printf("enter a number");
//     scanf("%d",&num);
//     if(num>=0)
//     {
//         printf("positive\n");
//         {
//             if(num%2==0)
//             {
//                 printf("even\n");
//             }
//             else
//             {
//                 printf("odd\n");
//             }
//         }

//     }else {
//         printf("negative\n");
//     }

// }
{
    int marks;
    printf("enter a number(1-100)");
    scanf("%d",&marks);
    // if(num>=30&&num<=100){
    //     printf("pass\n");
    // }
    // else if (num>0&& num<30)
    // {
    //     printf("fail"); 
    // }
    // else
    // {
    //     printf("not valid");
    // }
    // num<=30? printf("fail\n"): printf("pass\n");
    // return 0;
if(marks<30)
{
    printf("grade is C\n");
    }
    else if(marks>=30 && marks<=70)
{
    printf("garde is B \n");
}
 else if(marks>=70 && marks<=90)
 {
     printf("grade is A\n");
 }
else if(marks>=90 && marks<=100)
{
    printf("garde  is S\n");
}
else
{
    printf("invalid result\n");
}
return 0;

}
