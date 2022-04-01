/**
 * @file Attendance_main.c
 * @author pavan kalyan
 * @brief  Student attendance system for register name , check attendance.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>

void checkAttendance()
{
    int i;
    printf("\n         Total Present | Total Absent\n");   
    for ( i = 0; i < indexNumber; i++)
    {        
        printf("%s",stuName[i]);
        printf("              %d             %d\n",presentAttendance[i],absentAttendance[i]);                           
    }    
} // to check attendance


void addStudent()
{
    int i,num,add;   
    if (indexNumber==0)
    {
        printf("Enter how many students you want to add: ");
        fflush(stdin);
        scanf("%d",&num);
        for ( i = 0; i < num; i++)
        {        
            printf("\nEnter %d student name to add in attendance ragister: ",i+1);    
            fflush(stdin);
            gets(stuName[i]);  
            indexNumber++;              
        }           
    }
    else
    {        
        printf("Enter how many students you want to add: ");
        fflush(stdin);
        scanf("%d",&num);
        add=indexNumber+num;
        for ( i = indexNumber; i < add; i++)
        {        
            printf("\nEnter %d student name to add in attendance ragister: ",i+1);    
            fflush(stdin);
            gets(stuName[i]);  
            indexNumber++;              
        }
    }            
} // to add student name
