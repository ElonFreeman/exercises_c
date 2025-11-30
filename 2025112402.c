#include <stdio.h>
#include <math.h>

double BMI(double height,double weight);
int output(double);
double bmi;

int main()
{
    double height=183,weight=83;
    
    bmi=BMI(height,weight);
    output(bmi);
    return 0;
}

double BMI(double height,double weight)
{
    bmi=weight/pow((height/100),2);
    return bmi;
}

int output(double bmi)
{
    int x=88,y=56;

    if(bmi<23.9)
    {
        return x;
    }

    else if(bmi>23.9)
    {
        return y;
    }
}