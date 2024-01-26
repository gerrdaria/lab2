# include <stdio.h>
# include <math.h>

float cos2(float x)
{
     float sum = 1;
     int j = 12;
     float perem = (-1)*x*x/2;
     for(int  n=2; n<j; n++)
     {
         sum  += perem;
         perem*=((-1)*x*x/(2*n*(2*n-1)));
      }
      return sum;
}
 





float module(float a)
{
     if(a<0)
     {
           a*= (-1);
     }
     return a;
}





float cos3(float x, float e)
{
     float sum = 1;
     int j = 12;
     int n =2;
     float perem = (-1)*x*x/2;
     while (module(perem)>e)
     {
         sum  += perem;
         perem*=((-1)*x*x/(2*n*(2*n-1)));
         n++;
      }
      return sum;

}  



int main() 
{
float x1 = 0;
float e;
printf ("Enter x: ");
if(!scanf("%f" , &x1))
{
    printf("ERROR\n");
    return 0;
}
float sum = cos2 (x1);
//float sum0 = cos (x1);
printf ("cos2: sum: %.6f\n", sum);
printf ("Enter e: ");
scanf ("%f", &e);
sum = cos3 (x1, e);
printf (" cos3: sum: %f\n", sum);
sum = cosf (x1);
printf ("cosf: sum: %f\n", sum);
return 0;
}
