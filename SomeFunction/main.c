#include <stdio.h>
#include <stdlib.h>


int gcd(int u, int v);
float absoluteValue(float x);
float squareRoot(float x);



int main()
{
    int result = 0;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;

    int i1 = -716;
    float absolutevalueResult = 0.0;




    result = gcd(150,35);
    printf("The gcd of 150 and 35 is %d\n",result);

    result = gcd(1026,405);
    printf("The gcd of 1026 and 405 is %d\n",result);

    printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83,240));

   absolutevalueResult = absoluteValue (f1);
    printf ("result = %.2f\n",result);
    printf("f1 = %.2f\n",f1);

    result = absoluteValue (f2) + absoluteValue (f3);
    printf("result = %.2f\n",result);

    result = absoluteValue ((float) i1);
    printf("result = %.2f\n",result);

    result = absoluteValue (i1);
    printf ("result = %.2f\n",result);

    printf ("%.2f\n\n\n\n",absoluteValue (-6.0) / 4);

    printf("%.2f\n",squareRoot(12.0));
    printf("%.2f\n",squareRoot(20.0));
    printf("%.2f\n",squareRoot(30.0));
    printf("%.2f\n",squareRoot(40.));
    printf("%.2f\n",squareRoot(50.0));
    return 0;
}

int gcd(int u,int v)
{
    int temp;

    while(v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;

    }
    return u;
}

float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;


    if (x < 0)
    {
        printf ("Negative argument to squareRoot.\n");
        returnValue = -1,0;
    }
else
  //  if(returnValue != -1.0)
    {
    while (absoluteValue(guess * guess - x) >= epsilon)
         guess = (x / guess + guess ) / 2.0;

         returnValue = guess;
    }
    return returnValue;

}


float absoluteValue(float x)
{
    if(x < 0)
        x = -x;

    return x;
}
