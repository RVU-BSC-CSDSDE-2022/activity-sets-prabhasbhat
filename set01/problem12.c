#include<stdio.h>

struct complex
{
   float real;
   float imaginary;
};
typedef struct complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n , Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
   int n;
   Complex result={0,0}; //result.imag=0 and result.real=0
   n=get_n();
   Complex c[n];
   input_n_complex(n,c);
   result=add_n_complex(n,c);
   output(n,c,result);
  
   return 0;
}
int get_n()
{
   int n;
   printf("Enter the size of the array\n");
  scanf("%d", &n);
  return n;
  }
  
Complex input_complex()
{
  Complex c;
  printf("Enter the real part\n");
  scanf("%f", &c.real);
  printf("Enter the imaginary part\n");
  scanf("%f", &c.imaginary);
  return c;
}

void input_n_complex(int n , Complex c[n])
{
  int i;
  for(i=0;i<n;i++)
    {
           c[i] =input_complex();
    }
}

Complex add(Complex a, Complex b)
{

  a.real=a.real+b.real;
  a.imaginary=a.imaginary+b.imaginary;
  return a;
}

Complex add_n_complex(int n, Complex c[n])
{
  Complex sum={0,0};
  for(int i=0; i<n; i++)
    {
       sum= add(sum, c[i]);
    }
  return sum;
}
void output(int n, Complex c[n], Complex result)
{
  for(int i=0;i<n;i++)
    {
     if(i<n-1)
     {
       printf("%.1f + i%.1f + ",c[i].real,c[i].imaginary);
     }
      else
     {
       printf("%.1f + i%.1f",c[i].real,c[i].imaginary);
     }
    }
  printf("is %.1f + i%.1f",result.real,result.imaginary); 
  
}