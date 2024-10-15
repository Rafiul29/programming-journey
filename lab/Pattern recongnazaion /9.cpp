#include <bits/stdc++.h>
using namespace std;
int p = 0, q = 0, r = 0, aa = 0, bb = 0, cc = 0;
double b_old = 0.15, w1_old = 0.25, w2_old = 0.3, a = 0.1, b_new, w1_new,
       w2_new, dw1, dw2, db;
double e[10], Dw1[10], Dw2[10], Db[10], w1[10], w2[10], b[10], se[10];
// Weight updates
void update(double e, double x1, double x2)
{
  b_new = b_old + a * e;
  w1_new = w1_old + a * e * x1;
  w2_new = w2_old + a * e * x2;
  dw1 = w1_new - w1_old;
  dw2 = w2_new - w2_old;
  db = b_new - b_old;
  b_old = b_new;
  w1_old = w1_new;
  w2_old = w2_new;
}

int main()
{
  int i, j, k, x1[100], x2[100], t[100], g;
  double yin[100];
  for (g = 0; g < 2; g++)
  {
    cout << "Enter the input values and target value" << endl;
    for (i = 0; i < 4; i++)
    {
      cout << "x" << i + 1 << ": ";
      cin >> x1[i];
      cout << "y" << i + 1 << ": ";
      cin >> x2[i];
      cout << "target: ";
      cin >> t[i];
      cout << endl;
      yin[i] = b_old + w1_old * x1[i] + w2_old * x2[i];
      e[i] = t[i] - yin[i];
      se[i] = e[i] * e[i];
      if (e[i] != 0)
      {
        update(e[i], x1[i], x2[i]);
        w1[i] = w1_new;
        w2[i] = w2_new;
        b[i] = b_new;
        Dw1[i] = dw1;
        Dw2[i] = dw2;
        Db[i] = db;
      }
      else
      {
        w1[i] = w1_old;
        w2[i] = w2_old;
        b[i] = b_old;
        Dw1[i] = dw1;
        Dw2[i] = dw2;
        Db[i] = db;
      }
    }
    cout << "x1\t" << "x2\t" << "t\t" << "yin\t" << "db\t" << "dw1\t" << "dw2\t" << "b\t" << "w1\t" << "w2\t" << "E\t" << "SE\t " << endl;
    for (k = 0; k < 4; k++)
      printf("%d\t%d\t%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n ", x1[k], x2[k], t[k], yin[k], Db[k], Dw1[k], Dw2[k], b[k], w1[k], w2[k], e[k], se[k]);
    cout << endl;
  }
  return 0;
}