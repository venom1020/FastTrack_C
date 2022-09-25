#include <stdio.h>
#include"day2.h"
#include<assert.h>

int main()
{   //1
    assert(15==sumOfNum(87));
    assert(15==sumOfNum(12345));

    //2
    assert(12345==reverseNum(54321));
    assert(654321==reverseNum(123456));

    //3
    assert(5==Occurence(11111,1));
    assert(3==Occurence(1223251,2));

    //4
    assert('y'==palindrome(12321));
    assert('y'==palindrome(56788765));
    assert('n'==palindrome(1231));

    //5
    //assert(printNprime(10));
    //assert(printNprime(25));

    //6
    assert(1234==sumofSeries(4));

    //7
    assert('y'==armstrong(153));
    assert('y'==armstrong(371));

    //8
    assert('y'==amicable(220,284));
    assert('y'==amicable(1184,1210));
    assert('n'==amicable(200,245));

    //9
    //menu(2,3);
    //menu(10,6);

    //10
    /*int choice=0;
    float edge=0,l=0,b=0,h=0,radius=0,height=0;;
    printf("\n Choose object to calculate volume\n1.Cube\n2.Cuboid\n3.Sphere\n4.Cylinder\n5.Cone: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:printf("\n Enter Dimensions for volume:");
           scanf("%f",&edge);
           printf("%f",volOfCube(edge));
           break;

    case 2:printf("\n Enter Dimensions for volume:");
           scanf("%f %f %f",&l,&b,&h);
           printf("%f",volOfCuboid(l,b,h));
           break;

    case 3:printf("\n Enter Dimensions for volume:");
           scanf("%f",&radius);
           printf("%f",volOfSphere(radius));
           break;

    case 4: printf("\n Enter Dimensions for volume:");
           scanf("%f %f",&radius,&height);
           printf("%f",volOfCylinder(radius,height));
           break;

    case 5:printf("\n Enter Dimensions for volume:");
           scanf("%f %f",&radius,&height);
           printf("%f",volOfCone(radius,height));
           break;

    default : break;
    }*/

    assert(elecBill(500)==750.0f);
    assert(elecBill(200)==200.0f);
    assert(elecBill(250)==275.0f);
    return 0;
}
