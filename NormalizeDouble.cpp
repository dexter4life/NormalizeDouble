#include <cmath>
#include <cstdio>

double NormalizeDouble(double value, int place = 6)
{
    return (round(value*pow(10,place)))/pow(10,place);
}

int main()
{
  double normalizeValue=NormalizeDouble(112.3454,2);
  printf("current value: %f\n",112.3454);
  printf("Normalize value: %f\n",normalizeValue);
  return 0;
}
