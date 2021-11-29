/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mayank Goyal
 */
 
#include<iostream>
#include<cmath>

using namespace std;

void calcandcompareroots(int a, int b, int c){

    float root1,root2,real,imaginary;

    int disc = (b*b)-(4*a*c);

    string msg = "The roots of the quadratic equation are";



    //comparing the values of disc

    if(disc == 0)

    {

        root1 =(float)(-b + sqrt(disc))/(2*a);

        cout << msg + " real and same.\nThe roots are root1=root2="<<root1 << endl;

    }

    else if(disc > 0)

    {

        root1 =(float)(-b+sqrt(disc))/(2*a);

        root2 =(float)(-b-sqrt(disc))/(2*a);

        cout << msg + " real and different.\nThe roots are root1="<<root1<<" and root2="<<root2 << endl;

    }

    else

    {

        real = (float) (-b/(2*a));

        imaginary =(float)(sqrt(-disc)/(2*a));

        cout << msg + " complex and different.\nThe roots are root1 = "<<real<<"+"<<imaginary<<"i"<< endl;

        cout << "root2 = " << real << "-" << imaginary << "i" << endl;

    }

}



int main()

{

    cout<<"The quadratic equation is of the form ax^2+bx+c \n";

    int a,b,c;

    cout<<"Enter the values for a, b and c for the quadratic equation:";

    cin>>a>>b>>c;

    

    if(a == 0)

    {

        cout<<"\nThe value of a cannot be zero";

    }

    else

    {

       calcandcompareroots(a,b,c);

       return 0; 

    }

}

