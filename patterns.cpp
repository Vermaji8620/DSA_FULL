// 1
// 2 3
// 3 4 5
// 4 5 6 7

// #include <iostream>
// using namespace std;

// int main()
// {
//     int p = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             // cout << p + 1;
//             cout << i + 1 + j;
//             cout << " ";
//             // p++;
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// 1
// 2 1
// 3 2 1
// 4 3 2 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int p;
//     for (int i = 0; i < 5; i++)
//     {
//         p = i + 1;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << p;
//             cout << " ";
//             p--;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// AAA
// BBB
// CCC

// #include <iostream>
// using namespace std;

// int main()
// {
//     char p = 65;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << p;
//             cout << " ";
//         }
//         p += 1;
//         cout << "\n";
//     }
//     return 0;
// }

// A B C
// A B C
// A B C

// #include <iostream>
// using namespace std;

// int main()
// {
//     char p;
//     for (int i = 0; i < 3; i++)
//     {
//         p = 65;
//         for (int j = 0; j < 3; j++)
//         {
//             cout << p;
//             cout << " ";
//             p += 1;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// A B C
// D E F
// G H I

// #include <iostream>
// using namespace std;

// int main()
// {
//     char p = 65;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << p;
//             cout << " ";
//             p += 1;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// ABC
// BCD
// CDE

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     char p = 65;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << p;
//             cout << " ";
//             p++;
//         }
//         cout << "\n";
//         p -= 2;
//     }

//     return 0;
// }

// 123
// 234
// 345

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int p = 1;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << p;
//             cout << " ";
//             p++;
//         }
//         cout << "\n";
//         p -= 2;
//     }
//     return 0;
// }

// A
// BB
// CCC

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     char p = 65;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << p;
//             cout << " ";
//         }
//         cout << "\n";
//         p++;
//     }
//     return 0;
// }

// A
// BC
// DEF
// GHIJ

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     char p = 65;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << p;
//             cout << " ";
//             p++;
//         }
//         cout << "\n";
//         // p++;
//     }
//     return 0;
// }

// A
// BC
// CDE
// DEFG

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     char p = 65;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << p;
//             cout << " ";
//             p++;
//         }
//         cout << "\n";
//         p -= i;
//     }
//     return 0;
// }

// D
// CD
// BCD
// ABCD

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     char p = 68;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << p;
//             cout << " ";
//             p++;
//         }
//         cout << "\n";
//         p -= (i + 2);
//     }
//     return 0;
// }

//     *
//    **
//   ***
//  ****
// *****

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (i + j >= 4)
//             {
//                 cout << (" * ");
//             }
//             else
//             {
//                 cout << "   ";
//             }
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " enter n" << endl;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i + j >= n - 1)
//             {
//                 cout << ("   ");
//             }
//             else
//             {
//                 cout << " * ";
//             }
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// ****
//  ***
//   **
//    *

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (i < j)
//             {
//                 cout << (" * ");
//             }
//             else
//             {
//                 cout << "   ";
//             }
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// 1111
//  222
//   33
//    4

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (i < j)
//             {
//                 cout << i + 1;
//                 cout << " ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//     }

//     return 0;
// }

//    1
//   22
//  333
// 4444

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i + j >= 3)
//             {
//                 cout << i+1;
//                 cout << " ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

//       1
//     2 3
//   4 5 6
// 7 8 9 10

// #include <iostream>
// using namespace std;

// int main()
// {
//     int p = 0;
//     for (int i = 0; i <= 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i + j >= 4)
//             {
//                 cout << p + 1;
//                 cout << " ";
//                 p++;
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 0; i <= 4; i++)
//     {
//         int p = 1;
//         for (int j = 0; j <= 4; j++)
//         {
//             if (i + j > 4)
//             {
//                 cout << p;
//                 p += 1;
//                 cout << " ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int p = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         p = i + 1;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << p;
//             p--;
//             cout << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int q = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         int p = 1;
//         q = i + 1;
//         for (int j = 0; j < 7; j++)
//         {
//             if ((j - i <= 3) && (j >= 3))
//             {
//                 cout << q;
//                 q--;
//                 cout << " ";
//             }
//             else if ((i + j >= 3) && (j <= 3))
//             {
//                 cout << p;
//                 p += 1;
//                 cout << " ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// FIBONACCI SERIES---------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " enter upto which you want" << endl;
//     int ss;
//     cin >> ss;
//     int a = 0;
//     int b = 1;
//     cout << a << " " << b << " ";
//     int c;
//     int i = 0;
//     while (i != ss)
//     {
//         c = a + b;
//         cout << c << " ";
//         a = b;
//         b = c;
//         i++;
//     }

//     return 0;
// }

// SUM AND PRODUCT OF DIGITS-----------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     int n;
//     cout << " enter the number to find out " << endl;
//     cin >> n;
//     int d;
//     int sum = 0;
//     int mul = 1;
//     int nn = n;
//     while (nn != 0)
//     {
//         d = nn % 10;
//         sum = sum + (d);
//         mul *= d;
//         nn /= 10;
//     }
//     cout << " Sum is " << sum << endl;
//     cout << " product is " << mul;

//     return 0;
// }

// COUNTING NUMBER OF 1's IN BINARY------------------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " enter the number " << endl;
//     int n;
//     int count = 0;
//     cin >> n;
//     int arr[30];
//     int rem;
//     int i = 0;
//     while (n != 0)
//     {
//         rem = n % 2;
//         if (rem == 1)
//         {
//             count++;
//         }
//         arr[i] = rem;
//         n /= 2;
//         i++;
//     }

//     cout << " the count is " << count << endl;
//     return 0;
// }

// BINARY TO DECIMAL------------------------------------------------------------------------
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " enter the number to convert to binary " << endl;
//     int bit;
//     int sum = 0;
//     int i = 0;
//     int a;
//     cin >> a;
//     while (a != 0)
//     {
//         bit = a % 10;
//         sum = sum + (bit * pow(2, i));
//         i++;
//         a /= 10;
//     }
//     cout << " the number is " << sum;
//     return 0;
// }

// DECIMAL TO BINARY USING VECTOR-STL-------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// using namespace std;

// void display(vector<long long int> &vver)
// {
//     for (int i = vver.size() - 1; i >= 0; i--)
//     {
//         cout << vver[i] << " ";
//     }
// }

// void display2(vector<long long int> &veccc)
// {
//     vector<long long int>::iterator iter;
//     iter = veccc.begin();
//     for (iter = veccc.end() - 1; iter >= veccc.begin(); iter--)
//     {
//         cout << (*iter) << " ";
//     }
// }

// int main()
// {
//     vector<long long int> vec2;
//     long long int number;
//     cout << " enter the number " << endl;
//     cin >> number;
//     long long int rem;
//     while (number != 0)
//     {
//         rem = number % 2;
//         vec2.push_back(rem);
//         number /= 2;
//     }

//     // now the two different ways to print the elements present in the vector 'vec2'
//     display(vec2);
//     cout << "\n";
//     display2(vec2);
//     return 0;
// }

// REVERSE INTEGER--------------------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " enter the number" << endl;
//     int number;
//     vector<int> vett;
//     cin >> number;
//     int rem;
//     int sum = 0;
//     while (number != 0)
//     {
//         rem = number % 10;
//         sum = (sum * 10) + rem;
//         vett.push_back(rem);
//         number = number / 10;
//     }
//     cout << " the sum is" << endl;
//     cout << sum << endl;
//     vector<int>::iterator iter;
//     for (iter = vett.begin(); iter <= vett.end() - 1; iter++)

//     {
//         cout << (*iter);
//     }
//     return 0;
// }

// CODE TO FIND THE POWER OF 2 FOR A GIVEN NUMBER-----------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << " enter the number to check" << endl;
//     int n;
//     cin >> n;
//     int rem;
//     int i = 0;
//     while (n != 1)
//     {
//         if (n == 0)
//         {
//             return false;
//         }
//         rem = (n % 10);
//         if (rem % 2 == 0)
//         {
//             n /= 2;
//             i++;
//         }
//         else
//         {
//             cout << " Not a power of 2" << endl;
//             break;
//         }
//     }
//     if (n == 1)
//     {
//         cout << "the power of 2 is " << i;
//     }
// }

// CODE FOR COMBINATION(permutation& combination)-----------------------------------------------------------------
// #include <iostream>
// using namespace std;

// int factfact(int m)
// {
//     int num = 1;
//     for (int i = 0; i < m; i++)
//     {
//         num *= (m - i);
//     }
//     return num;
// }

// int main(int argc, char const *argv[])
// {
//     cout << " enter first number greater than second one" << endl;
//     int fr;
//     cin >> fr;
//     cout << " eneter second numer" << endl;
//     int sec;
//     cin >> sec;
//     int p, q, r;
//     if (fr > sec)
//     {
//         p = factfact(fr);
//         q = factfact(sec);
//         r = factfact(fr - sec);
//         cout << " the combination is " << p / (q * r);
//     }
//     else
//     {
//         cout << " invalid";
//     }
//     return 0;
// }

// MAX AND MIN ELEMENT OF AN ARRAY-----------------------------------------------------------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[6];
//     cout << " apna elements enter kro" << endl;
//     for (int i = 0; i < 6; i++)
//     {
//         cin >> arr[i];
//     }

//     int max = arr[0], min = arr[0];
//     for (int i = 0; i < 6; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << "max is " << max << endl;
//     cout << "min is " << min;
//     return 0;
// }
//
// SWAPPING OF THE ELEMENTS-------------------------------------------------
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vcc = {1, 2, 3, 5, 6, 7, 9, 8, 4, 10};
//     vector<int>::iterator inte;
//     int arr[9] = {1, 2, 3, 5, 6, 7, 9, 8, 4};
//     int ttt;
// for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i += 2)
// {
//     ttt = arr[i];
//     arr[i] = arr[i + 1];
//     arr[i + 1] = ttt;
//     cout << arr[i] << " " << arr[i + 1] << " ";
// }

// cout << endl;

// for (inte = vcc.begin(); inte != vcc.end(); inte++)
// {
//     cout << *inte << " ";
// }
//     cout << "\n";
//     int temp;
//     for (int i = 0; i < vcc.size(); i += 2)
//     {
//         if (i + 1 < vcc.size())
//         {
//             temp = vcc[i];
//             vcc[i] = vcc[i + 1];
//             vcc[i + 1] = temp;
//             cout << vcc[i] << " " << vcc[i + 1] << " ";
//         }
//     }
//     cout << endl;
//     cout << vcc.size();
//     return 0;
// }
//
//  PRINTING THE COMMON ELEMENTS.......................
// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> vectvect1{1, 2, 3, 4};
//     vector<int> vectvect2{2, 2, 2, 3, 3};
//     set<int> setset;
//     set<int>::iterator setiter;
//     for (int i = 0; i < vectvect1.size(); i++)
//     {
//         for (int j = 0; j < vectvect2.size(); j++)
//         {
//             if (vectvect1[i] < vectvect2[j])
//             {
//                 break;
//             }
//             else if (vectvect1[i] == vectvect2[j])
//             {
//                 setset.insert(vectvect2[j]);
//             }
//             else if (vectvect2[j] < vectvect1[i])
//             {
//                 continue;
//             }
//         }
//     }
//     for (setiter = setset.begin(); setiter != setset.end(); setiter++)
//     {
//         cout << *setiter << " ";
//     }
//     return 0;
// }

// FINDING THE PAIR OF SUM----------------------------
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {1, 2, 5, 4, 3};
//     vector<int> vetct;
//     cout << " enter the number for which you want the pair" << endl;
//     int num;
//     cin >> num;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if ((arr[i] + arr[j]) == num)
//             {
//                 for (int k = 0; k < 2; k += 2)
//                 {
//                     vetct.push_back(min(arr[i], arr[j]));
//                     vetct.push_back(max(arr[i], arr[j]));
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < vetct.size(); i++)
//     {
//         cout << vetct[i]<< " ";
//     }
//     return 0;
// }

// TAKING 3 ELEMENTS AS IN THE PREVIOUS PROGRAM----
// #include <iostream>
// #include <vector>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> vectvect1{1, 2, 3, 4, 5, 6, 7, 8, 9};
//     vector<int> vectaking;
//     vector<int>::iterator vectiter;
//     cout << " enter to check the sum" << endl;
//     int num;
//     cin >> num;
//     for (int i = 0; i < vectvect1.size(); i++)
//     {
//         for (int j = 0; j < vectvect1.size(); j++)
//         {
//             for (int k = 0; k < vectvect1.size(); k++)
//             {
//                 if ((i != j && i != k && j != k))
//                 {
//                     if (vectvect1[i] + vectvect1[j] + vectvect1[k] == num)
//                     {
//                         vectaking.push_back(vectvect1[i]);
//                         vectaking.push_back(vectvect1[j]);
//                         vectaking.push_back(vectvect1[k]);
//                         for (vectiter = vectaking.begin(); vectiter != vectaking.end(); vectiter++)
//                         {
//                             cout << *vectiter << " ";
//                         }
//                         cout << "\n";
//                         vectaking.clear();
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }

// PUTTING ALL THE 0'S AT ONE SIDE AND ALL THE 1'S AT ANOTHER SIDE-(just use the sorting algorithm or write the below long code)---
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
//     int left = 0, right = 8 - 1;
//     while (left < right)
//     {
//         while ((arr[left] == 0) && (left < right))
//         {
//             left++;
//         }
//         while ((arr[right] == 1) && (left < right))
//         {
//             right--;
//         }
//         if (left < right)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
//     for (int h = 0; h < sizeof(arr) / sizeof(arr[0]); h++)
//     {
//         cout << arr[h]<<  " ";
//     }
//     return 0;
// }

// BINARY SEARCH CODE-------------
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> vectvect{10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
//     vector<int>::iterator iter;
//     int start = 0;
//     int num = 15;
//     int end = vectvect.size() - 1;
//     int middle;
//     middle = (start + end) / 2;
//     while (start <= end)
//     {
//         if (vectvect[middle] == num)
//         {
//             // return middle;
//             cout << vectvect[middle];
//             break;
//         }
//         else if (num > vectvect[middle])
//         {
//             start = middle + 1;
//         }
//         else
//         {
//             end = middle - 1;
//         }
//         middle = (start + end) / 2;
//     }
//     return -1;
// }.

// SWAPPING THE ALTERNATE ELEMENTS--------------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i += 2)
//     {
//         swap(arr[i], arr[i + 1]);
//     }
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// DOUBT----------------
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     int arr[11] = {6, 1, 2, 3, 2, 3, 1, 1, 1, 2, 3}; // 1-----4//////////2-----3//////3-----3///////
//     int count = 0;
//     set<int> setset1;
//     set<int>::iterator etietr;
//     int arrr[15];
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//     {
//         count++;
//         for (int j = i + 1; j < size(arr); j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         setset1.insert(arr[i]);
//         arrr[i] = count;
//         count = 0;
//     }
//     for (etietr = setset1.begin(); etietr != setset1.end(); etietr++)
//     {
//         cout << *etietr << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < setset1.size(); i++)
//     {
//         cout << arrr[i] << " ";
//     }
//     return 0;
// }

// PRINTING ELEMENTS THAT OCCUR MORE THAN ONCE------------
// #include <iostream>
// #include <set>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     set<int> setting;
//     set<int>::iterator ioter;
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     for (int i = 0; i < size(arr); i++)
//     {
//         for (int j = i + 1; j < size(arr); j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 setting.insert(arr[i]);
//             }
//         }
//     }
//     for (ioter = setting.begin(); ioter != setting.end(); ioter++)
//     {
//         cout << *(ioter) << " ";
//     }
//     return 0;
// }

// FIRST AND THE LAST INDEX OF THE ELEMENT IN AN ARRAY---------------
// #include <iostream>
// #include <vector>
// using namespace std;

// int firstoccur(int arr[], int size, int num)
// {
//     int start = 0;
//     int ans;
//     int end = num - 1;
//     int middle = (start + end) / 2;
//     while (start <= end)
//     {
//         if (num > arr[middle])
//         {
//             start = middle + 1;
//         }
//         else if (num < arr[middle])
//         {
//             end = middle - 1;
//         }
//         else
//         {
//             ans = middle;
//             end = middle - 1;
//         }
//         middle = (start + end) / 2;
//     }
//     return ans;
// }

// int lastoccur(int arr[], int size, int num)
// {
//     int start = 0;
//     int ans;
//     int end = num - 1;
//     int middle = (start + end) / 2;
//     while (start <= end)
//     {
//         if (num > arr[middle])
//         {
//             start = middle + 1;
//         }
//         else if (num < arr[middle])
//         {
//             end = middle - 1;
//         }
//         else
//         {
//             ans = middle;
//             start = middle + 1;
//         }
//         middle = (start + end) / 2;
//     }
//     return ans;
// }

// int main(int argc, char const *argv[])
// {
//     int num = 8;
//     int arr[8] = {8, 8, 8, 8, 2, 4, 9};
//     // cout << "firstoccur is at " << firstoccur(arr, 8, num);
//     // cout << endl;
//     // cout << "lastoccur is at " << lastoccur(arr, 8, num);

//     // OR WE CAN MAKE PAIR AND PRINT -------------------

//     pair<int, int> ppp;
//     ppp.first = firstoccur(arr, 8, num);
//     ppp.second = lastoccur(arr, 8, num);
//     cout << ppp.first;
//     cout << endl;
//     cout << ppp.second;
//     cout << endl;
//     // FINDING THE NUMBER OF OCCUERENCES ----
//     int occur = ppp.second - ppp.first + 1;
//     cout << occur;
//     return 0;
// }

// MOUNTAIN THEORY(------ FINDING MAX ELEMENT FROM AN ARRAY--------) ->>>> DRY RUN IT TO UNDERSTAND IT COMPLETELY--->>>

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int s = 0;
//     int arr[8] = {1, 2, 8, 9, 10, 23, 18, 15};
//     int e = size(arr) - 1;
//     int mid;
//     while (s < e)
//     {
//         mid = (s + e) / 2;
//         if (arr[mid] < arr[mid + 1])
//         {
//             s = mid+1;
//         }
//         else
//         {
//             e = mid;
//         }
//     }
//     cout << arr[s];
//     return 0;
// }

// FINDING MINIMUM ELEMENT USING BINARY SEARCH--------------
// #include <iostream>
// using namespace std;

// int getpivot(int arr[], int n)
// {
//     int s = 0;
//     int mid;
//     int e = n - 1;
//     while (s < e)
//     {
//         mid = (s + e) / 2;
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//     }
//     return s;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[11] = {3, 4, 5, 6, 7, 1, 2, 8, 9, 10, 11};
//     cout << "pivot index is " << getpivot(arr, 11) << endl;
//     cout << "pivot element is " << arr[getpivot(arr, 11)] << endl;
//     return 0;
// }

// SEARCHING A PARTICULAR ELEMENT IN AN ARRAY-------
// the first thing that is to search is the minimum element, and then see that in which line do we need to execute the binary search code....in the '0'---to----'index of the found element-1' //////////////  or  ////// in the 'index of the found element' to the 'total size of the array'......
// #include <iostream>
// using namespace std;

// // finding out the pivot point
// int findpivot(int arr[], int size)
// {
//     int s = 0;
//     int e = size - 1;
//     int mid;
//     while (s < e)
//     {
//         mid = (s + e) / 2;
//         if (arr[mid] <= arr[0])
//         {
//             e = mid;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return s;
// }

// // searching before or after that pivot point----------
// int binarysearch(int arr[], int s, int e, int target)
// {
//     int mid;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         if (target < arr[mid])
//         {
//             e = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             return mid;
//             break;
//         }
//     }
//     return -1;
// }

// int main(int argc, char const *argv[])
// {
//     int arr[10] = {3, 4, 5, 6, 1, 2, 7, 8, 9, 10};
//     cout << " The minimum element index is " << findpivot(arr, 10);
//     int indx;
//     cout << endl;
//     cout << " the minimum element present is " << arr[findpivot(arr, 10)];
//     cout << endl;
//     cout << " enter the element that you want to search " << endl;
//     int target;
//     cin >> target;
//     if ((target >= arr[findpivot(arr, 10)]) && (target <= arr[size(arr) - 1]))
//     {
//         indx = binarysearch(arr, findpivot(arr, 10), (size(arr)), target);
//     }
//     else if ((0 < target) && (target <= arr[findpivot(arr, 10)]))
//     {
//         indx = binarysearch(arr, 0, (findpivot(arr, 10) - 1), target);
//     }
//     cout << " the element " << target << " that you want to search is present at " << indx << endl;
//     return 0;
// }

// SQUARE ROOT OF A NUMBER-----------
// #include <iostream>
// using namespace std;

// long long int sqrt(int nmm)
// {
//     int s = 2;
//     int ans;
//     int e = nmm - 1;
//     long long int mid;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         if ((mid * mid) > nmm)
//         {
//             e = mid - 1;
//         }
//         else if ((mid * mid) < nmm)
//         {
//             s = mid + 1;
//             ans = mid;
//         }
//         else
//         {
//             return mid;
//             break;
//         }
//     }
//     return ans;
// }

// double moreprecision(int n, int precision, int tempsol)
// {
//     double factor = 1;
//     double ans = tempsol;

//     for (int i = 0; i < precision; i++)
//     {
//         factor /= 10;
//         for (double j = ans; j * j < n; j += factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main(int argc, char const *argv[])
// {
//     cout << " enter the number" << endl;
//     int n;
//     cin >> n;
//     int tempsol = sqrt(n);
//     cout << " answer is " << moreprecision(n, 3, tempsol);
//     return 0;
// }

// SELECTION SORTING
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int arr[5] = {64, 25, 12, 11, 22};
//     int flag;
//     int temp;
//     for (int i = 0; i < 4; i++)
//     {
//         flag = i;
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (arr[j] < arr[flag])
//             {
//                 flag = j;
//             }
//         }
//         if (flag != i)
//         {
//             swap(arr[flag], arr[i]);
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// INSERTION SORTING ---------------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[6] = {20, 1, 7, 6, 14, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         while ((j >= 0) && (arr[j] > temp))
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// BUBBLE SORTING --------
//**********************************************************************************************************
// #include <iostream>
// using namespace std;

// bool ispossible(int arr[], int m, int n, int mid)
// {
//     int sumsum = 0;
//     int countcount = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if ((sumsum += arr[i]) <= mid)
//         {
//             sumsum += arr[i];
//         }
//         else
//         {
//             countcount++;
//             sumsum = arr[i];
//             if ((countcount > m) || (arr[i] >= mid))
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main(int argc, char const *argv[])
// {
//     int arr[4] = {10, 20, 30, 40};
//     int s = 0;
//     int m = 2;
//     int ans;
//     int n = 4;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     int e = sum;
//     int mid;
//     while (s <= e)
//     {
//         mid = (s + (e - s) / 2);
//         if (ispossible(arr, m, n, mid))
//         {
//             e = mid - 1;
//             ans = mid;
//             cout << "now end is " << e << "..." << endl;
//             cout << "STORED ANSWER IS" << ans << " " << endl;
//         }
//         else
//         {
//             s = mid + 1;
//             cout << " now start is " << s << "......." << endl;
//         }
//     }
//     cout << endl;
//     cout << ans;
//     return ans;
// }
// ************************************************************************************************************************

// CODE TO REVERSE A VECTOR USING BINARY TECHNIQUE----
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> reverse(vector<int> &cpyvctr, int numnum)
// {int s = numnum;int e = cpyvctr.size() - 1;while (s < e){swap(cpyvctr.at(s),cpyvctr.at(e));s++; e--;}return cpyvctr;}

// void printfinalans(vector<int > vctreturn){
//     vector<int >:: iterator iter; for(iter=vctreturn.begin(); iter!=vctreturn.end(); iter++){cout<< (*iter)<< " ";}
// }

// int main()
// {vector<int> vctr{1, 5, 7, 9, 4, 3, 6};cout<< " Enter the index from which you want to reverse ";int numnum; cin>>numnum;vector<int> vctreturn = reverse(vctr, numnum);printfinalans(vctreturn); return 0;}

// REVERSING AND MERGING OF ARRAYS----------------
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> reverse(vector<int> vctvctr, int countt)
// {
//     int s = countt;
//     int e = vctvctr.size() - 1;
//     while (s < e)
//     {
//         int temp = vctvctr.at(s);
//         vctvctr.at(s) = vctvctr.at(e);
//         vctvctr.at(e) = temp;
//         s++;
//         e--;
//     }
//     return vctvctr;
// }

// void forprinting(vector<int> vctvctvct)
// {
//     vector<int>::iterator ietr;
//     for (ietr = vctvctvct.begin(); ietr != vctvctvct.end(); ietr++)
//     {
//         cout << (*ietr) << " ";
//     }
// }

// vector<int> merging(vector<int> vct1, vector<int> vct2, int m, int n)
// {
//     vector<int> vctrnew;
//     for (int i = 0; i < vct1.size(); i++)
//     {
//         vctrnew.push_back(vct1.at(i));
//     }
//     for (int i = 0; i < vct2.size(); i++)
//     {
//         vctrnew.push_back(vct2.at(i));
//     }
//     sort(vctrnew.begin(), vctrnew.end());
//     return vctrnew;
// }

// int main()
// {
//     vector<int> vctr{1, 5, 4, 8, 9, 6, 3, 7};
//     cout << "enter the index from which you want to reverse ";
//     int count;
//     cin >> count;
//     vector<int> vctvct = reverse(vctr, count);
//     cout << "Printing the reversed array---" << endl;
//     forprinting(vctvct);
//     vector<int> vctr2{10, 11, 12, 13, 14, 15, 16};
//     cout << endl;
//     int s1 = vctr.size();
//     int s2 = vctr2.size();
//     vector<int> takemerger = merging(vctr, vctr2, s1, s2);
//     cout << "Printing the merged array------" << endl;
//     forprinting(takemerger);
//     return 0;
// }

// MOVE ZEROES------I/P--> {0,1,0,3,12}.......O/P---> {1,3,12,0,0}
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {0, 1, 3, 0, 12};
//     int flag;
//     int i = 0;
//     for (int j = i + 1; j < 5; j++)
//     {
//         if (arr[j] != 0)
//         {
//             swap(arr[i], arr[j]);
//             i++;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ROTATING AN ARRAY (USING VECTOR)----------
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> vctr{1, 2, 3, 4, 5, 6, 7};
//     cout << " enter the number" << endl;
//     int num;
//     cin >> num;
//     rotate(vctr.begin(), vctr.begin() + num, vctr.end());
//     for (int i = 0; i < 7; i++)
//     {
//         cout << vctr.at(i) << " ";
//     }
//     return 0;
// }

// ROTATING AN ARRAY---------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[7] = {0, 1, 2, 3, 4, 5, 6};
//     cout << " enter the number " << endl;
//     int num;int arrt[7];
//     cin >> num;
//     for (int i = 0; i < size(arr); i++)
//     {
//         arrt[(i + num) % (size(arr))] = arr[i];
//     }
//     for (int i = 0; i < size(arr); i++)
//     {
//         cout << arrt[i] << " ";
//     }

//     return 0;
// }

// CHECKING FOR ROTATED OR SORTED ARRAY-----------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {3, 4, 8, 1, 5};
//     int count = 0;
//     int n = size(arr);
//     // niche wala case tuta hua wala graph k liye hai-----(rotated)
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i - 1] > arr[i])
//         {
//             count++;
//         }
//     }
//     // yeh case linearly growing wale graph k liye hai-----------(sorted)
//     if (arr[0] < arr[n - 1])
//     {
//         count++;
//     }

//     // ab agar maan lete hai ki sbhi elements same hai ...then -------count to 0 hi reh jayega ...but that is a valid case ---so <=1 pe count ko check krna hoga---
//     if (count <= 1)
//     {
//         cout << "Yes";
//     }
//     return 0;
// }

// eg I/P {6,7,8,9}///{1,2,3,5}......O/P {8,0,2,4}...........(1st way)

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[1] = {6};
//     int arr2[4] = {1,2,3,4};
//     int n = size(arr);
//     int m = size(arr2);
//     int s = 0;
//     int p = pow(10, (n - 1));
//     int q = pow(10, (m - 1));
//     for (int i = 0; i < n; i++)
//     {
//         s += arr[i] * p;
//         p /= 10;
//     }
//     cout << endl;
//     for (int i = 0; i < m; i++)
//     {
//         s += arr2[i] * q;
//         q /= 10;
//     }

//     cout << s;
//     return 0;
// }

// eg I/P {6,7,8,9}///{1,2,3,5}......O/P {8,0,2,4}...........(2nd way)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int a[4] = {3, 2, 3, 4};
//     int b[6] = {0, 9, 6, 7, 8, 9};
//     int n = size(a);
//     int m = size(b);
//     int i = n - 1;
//     int j = m - 1;
//     int carry = 0;
//     vector<int> ans;
//     while (i >= 0 && j >= 0)
//     {
//         int val1 = a[i];
//         int val2 = b[j];
//         int sum = val1 + val2 + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
//     cout << endl;

//     // first case
//     while (i >= 0)
//     {
//         int sum = a[i] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//     }

//     // second case
//     cout << endl;
//     while (j >= 0)
//     {
//         int sum = b[j] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         j--;
//     }
//     cout << endl;
// if still any carry is left------
//     while (carry != 0)
//     {
//         int sum = carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//     }

//     reverse(ans.begin(), ans.end());
//     for (int i = 0; i < 6; i++)
//     {
//         cout << ans.at(i) << " ";
//     }

//     return 0;
// }

// REVERSING A STRING
// #include <iostream>
// #include <vector>
// using namespace std;

// void reverse(vector<char> &vctrr)
// {
//     int s = 0;
//     int e = vctrr.size() - 1;
//     while (s < e)
//     {
//         swap(vctrr.at(s++), vctrr.at(e--));
//     }
//     for (int i = 0; ; i++)
//     {
//         cout<< vctrr.at(i)<< "";
//     }

// }

// int main(int argc, char const *argv[])
// {
//     vector<char> vctr;
//     cout << " enter the string ";
//     char chch[20];
//     cin >> chch;
//     for (int i = 0; chch[i] != '\0'; i++)
//     {
//         vctr.push_back(chch[i]);
//     }
//     reverse(vctr);
//     return 0;
// }

// PALINDROME OF A STRING -------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " enter the string " << endl;
//     char strr[5];
//     cin >> strr;
//     for (int i = 0; i < 5; i++)
//     {
//         strr[i] = tolower(strr[i]);
//     }
//     cout<< strr<< endl;
//     int s = 0;
//     int e = size(strr) - 1;
//     int flag = 0;
//     while (s < e)
//     {
//         if (!(strr[s++] == strr[e--]))
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 1)
//     {
//         cout << " Not palindrome " << endl;
//     }
//     else
//     {
//         cout << " palindrome string " << endl;
//     }
//     return 0;
// }

//  REPLACING A PART OF THE STRING WITH SOMETHING ELSE-------(AND PRINTING AFTER STORING IT INSIDE ANOTHER STRING )
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " Enter the string" << endl;
//     char strr[50];
//     gets(strr);
//     string namee;
//     for (int i = 0; i < strlen(strr); i++)
//     {
//         if (strr[i] == ' ')
//         {
//             // ek sath teeno ko nai push kr payenge kyunki 'strr' ek character array hai ..iske andar sirf character wise cheez hi store ho skta hai------
//             namee.push_back('@');
//             namee.push_back('4');
//             namee.push_back('0');
//         }
//         else
//         {
//             namee.push_back(strr[i]);
//         }
//     }
//     for (int i = 0; i < namee.length(); i++)
//     {
//         cout << namee[i] << "";
//     }

//     return 0;
// }

// REMOVE ALL OCCURENCES OF A SUBSTRING -------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " enter the string " << endl;
//     string str;
//     cin >> str;
//     cout << " enter the string to search" << endl;
//     string fin;
//     cin >> fin;
//     while ((str.find(fin) < str.length()))
//     {
//         str.erase(str.find(fin), fin.length()); //  2 argument leta hai,,,,pehla wo index position jaha pe delete hone wala word preent hai, dusra jo word hmko khojna hai, uska length
//     }
//     cout << str;
//     return 0;
// }

// REMOVE ALL OCCURENCES OF A SUBSTRING (REVERSE SUNSTRING SHOULD ALSO BE TAKEN INTO CONSIDERATION)
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     cout << " enter the main string " << endl;
//     string mainstr;
//     cin >> mainstr;
//     cout << " enter the string to be checked with " << endl;
//     string tocheck;
//     cin >> tocheck;
//     string mainstrrev;
//     for (int i = tocheck.length() - 1; i >= 0; i--)
//     {
//         mainstrrev.push_back(tocheck[i]);
//     }
//     while (mainstr.find(tocheck) < mainstr.length())
//     {
//         mainstr.erase(mainstr.find(tocheck), tocheck.length());
//     }
//     while (mainstr.find(mainstrrev) < mainstr.length())
//     {
//         mainstr.erase(mainstr.find(mainstrrev), mainstrrev.length());
//     }
//     cout << mainstr;
//     cout << endl;

//     return 0;
// }

// *****************+++++++++++++++************************************+++++++++++++++*******************
// AABBBCCCD---A2B3C3D
// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[]){
//     char str[9];cout<< " enter the string "<< endl;
//     cin>> str;
//     int i, c=0; int intarr[4]; char chararr[4]; int s=0; int count=1; int ptr=0;
//     while((s||ptr)< size(str)){
//         ptr=s+1;
//         if(str[s]==str[ptr]){
//             cout<< " first";
//             while(str[s]==str[ptr]){
//                 count++; ptr++;
//             }
//         }
//         else if(s==size(str)){
//             cout<< " second";
// chararr[c]=str[s]; intarr[i]=count;
//         }
//         else{
//             cout<< " third";
//             chararr[c++]=str[s]; intarr[i++]=count; s=ptr; ptr=s+1; count =1;
//         }
//     }
//     return 0;
// }
// *****************+++++++++++++++************************************+++++++++++++++*******************

// NORMAL PRINTING OF 2D ARRAYS
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[3][3];
//     int max = 0;
//     int sumarr[3];
//     int maxrow ;int sum = 0;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             // cout << arr[row][col] << " ";
//             sum += arr[row][col];
//         }
//         sumarr[row] = sum;
//         if (max < sumarr[row])
//         {
//             max = sumarr[row];
//             maxrow = row;
//         }
//         sum = 0;
//     }
//     cout << " maximum summation is " << max << endl;
//     cout << " maximum summation is at " << maxrow << endl;

//     return 0;
// }

// PRINTING ARRAY ELEMENTS IN DIFFERENT(alternate opposite) DIRECTIONS---------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int j = 0; j < 3; j++)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             if ((j % 2) == 0)
//             {
//                 cout << arr[i][j]<<" ";
//             }
//             else
//             {
//                 cout << arr[2 - i][j]<< " ";
//             }
//         }
//     }

//     return 0;
// }

// vvv. imp-----------[SPIRAL PRINT ]------
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[3][3];
//     vector<int> vctr;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int row = size(arr);
//     int col = size(arr[0]);
//     int count = 0;
//     int total = row * col;
//     int startingrow = 0;
//     int startingcol = 0;
//     int endingrow = row - 1;
//     int endingcol = col - 1;
//     while (count < total)
//     {
//         for (int index = startingcol; count < total && index <= endingcol; index++)
//         {
//             vctr.push_back(arr[startingrow][index]);
//             count++;
//         }
//         startingrow++;
//         for (int index = startingrow; count < total && index <= endingrow; index++)
//         {
//             vctr.push_back(arr[index][endingcol]);
//             count++;
//         }
//         endingcol--;
//         for (int index = endingcol; count < total && index >= startingcol; index--)
//         {
//             vctr.push_back(arr[endingrow][index]);
//             count++;
//         }
//         endingrow--;
//         for (int index = endingrow; count < total && index >= startingrow; index--)
//         {
//             vctr.push_back(arr[index][startingcol]);
//             count++;
//         }
//         startingcol++;
//     }
//     for (int i = 0; i < vctr.size(); i++)
//     {
//         cout << vctr.at(i) << " ";
//     }

//     return 0;
// }

// vvv. imp [MATRIX ROTATION]---

// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arrint[3][3];int newint[3][3];
//     int n = 2;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arrint[i][j];
//         }
//     }
//     cout << "normal matrix is ------------" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arrint[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             newint[i][j] = arrint[n - j][i];
//         }
//     }

//     cout << "rotated matrix is------------" << endl;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << newint[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// v.v.imp matrix rotation(same space)(same space complexity)
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int max;
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for (int i = 0; i < 3/2; i++)
//     {
//         for (int j = i; j < 2-i; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[2- j][i];
//             arr[2- j][i] = arr[2- i][2- j];
//             arr[2- i][2- j] = arr[j][2- i];
//             arr[j][2- i] = temp;
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// BINARY SEARCH ON 2-D ARRAY (reduces complexity a lot)------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int row;
//     int col;
//     cout << " enter the row number" << endl;
//     cin >> row;
//     cout << " enter the column number " << endl;
//     cin >> col;
//     cout << " enter the elements" << endl;
//     int arr[row][col];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int num;
//     cout << " Enter the element to search";
//     cin >> num;
//     int mid;
//     int ele;int flag;
//     int s = 0;
//     int e = (row * col) - 1;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         ele = arr[mid / col][mid % col];
//         if (ele < num)
//             s = mid + 1;
//         else if (ele > num)
//             e = mid - 1;
//         else
//         {
//             cout << ele;flag=1;
//             break;
//         }
//     }
//     if(flag!=1) cout<< "Not found "<< endl;
//     return 0;
// }

// BINARY SEARCHING IN AN UNSORTED MATRIX----(vvvv.. imp)
// #include <iostream>
// using namespace std;
//
// int main(int argc, char const *argv[])
// {
//     int arr[5][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
//     int rowindex = 0;
//     int columnindex = 4;
//     int num;
//     int flag;
//     cout << " Enter the number to search " << endl;
//     cin >> num;
//     while ((rowindex <= 4) && (columnindex >= 0))
//     {
//         if (num < arr[rowindex][columnindex])
//         {
//             columnindex--;
//         }
//         else if (num > arr[rowindex][columnindex])
//         {
//             rowindex++;
//         }
//         else
//         {
//             cout << arr[rowindex][columnindex];
//             flag = 1;
//             break;
//         }
//     }
//     if (flag != 1)
//     {
//         cout << " Not found" << endl;
//     }
//     return 0;
// }

// LCM and GCD of two numbers---(isme main chij hi yehi hai ki dono number ko equal krna hai kaise v krke.....)(bade chote number ko bade wale se '-' krna hai...while loop k andar jb tk ki dono number equal na ho jaye)  (lcm*hcf=num1*num2)
// #include <iostream>
// using namespace std;

// int hcf(int num1, int num2)
// {
//     if (num1 == 0)
//     {
//         return num2;
//     }
//     if (num2 == 0)
//     {
//         return num1;
//     }
//     while (1)
//     {
//         if (num1 > num2)
//         {
//             num1 = num1 - num2;
//         }
//         else if (num2 > num1)
//         {
//             num2 = num2 - num1;
//         }
//         else
//         {
//             return num2;
//             break;
//         }
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     cout << " Enter the two numbers " << endl;
//     int num1;
//     int num2;
//     cin >> num1;
//     cin >> num2;
//     int gdc = hcf(num1, num2);
//     cout << " the hcf if two numbers is " << gdc << endl;
//     cout << " LCM is " << (num2 * num1)/gdc;
//     return 0;
// }

// DIFFERENT APPROACH TO SWAP ALTERNATE ELEMENTS ----
// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[9] = {2, 3, 4, 5, 9, 1, 6, 7, 11};
//     int s = 0;
//     int s1 = s + 1;
//     int count;
//     int temp;
//     while (s <= size(arr) - 2)
//     {
//         temp = arr[s];
//         arr[s] = arr[s1];
//         arr[s1] = temp;
//         count = arr[s] + arr[s1];
//         cout << count << " ";
//         s += 2;
//         s1 = s + 1;
//     }
//     cout << endl;
//     for (int i = 0; i < size(arr); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// DIFFERENT APPROACH TO FIND THE COMMON ELEMENT IN TWO ARRAYS ------
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<int> arr1{1, 4, 5};
//     vector<int> arr2{3, 4, 5};
//     int flag = 0;
//     vector<int> arr3;
//     for (int i = 0; i < arr1.size(); i++)
//     {
//         for (int j = flag; j < arr2.size(); j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 flag = j + 1;
//                 arr3.push_back(arr2[j]);
//                 break;
//             }
//         }
//     }
//     if (arr3.size() != 0)
//     {
//         for (int i = 0; i < arr3.size(); i++)
//         {
//             cout << arr3[i] << " ";
//         }
//     }
//     else
//     {
//         cout << -1;
//     }
//     return 0;
// }

// MORE SPECIFIC APPROACH TO SOLVE THE PREVIOUS QUESTION-------
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     int i=0, j=0;
//     vector<int> ans;
//     while(i<n && j<m){
//         if(arr1[i]==arr2[j]){
//             ans.push_back(arr1[i]);
//             i++; j++;
//         }
//         else if (arr1[i]< arr2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     return ans;
// }

//  DIIFERENT APPROACH TO FIND PAIR OF ELEMENTS THAT EQUALS TO A PARTICULAR SUM----
// #include <iostream>
// #include <map>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[5] = {2, -3, 3, 3, -2};
//     int ele = 0;
//     int i = 0;
//     int j = i + 1;
//     map<int, int> mappppp;
//     map<int, int>::iterator iter;
//     while ((i <= size(arr)) && (j <= size(arr)))
//     {
//         if ((arr[i] + arr[j]) != ele)
//         {
//             j++;
//             if (j == size(arr))
//             {
//                 i++;
//                 j = i + 1;
//             }
//         }
//         else
//         {
//             mappppp.insert({arr[i], arr[j]});
//             i++;
//             j = i + 1;
//         }
//     }

//     for (iter = mappppp.begin(); iter != mappppp.end(); iter++)
//     {
//         cout << (*iter).first << " ";
//         cout << (*iter).second << " ";
//         cout << endl;
//     }
//     return 0;
// }

// FIND THE INDEX OF THE ELEMENT THAT IS BETWEEN THE ELEMENTS WHOSE SUM IS EQUAL ON THE RIGHT AND THE LEFT SIDE--------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[6] = {1, 7, 3, 6, 5, 6};
//     int s = 0;
//     int e = size(arr) - 1;
//     int fromstart;
//     int fromlast;
//     int mid;
//     int fsum = 0;
//     mid = (s + e) / 2;
//     int lsum = 0;
//     while ((mid > s) || (mid < e))
//     {
//         fromstart = s;
//         fromlast = e;
//         fsum = 0;
//         lsum = 0;
//         while (fromstart <= mid - 1)
//         {
//             fsum += arr[fromstart];
//             fromstart++;
//         }
//         while (fromlast >= mid + 1)
//         {
//             lsum += arr[fromlast];
//             fromlast--;
//         }
//         if (fsum > lsum)
//         {
//             mid--;
//         }
//         else if (fsum < lsum)
//         {
//             mid++;
//         }
//         else
//         {
//             cout << mid;
//             break;
//         }
//     }
//     return 0;
// }

// --------------------AGGRESSIVE COWS CODE----------------------
// bool isdone(vector<int> &stalls, int k, int mid){
//     int lastpos=stalls[0]; int countt=1;
//     for(int i=0; i<stalls.size(); i++){
//         if(stalls[i]-lastpos>=mid){
//             countt++;
//             if(countt==k){
//                 return true;
//             }
//             lastpos=stalls[i];
//         }
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     int s=0; int summ=0;
//     for(int i=0; i<stalls.size(); i++){
//         summ+=stalls[i];
//     }
//     int e=summ; int flag;
//     int mid;
//     sort(stalls.begin(), stalls.end());
//     while(s<=e){
//         mid=(s+e)/2;
//         if(isdone(stalls, k, mid)){
//             flag=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return flag;
// }

// MERGING OF TWO VECTORS CODE----
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

//         int i = m - 1 ;
//         int j = 2;
//         int k = m + 2;

//         while( i >= 0 && j >= 0 )
//         {
//             if( nums1[i] > nums2[j])
//                 nums1[k--] = nums1[i--];
//             else
//                 nums1[k--] = nums2[j--];
//         }

//         while( j >= 0)
//             nums1[k--] = nums2[j--] ;

//         while( i >= 0)
//             nums1[k--] = nums1[i--] ;
//     }
// };

// PUTTING ALL THE ZEROES AT THE RIGHT SIDE AND THE OTHER NUMBERS IN THE SAME ORDER
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
//     void moveZeroes(vector<int>& nums) {
//       int non=0;
//         for(int j=0; j<nums.size(); j++){
//             if(nums[j]!=0){
//                 swap(nums[j], nums[non]);
//                 non++;
//             }
//         }

// printing character with maximum frequency------------------------------
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     string oristr = "leetocodexXXXXXXXXXXXXXXXXXX";char numstr[25] = {0};
//     for (int i = 0; i < oristr.length(); i++)
//     {numstr[(oristr[i]>='a'&&oristr[i]<='z'? oristr[i] - 'a':oristr[i] - 'A')]++;}
//     int max = -1;int flag;
//     for (int i = 0; i < size(numstr); i++)
//     {if (max < numstr[i])
//         {flag = i;
//             max = numstr[i];}}cout << " the largest occurence is of " << char('a' + flag);
//     return 0;
// }

// finding if the permutation of the string is present or not (return true if present else false)------------
// class Solution {
// private:
//     bool tochck(int count1[], int count2[]){
//         for(int i=0; i<26; i++){
//             if(count1[i]!=count2[i]){
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
//     bool checkInclusion(string s1, string s2) {
//         // charcter count array
//         int count1[26]={0};
//         for(int i=0; i<s1.length(); i++){
//             int index=s1[i]-'a';
//             count1[index]++;
//         }
//         // traverse s2 string in window of size 1 length and compare
//         int i=0;int count2[26]={0};
//         while(i<s1.length() && i<s2.length()){
//             count2[s2[i]-'a']++; i++;
//         }
//         if(tochck(count1, count2)){
//             return true;
//         }
//         while(i<s2.length()){
//             count2[s2[i]-'a']++; count2[s2[i-s1.length()]-'a']--;
//             i++;
//             if(tochck(count1, count2)){
//                 return true;
//             }
//         }
//     }
// };

// INPUT:  [a,a,a,a,b,b,b,b,b,c,c,c,c,d,e,e,e]  OUTPUT:   [a, 4, b, 5, c, 4, d, e, 3]
// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i=0; int count=1;
//         int duplicate=0; int j;
//         while(i<chars.size()){
//             j=i+1;
//             while(j<chars.size() && chars[j]==chars[i]){
//                 count++;
//                 j++;
//             }
//             chars[duplicate++]=chars[i];
//             if(count>1){
//                 for(char chh: to_string(count)){
//                 chars[duplicate++]= chh;
//                 }
//             }
//             i=j; count=1;
//         }
//         return duplicate;
//     }
// };

// **********************CONCEPT**************************
// remember this concept that when we need to convert integer to a char value then
// for(char chh: to_string(count)){
//     chars[duplicate++]= chh;
// }
// here every integer(eg, 154) gets converted to char and then we can do whatever we want
// *************************CONCEPT**************************

// CONCEPT OF DOUBLE POINTERS IN C++
// #include <iostream>
// using namespace std;

// void update(int **p2)
// {
//     // niche wale me change nai hoga
//     p2=p2+1;
//     // niche wale me change ho jayega
//     *p2=*p2+1;
//     // niche wale me change ho jayega
//     **p2 = **p2 + 1;
// }

// int main(int argc, char const *argv[])
// {
//     int i = 5;
//     int *p = &i;
//     int **p2 = &p;
//     // cout << "p is " << p << endl;
//     // cout << "p2 is " << p2 << endl;
//     // cout << "address 0f p is " << &p << endl;
//     // cout << "*p2 is " << *p2 << endl;
//     // cout << "**p2 is " << **p2 << endl;
//     cout << " before" << endl;
//     cout << i << endl;
//     cout << p << endl;
//     cout << p2 << endl;
//     update(p2);
//     cout << " after" << endl;
//     cout << i << endl;
//     cout << p << endl;
//     cout << p2 << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void update(int *p)
// {
//     *p = (*p) * 2;
// }

// int main(int argc, char const *argv[])
// {
// int i = 10;
// update(&i);
// cout << i << endl;
// int first = 8;
// int second= 18;
// int *p = &first;
// int *ptr=&second;
// *ptr=9;
// int *q=p;
// (*q)++;
// cout<< (*p)++<<" "<< endl;
// cout<< first;
// int *p = 0;
// int first = 110;
// *p = first;
// cout << *p << endl;
// int first=8; int second=11;
// int *third=&second;
// first=*third;
// *third=*third+2;
// cout << "first " << first << " second " << second << endl;
// float f=12.5;
// float p=21.5;
// float *ptr= &f;
// (*ptr)++;
// *ptr=p;
// cout<< *ptr<<" "<<f<<" "<<p<< endl;
// int arr[6]={11, 21, 31};
// int *p=arr;
// cout<< p[2]<< endl;
// char ch = 'a';
// char *ptr = &ch;
// ch++;
// cout << *ptr << endl;
// char arr[]="abcde";
// char *p=&arr[0];
// cout<< p<< endl;
// char arr[]="abcde";
// char *p=&arr[0];
// p++; cout<<p<< endl;
// char str[] = "babbar";
// char *p = str;
// cout << str[0] << " " << p[0] << endl;
//     return 0;
// }

// CALL BY REFERENCE AND RETURN BY REFERENCE CONCEPT -
// #include <iostream>
// using namespace std;

// // void update1(int n) { n++; }

// // void update2(int &n)
// // {
// //     n++;
// // }

// int &func(int a)
// {
//     int num = a;
//     int &ans = num;
//     return ans;
// }

// int *fun(int n)
// {
//     int *ptr = &n;
//     return ptr;
// }

// int main(int argc, char const *argv[])
// {
//     int i = 5;
//     cout << i << endl;
//     // update1(i);
//     // update2(i);
//     // cout << func(i) << endl;
//     fun(i);
//     func(i);
//     // cout << i << endl;
//     return 0;
// }

// DYNAMIC MEMORY ALLOCATION----(in 1-D array)--------(THIS SHOULD BE THE ACTUAL PROCESS OF TAKING INPUT OF A NUMBER AND THEN ALLOCATING THE SIZE OF THE ARRAY ACCORDING TO IT)
// #include <iostream>
// using namespace std;

// int getsum(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main(int argc, char const *argv[])
// {
//     cout << " enter the size" << endl;
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << getsum(arr, n) << endl;

//     delete[]arr; // freeing the dynamically created memory
//     return 0;
// }

// --------(2-D array dynamic allocation)------------
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << " enter the number of rows and the number of columns" << endl;
//     int row, col;
//     cin >> row >> col;
//     // allocation of array in memory(creation)
//     int **arr = new int *[row];
//     for (int i = 0; i < row; i++)
//     {
//         arr[i] = new int[col];
//     }
//     // taking the input
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     // giving the output
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     for (int i = 0; i < row; i++)
//     {
//          delete[] arr[i];
//     }
//     delete[] arr;
// }

// PRINTING ELEMENTS FROM STARTING TO THE END IN A NEGATIVE TO POSITIVE WAY -------
// #include <iostream>
// #include<set>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
//     int i = 0;
//     set<int> sttt;
//     sttt.insert(34);
//     int j = size(arr) - 1;
//     int temp;
//     while (i < j)
//     {
//         if (arr[i] < 0)
//         {
//             i++;
//         }
//         else if (arr[j] > 0)
//         {
//             j--;
//         }
//         else
//         {
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     for (int z : arr)
//     {
//         cout << z << " ";
//     }

//     for (int f : sttt)
//     {
//         cout << f << " ";
//     }

//     return 0;
// }

// FINDING THR FACTORIAL BY RECURSION---------
// #include <iostream>
// using namespace std;

// int fatc(int n)
// {
//     // base condition
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * fatc(n - 1);
// }

// int main(int argc, char const *argv[])
// {
//     cout << " Enter the number" << endl;
//     int n;
//     cin >> n;
//     cout << fatc(n);
//     return 0;
// }
//

// PRINTING THE NUMBERS RECURSIVELY    ---
// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==0){return ; }
//     cout<< n<< endl;
//     print(n-1);
//     cout<< n<< endl;// will be printed backwards
// }

// int main(int argc, char const *argv[]){
//     int n; cout<< " enter the number "; cin>> n;
//     print(n);
//     return 0;
// }

// ANOTHER RECURSIVE EXAMPLE--------
// #include<iostream>
// using namespace std;

// void reachhome(int src, int dest){

//     cout<< " source "<< src<< " and destination is "<< dest<< endl;
//     // base case
//     if(src==dest){
//         cout<< "pahuch gaya"; return;
//     }

//     // processing ---ek step aage badh jao---
//     src++;

//     // recursive call marna hai----
//     reachhome(src, dest);

// }

// int main(int argc, char const *argv[]){
//     int dest=10; int src=1;
//     reachhome(src, dest);
//     return 0;
// }

// FIBONCCI BY RECURSIVE---------
// #include <iostream>
// using namespace std;

// int fibo(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     };
//     return fibo(n - 1) + fibo(n - 2);
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     cout<< fibo(n);
//     return 0;
// }

// PRINT THE WORD FOR EVERY DIGIT OF THE GIVEN NUMBER------
// #include <iostream>
// using namespace std;

// void  findword(int n, string arrr[])
// {
//     // 148965237
//     if (n == 0)
//     {
//         return;
//     }
//     int dis= n%10;
//     n /= 10;
//     cout<<  arrr[dis]<<" " ;
//     findword(n, arrr);
// }

// int main()
// {
//     string arr[10] = {"zero", "one", "two", "three", "four", "five", "Six", "seven", "eight", "nine"};
//     cout << " enter the number you want to write in words" << endl;
//     int n;
//     cin >> n;
//     findword(n, arr);
//     return 0;
// }

// COUNTING THE NUMBER OF STEPS IN GOING TO THE PARTICULAR STAIR WHEN JUST TAKING '1' OR '2' STEPS IS ALLOWED
// #include <iostream>
// using namespace std;

// int stt(int n)
// {

//     if (n == 0)
//     {
//         return 1;
//     }

//     if (n < 0)
//     {
//         return 0;
//     }
//     return stt(n - 1) + stt(n - 2);
// }

// int main(int argc, char const *argv[])
// {
//     cout << " enter the number of steps" << endl;
//     int n;
//     cin >> n;
//     cout << stt(n);
//     return 0;
// }

// CHECKING FOR A SORTED ARRAY USING RECURSION------
// #include <iostream>
// using namespace std;

// bool checkforsort(int *arr, int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return true;
//     }
//     if (arr[0] == arr[1])
//     {
//         return true;
//     }
//     else
//     {
//         return checkforsort(arr + 1, n - 1);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int arr[6] = {2, 1, 6, 7, 8, 9};
//     int size = 5;
//     if (checkforsort(arr, size))
//     {
//         cout << " array is sorted";
//     }
//     else
//     {
//         cout << " array is not sorted ";
//     }
//     return 0;
// }

// SUMMATION OF NUMBERS USING RECURSION----------
// #include <iostream>
// using namespace std;

// int findsum(int *arrr, int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return arrr[0] + findsum(arrr + 1, n - 1);
// }
// int main()
// {
//     cout << " enter the size of the array" << endl;
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     cout << " enter the elements of the array" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << findsum(arr, 10);
//     return 0;
// }

// LINEAR SEARCH USING RECURSIVE TECHNIQUE
// #include<iostream>
// using namespace std;

// bool searching (int *arr, int srch, int sz){
//     if(sz==0){return 0; }

//     if(*arr==srch){return 1;}
//     else{return searching(arr+1, srch, sz-1);}
// }

// int main(){

//     int arr[6]={1,4,5,8,9,6}; int srch; cout<< " enter the number to search"; cin>> srch; if(searching(arr, srch, 6)){cout<< " yes found"; }else{cout<< " not found "; }
//     return 0;
// }

//  BINARY SEARCH USING RECURSIVE TECHNIQUE
// #include <iostream>
// using namespace std;

// bool binarysearch(int *arr, int s, int e, int key)
// {
//     if(s>e){return false; }
//     int mid=s+((e-s)/2);
//     if(arr[mid]<key){return binarysearch(arr, mid+1, e, key); }
//     if(arr[mid]>key){return binarysearch(arr, s, mid-1, key); }
//     if(arr[mid]==key){return true;}
// }

// int main()
// {
//     int arr[6] = {1, 4, 6, 7, 8, 9};
//     int key = 8;int s=0; int e=5;
//     if(binarysearch(arr, s, e, key)){cout<< " element is present "; }else{cout<<  " element is not present"; }
//     return 0;
// }

// CODE TO REVERSE THE STRING USING RECURSION
// #include<iostream>
// #include<string.h>
// using namespace std;

// void strverse(string &arr, int s, int e){
//     if(s>e){return ;}
//     swap(arr[s++], arr[e--]);
//     strverse(arr, s, e);
// }

// int main(int argc, char const *argv[]){
//     cout<< " enter the string"<< endl; string str; cin>>(str);int s=0; int e=str.size()-1; strverse(str, s, e);cout<< str;
//     return 0;
// }

// CODE TO FIND THE VALUE OF THE BASE WITH A POWER
// #include<iostream>
// using namespace std;

// int power(int b, int p){
//     if(p==0){return 1; }
//     if(p==1){return b; }
//     if(p%2==0){return power(b, p/2)*power(b, p/2); }
//     else{return (b*power(b, p/2)*power(b, p/2)); }
// }

// int main(){
//     cout<< " enter the base"<< endl;int base; cin>>base; cout<< " enter the power"; int pow; cin>>pow; cout<<power(base, pow);
//     return 0;
// }

// BUBBLE SORT USING RECURSION
// #include <iostream>
// using namespace std;

// void sortsort(int *arr, int n)
// {
//     if(n==0){return; }

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>arr[i+1]){swap(arr[i], arr[i+1]); }
//     }

//     sortsort(arr, n-1);

// }

// int main()
// {
//     int arr[10] = {1, 5, 7, 8, 9, 4, 6, 3, 2, 10};
//     sortsort(arr, size(arr));for (int i = 0; i < 10; i++)
//     {cout<< arr[i]<<" ";}
//     return 0;
// }

// MERGE SORT----------

// #include <iostream>
// using namespace std;

// void merge(int *arr, int s, int e)
// {
//     int mid = s + (e - s) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *first = new int[len1];
//     int *second = new int[len2];

//     int mainArrayIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[mainArrayIndex++];
//     }

//     // merge 2 sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }

//     while (index1 < len1)
//     {
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[mainArrayIndex++] = second[index2++];
//     }
//     delete[] first;
//     delete[] second;
// }

// void mergesort(int *arr, int s, int e)
// {
//     // base case
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = s + (e - s) / 2;

//     // left part sort krna hai
//     mergesort(arr, s, mid);

//     // Right part sort krna hai
//     mergesort(arr, mid + 1, e);

//     // merge
//     merge(arr, s, e);
// }

// int main()
// {
//     int arr[5] = {2, 5, 1, 6, 7};
//     int n = 5;
//     mergesort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// QUICK SORT---------
// #include <iostream>
// using namespace std;

// int partition(int *arr, int s, int e)
// {
//     int pivot = arr[s];
//     int cnt = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             cnt++;
//         }
//     }

//     // replace pivot  at right position
//     int pivotIndex= s+cnt;
//     swap(arr[pivotIndex], arr[s]);

//     // left and right wala part less than and greater than the pivot element hai ki nahi ye check kr lete hai-----
//     int i= s; int j=e;
//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<=pivot){i++; }
//         while(arr[j]>=pivot){j--; }
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i++],arr[j--]);
//         }
//     }
//     return pivotIndex;
// }

// void quicksort(int *arr, int s, int e)
// {
//     // base case---
//     if (s >= e)
//     {
//         return;
//     }

//     // partition karenge
//     int p = partition(arr, s, e);

//     // left part sort karo
//     quicksort(arr, s, p - 1);

//     // right part sort karo
//     quicksort(arr, p + 1, e);
// }

// int main()
// {
//     int arr[5] = {1, 52, 47, 8, 5};
//     int n = size(arr);
//     quicksort(arr, 0, n - 1);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// SUBSTRING QUESTION ---
// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(string str, string output, int index, vector<string> &ans)
// {
//     if (index >= str.length())
//     {
//         if (output.length() > 0)
//         {
//             ans.push_back(output);
//         }
//         return;
//     }
//     // exclude
//     solve(str, output, index + 1, ans);

//     // include
//     char element = str[index];
//     output.push_back(element);
//     solve(str, output, index + 1, ans);
// }

// int main()
// {
//     string str = "abc";
//     vector<string> ans;
//     string output = "";
//     int index = 0;
//     solve(str, output, index, ans);
//     vector<string>::iterator itert = ans.begin();
//     for (itert = ans.begin(); itert < ans.end(); itert++)
//     {
//         cout << *itert << " ";
//     }
//     return 0;
// }

// SUBSET QUESTIONS
// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
// {

//     if (index >= nums.size())
//     {
//         ans.push_back(output);
//         return;
//     }

//     // exclude
//     solve(nums, output, index + 1, ans);

//     // include
//     int element = nums[index];
//     output.push_back(element);
//     solve(nums, output, index + 1, ans);
// }

// int main()
// {
//     vector<int> nums{1, 2, 3};
//     vector<vector<int>> ans;
//     vector<int> output;
//     int index = 0;
//     solve(nums, output, index, ans);
//     return 0;
// }

// OOPS CONCEPT OVERVIEW
// #include <iostream>
// #include <string.h>
// using namespace std;

// class Hero
// {
// private:
//     int health;

// public:
//     char *name;
//     char level;
//     static int timetocomplete;

//     Hero()
//     {
//         cout << " Simple constructor called " << endl;
//         name = new char[100];
//     }

//     // parameterised constructor
//     Hero(int health)
//     {
//         this->health = health;
//     }

//     Hero(int health, char level)
//     {
//         this->level = level;
//         this->name = name;
//     }

//     // copy constructor
//     Hero(Hero &temp)
//     {
//         char *ch = new char(strlen(temp.name) + 1);
//         strcpy(ch, temp.name);
//         this->name = ch;
//         cout << " Copy constructor called " << endl;
//         this->health = temp.health;
//         this->level = temp.level;
//     }

//     void print()
//     {
//         cout << endl;
//         cout << " name:   " << this->name << " ,";
//         cout << " health: " << this->health << " ,";
//         cout << " level:  " << this->level << " ,";
//         cout << endl;
//     }

//     int gethealth()
//     {
//         return health;
//     }

//     char getlevel()
//     {
//         return level;
//     }

//     void sethealth(int h)
//     {
//         health = h;
//     }

//     void setlevel(char ch)
//     {
//         level = ch;
//     }

//     void setname(char name[])
//     {
//         strcpy(this->name, name);
//     }

//     // destructor
//     ~Hero()
//     {
//         cout << " destructor called " << endl;
//     }
//     // initialising the static function inside the class-------------
//     // they can only access the static members---------
//     static int random()
//     {
//         cout << "timetocomplete is "<< timetocomplete << endl;return timetocomplete;
//     }
// };

// // initialising a static variable outside the class and hence a different syntax -----
// int Hero::timetocomplete = 5;

// int main()
// {

//     cout << Hero::timetocomplete << endl;

//     //  below accesion of 'timetocomplete ' is invalid---- static data members should only be accessed by the class itself and not by the objects of the class-----

//     /*

//     Hero a;
//     cout << a.timetocomplete << endl;

//     Hero b;
//     b.timetocomplete = 10;
//     cout << b.timetocomplete << endl;
//     cout << a.timetocomplete << endl;

//     */

//     //  accessing the static methods
//     //  Hero:: random();

//     // // static
//     // Hero a;

//     // // dynamic
//     // Hero *b = new Hero();
//     // // manually destructor called
//     // delete b;

//     // Hero hero1;
//     // hero1.sethealth(12);
//     // hero1.setlevel('D');
//     // char name[7]= "Babbar";
//     // hero1.setname(name);
//     // // hero1.print();

//     // // use default copy constructor

//     // Hero hero2(hero1);
//     // // hero2.print();
//     // hero1.name[0]='G';
//     // hero1.print();

//     // hero2.print();

//     // hero1=hero2;

//     // hero1.print();

//     // hero2.print();

//     return 0;
// }

// PERMUTATION IN A STRING -----------
// #include <iostream>
// #include <vector>
// using namespace std;

// void solve(string str, int index, vector<string> &ans)
// {
//     if (index >= str.length())
//     {
//         ans.push_back(str);
//         return;
//     }
//     for (int i = index; i < str.length(); i++)
//     {
//         swap(str[i], str[index]);
//         solve(str, index + 1, ans);
//         swap(str[i], str[index]);
//     }
// }

// int main()
// {
//     string str = "abc";
//     int index = 0;
//     vector<string> ans;
//     solve(str, index, ans);
//     vector<string>::iterator iter;
//     for (iter = ans.begin(); iter != ans.end(); iter++)
//     {
//         cout << *iter << " ";
//     }
//     return 0;
// }

// DOUBLY LINKEDLIST

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     // constructor
//     Node(int d)
//     {
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int getlength(Node *head)
// {
//     int len = 0;
//     while (head != NULL)
//     {
//         len++;
//         head = head->next;
//     }
//     return len;
// }

// void insertathead(Node *&head, int x)
// {
//     if (head == NULL)
//     {
//         Node *temp = new Node(x);
//         head = temp;
//     }
//     else
//     {
//         Node *ptr = new Node(x);
//         ptr->next = head;
//         head->prev = ptr;
//         head = ptr;
//     }
// }

// void insertattail(Node *&head, int y)
// {
//     Node *tail = head;

//     if (tail == NULL)
//     {
//         Node *temp = new Node(y);
//         tail = temp;
//     }

//     while (tail->next != NULL)
//     {
//         tail = tail->next;
//     }
//     Node *ptr = new Node(y);
//     tail->next = ptr;
//     ptr->prev = tail;
//     ptr->next = NULL;
// }

// void insertatanyindex(Node *&head, int position, int dataa)
// {
//     Node *ptr = new Node(dataa);
//     Node *first = head;
//     int i = 1;
//     while (i != position)
//     {
//         first = first->next;
//         i++;
//     }
//     Node *second = first->next;
//     ptr->prev = first;
//     first->next = ptr;
//     ptr->next = second;
//     second->prev = ptr;
// }

// void deleteathead(Node *&head)
// {
//     Node *headcopy = head;
//     head = head->next;
//     head->prev = NULL;
//     delete(headcopy);
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     cout << getlength(head) << endl;
//     insertathead(head, 11);
//     insertathead(head, 12);
//     insertathead(head, 13);
//     insertattail(head, 20);
//     insertatanyindex(head, 3, 50);
//     print(head);
//     cout << endl;
//     deleteathead(head);
//     print(head);
//     return 0;
// }

// CIRCULAR NODE-----------
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     // constructor
//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//     }

//     // destructor
//     ~Node()
//     {
//         int value = this->data;
//         if (this->next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//         cout << " memory is free for node with data " << value << endl;
//     }
// };

// void insertNode(Node *&tail, int element, int d)
// {
//     // assuming that the element is present in the list

//     // empty list--
//     if (tail == NULL)
//     {
//         Node *newnode = new Node(d);
//         tail = newnode;
//         newnode->next = newnode;
//     }
//     else
//     {
//         Node *curr = tail;
//         while (curr->data != element)
//         {
//             curr = curr->next;
//         }
//         // element found -> curr is representing element wala node
//         Node *temp = new Node(d);
//         temp->next = curr->next;
//         curr->next = temp;
//     }
// }

// void print(Node *tail)
// {
//     Node *temp = tail;

//     // empty
//     if (tail == NULL)
//     {
//         cout << " list is empty" << endl;
//         return;
//     }
//     {
//         cout << " list is empty" << endl;
//         return;
//     }
//     do
//     {
//         cout << tail->data << " ";
//         tail = tail->next;
//     } while (tail != temp);

//     cout << endl;
// }

// void deletenode(Node *&tail, int value)
// {
//     // empty list
//     if (tail == NULL)
//     {
//         cout << " list is empty, please check again";
//         return;
//     }
//     else
//     {
//         // non-empty

//         // assuming that 'value ' is present in the linked list
//         Node *prev = tail;
//         Node *curr = prev->next;
//         while (curr->data != value)
//         {
//             prev = curr;
//             curr = curr->next;
//         }
//         prev->next = curr->next;

//         // 1 node linked list
//         if (curr == prev)
//         {
//             tail = NULL;
//         }

//         // >=2 node linked list
//         else if (tail == curr)
//         {
//             tail = prev;
//         }
//         curr->next = NULL;
//         delete curr;
//     }
// }

// int main()
// {
//     Node *tail = NULL;

//     // empty list me insert krte hai-----
//     insertNode(tail, 5, 3);
//     print(tail);

//     // insertNode(tail, 3, 5);
//     // print(tail);

//     // insertNode(tail, 5, 7);
//     // print(tail);

//     // insertNode(tail, 7, 9);
//     // print(tail);

//     // insertNode(tail, 5, 6);
//     // print(tail);

//     // insertNode(tail, 9, 10);
//     // print(tail);

//     // insertNode(tail, 3, 4);
//     // print(tail);

//     deletenode(tail, 3);
//     print(tail);
//     return 0;
// }

// REVESING A LINKED LIST
// #include <iostream>
// using namespace std;

// class llist
// {
// public:
//     int data;
//     llist *next = NULL;

//     llist(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertnode(llist *&fcopy, int dataa)
// {
//     llist *ptr = new llist(dataa);
//     ptr->next = fcopy;
//     fcopy = ptr;
// }

// void printallnode(llist *fcopy)
// {
//     llist *ff = fcopy;
//     while (ff != NULL)
//     {
//         cout << ff->data << " ";
//         ff = ff->next;
//     }
// }

// llist *reversellist(llist *&fcopy)
// {
//     llist *ffcopy = fcopy;
//     llist *prev = NULL;
//     while (ffcopy != NULL)
//     {
//         llist *forward = ffcopy->next;
//         ffcopy->next = prev;
//         prev = ffcopy;
//         ffcopy = forward;
//     }
//     return prev;
// }

// int main()
// {
//     llist *first = new llist(10);
//     llist *firstcopy = first;
//     insertnode(firstcopy, 20);
//     insertnode(firstcopy, 30);
//     insertnode(firstcopy, 40);
//     printallnode(firstcopy);
//     cout << endl;
//     printallnode(reversellist(firstcopy));
//     return 0;
// }

// REVERSING A LINKED LIST THROUGH RECURSION AND FINDING THE MIDDLE ELEMENT------

// #include <iostream>
// using namespace std;

// class llist
// {
// public:
//     int data;
//     llist *next = NULL;

//     llist(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertnode(llist *&fcopy, int dataa)
// {
//     llist *ptr = new llist(dataa);
//     ptr->next = fcopy;
//     fcopy = ptr;
// }

// int printallnode(llist *fcopy)
// {
//     llist *ff = fcopy;
//     int count = 0;
//     while (ff != NULL)
//     {
//         cout << ff->data << " ";
//         count++;
//         ff = ff->next;
//     }
//     return count;
// }

// void reverse(llist *&head, llist *&curr, llist *&prev)
// {
//     if (curr == NULL)
//     {
//         head = prev;
//         return;
//     }

//     llist *forward = curr->next;
//     reverse(head, forward, curr);
//     curr->next = prev;
// }

// int getmiddlelement(llist *&curr, int p)
// {
//     llist *go = curr;
//     if (p & 1)
//     {
//         int j = 0;
//         while (j != ((p / 2) + 1))
//         {
//             go = go->next;
//             j++;
//         }
//     }
//     else
//     {
//         int j = 0;
//         while (j != (p / 2))
//         {
//             go = go->next;
//             j++;
//         }
//     }
//     return go->data;
// }

// int main()
// {
//     llist *head = new llist(10);
//     llist *curr = head;
//     llist *prev = NULL;
//     insertnode(curr, 20);
//     insertnode(curr, 30);
//     insertnode(curr, 40);
//     insertnode(curr, 50);
//     insertnode(curr, 60);
//     insertnode(curr, 70);
//     int p = printallnode(curr);
//     // reverse(head, curr, prev);
//     // cout << endl;
//     // printallnode(head);
//     cout << endl;
//     cout << getmiddlelement(curr, p);
//     return 0;
// }

// self made linked list reversal using recursion ---------

// #include <iostream>
// using namespace std;

// class llist
// {
// public:
//     int data;
//     llist *next;
//     llist(int daata)
//     {
//         this->data = daata;
//         this->next = NULL;
//     }
// };

// void insertnode(llist *&fcopy, int x)
// {
//     llist *newnode = new llist(x);
//     newnode->next = fcopy;
//     fcopy = newnode;
// }

// void printallnode(llist *fcopy)
// {
//     llist *traverse = fcopy;
//     while (traverse != NULL)
//     {
//         cout << traverse->data << " ";
//         traverse = traverse->next;
//     }
// }

// llist *reversenode(llist *fcopy, llist *prev)
// {
//     if (fcopy == NULL)
//     {
//         return prev;
//     }
//     llist *current = fcopy;
//     fcopy = fcopy->next;
//     current->next = prev;
//     prev = current;
//     current = fcopy;
//     reversenode(fcopy, prev);
// }

// int main()
// {
//     llist *first = new llist(10);
//     llist *firstcopy = first;
//     insertnode(firstcopy, 20);
//     insertnode(firstcopy, 30);
//     insertnode(firstcopy, 40);
//     printallnode(firstcopy);
//     llist *prev = NULL;
//     cout << endl;
//     printallnode(reversenode(firstcopy, prev));
//     return 0;
// }

// ****************************************************

// JUST SELF PRACTICE---------

// #include <iostream>
// using namespace std;

// class llist
// {
// public:
//     int data;
//     llist *next;
//     llist *before;
//     llist(int daata)
//     {
//         this->data = daata;
//         this->next = NULL;
//         this->before = NULL;
//     }
// };

// void insertnode(llist *&fcopy, int x)
// {
//     llist *newnode = new llist(x);
//     newnode->next = fcopy;
//     newnode->before = NULL;
//     fcopy->before = newnode;
//     fcopy = newnode;
// }

// void printallnode(llist *fcopy)
// {
//     llist *traverse = fcopy;
//     while (traverse->next != NULL)
//     {
//         traverse = traverse->next;
//     }
//     while (traverse != NULL)
//     {
//         cout << traverse->data << " ";
//         traverse = traverse->before;
//     }
// }

// llist *fullreverse(llist *fcopy, llist *prev)
// {
//     if (fcopy == NULL)
//     {
//         return prev;
//     }
//     llist *current = fcopy;
//     fcopy = fcopy->next;
//     current->next = prev;
//     prev = current;
//     current = fcopy;
//     return fullreverse(current, prev);
// }

// llist *partsoflistreverse(llist *head, int k)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     llist *next = NULL;
//     llist *curr = head;
//     llist *prev = NULL;
//     int count = 0;
//     while (curr != NULL && count < k)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }

//     if (next != NULL)
//     {
//         head->next = partsoflistreverse(next, count);
//     }
//     return prev;
// }

// int main()
// {
//     llist *first = new llist(2);
//     llist *firstcopy = first;
//     insertnode(firstcopy, 17);
//     insertnode(firstcopy, 11);
//     insertnode(firstcopy, 8);
//     insertnode(firstcopy, 7);
//     insertnode(firstcopy, 3);
//     printallnode(firstcopy);
//     cout << endl;
//     llist *prev = NULL;
//     // printallnode(fullreverse(firstcopy, prev));
//     cout << endl;

//     return 0;
// }

// **********************************************

// LOOP DETECTION--------------------(NORMAL AND FFLOYDS ALGORITHM )
// #include <iostream>
// #include <map>
// using namespace std;

// class llist
// {
// public:
//     int data;
//     llist *next;
//     llist(int daata)
//     {
//         this->data = daata;
//         this->next = NULL;
//     }
// };

// bool markingtrueforlooping(llist *head)
// {
//     if (head == NULL)
//         return false;
//     map<llist *, bool> visited;
//     llist *temp = head;
//     while (temp != NULL)
//     {
//         if (visited[temp] == true)
//         {
//             return true;
//         }
//         visited[temp] = true;
//         temp = temp->next;
//     }
//     return false;
// }

// bool ffloydcheckforloop(llist *fcopy)
// {
//     llist *temp = fcopy;
//     llist *slow = temp, *fast = temp;
//     while (fast != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// void insertnode(llist *&fcopy, int x)
// {
//     llist *newnode = new llist(x);
//     newnode->next = fcopy;
//     fcopy = newnode;
// }

// void printallnode(llist *fcopy)
// {
//     llist *traverse = fcopy;
//     while (traverse != NULL)
//     {
//         cout << traverse->data << " ";
//         traverse = traverse->next;
//     }
// }

// since this is a single linked list with last node pointing to NULL hence this is not returning the valid output but will work for a loop system of linkedlist----------

// 1.  loop present or not
// 2.  point at which loop is present
// 3.  make the loop a straight one(remove the loop)
// llist *returnstartingofLoop(llist *fcopy)
// {
//     if (ffloydcheckforloop(fcopy))
//     {
//         llist *slow = fcopy, *fast = fcopy;
//         int count = 0;
//         while (slow != fast)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         slow = fcopy;
//         while (slow != fast)
//         {
//             slow = slow->next;
//             fast = fast->next;
//             count++;
//         }
//         cout << "number of nodes for starting the loop " << count;
//         return slow;
//     }
//     else
//     {
//         cout << " nodes count unavailable coz its not a loop pointed list " << endl;
//         return fcopy;
//     }
// }

// void removeloop(llist *&fcopy, llist *&retu)
// {

//     if (ffloydcheckforloop(fcopy))
//     {
//         llist *rettt = retu->next;
//         while (rettt->next != retu)
//         {
//             rettt = rettt->next;
//         }
//         rettt->next = NULL;
//     }
//     else
//     {
//         cout << " can do nothing. already has the last node pointing to null" ;
//     }
// }

// int main()
// {
//     llist *first = new llist(10);
//     llist *firstcopy = first;
//     insertnode(firstcopy, 20);
//     insertnode(firstcopy, 30);
//     insertnode(firstcopy, 40);
//     insertnode(firstcopy, 50);
//     insertnode(firstcopy, 60);
//     insertnode(firstcopy, 70);
//     insertnode(firstcopy, 80);
//     insertnode(firstcopy, 90);
//     insertnode(firstcopy, 100);
//     printallnode(firstcopy);
//     cout << endl;
//     // checking ki agar loop present hai kki nai
//     cout << markingtrueforlooping(firstcopy) << endl;
//     cout << ffloydcheckforloop(firstcopy) << endl;
//     // finding out the starting point of the loop
//     llist *retu = returnstartingofLoop(firstcopy);
//     // removing the loop and making it point to null
//     removeloop(firstcopy, retu);
//     return 0;
// }

// REMOVING THE DUPLICATES IN A SORTED LINKED LIST ------------
// #include <iostream>
// using namespace std;

// class llist
// {
// public:
//     int data;
//     llist *next = NULL;

//     llist(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertnode(llist *&fcopy, int dataa)
// {
//     llist *ptr = new llist(dataa);
//     ptr->next = fcopy;
//     fcopy = ptr;
// }

// void printallnode(llist *fcopy)
// {
//     llist *ff = fcopy;
//     while (ff != NULL)
//     {
//         cout << ff->data << " ";
//         ff = ff->next;
//     }
// }

// void removeduplicatesinsortedlist(llist *&fcopy)
// {
//     llist *first = fcopy;
//     llist *second = fcopy;
//     while (first->next != NULL)
//     {
//         first = first->next;
//         if ((first->data) != (second->data))
//         {
//             second = first;
//         }
//         else
//         {
//             llist *third = first;
//             second->next = third->next;
//             first = second;
//             delete[] third;
//         }
//     }
// }

// int main()
// {
//     llist *first = new llist(4);
//     llist *firstcopy = first;
//     insertnode(firstcopy, 3);
//     insertnode(firstcopy, 3);
//     insertnode(firstcopy, 3);
//     insertnode(firstcopy, 3);
//     insertnode(firstcopy, 2);
//     insertnode(firstcopy, 2);
//     insertnode(firstcopy, 1);
//     printallnode(firstcopy);
//     cout << endl;
//     // printallnode(reversellist(firstcopy));
//     removeduplicatesinsortedlist(firstcopy);
//     printallnode(firstcopy);
//     return 0;
// }

// REMOVING THE DUPLICATES IN AN UNSORTED LINKED LIST ------------

// #include <iostream>
// #include <map>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next = NULL;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = NULL;
//     }
// };

// void insertcopy(Node *&fcopy, int x)
// {
//     Node *newcopy = new Node(x);
//     newcopy->next = fcopy;
//     fcopy = newcopy;
// }

// void displaynodes(Node *fcopy)
// {
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// void remove(Node *&ffcopy)
// {
//     Node *first = ffcopy;
//     Node *second = ffcopy;
//     while (first->next != NULL)
//     {
//         first = first->next;
//         if (first->data != second->data)
//         {
//             second = first;
//         }
//         else
//         {
//             Node *third = first;
//             first = second;
//             second->next = third->next;
//             delete[] third;
//         }
//     }
// }

// Node *reverse(Node *fcopy)
// {
//     Node *ffcopy = fcopy;
//     Node *prev = NULL;
//     Node *nexting = NULL;
//     while (ffcopy != NULL)
//     {
//         nexting = ffcopy->next;
//         ffcopy->next = prev;
//         prev = ffcopy;
//         ffcopy = nexting;
//     }
//     return prev;
// }

// void removefromunsorted(Node *fcopy)
// {
//     Node *first = fcopy;
//     Node *second = NULL;
//     map<int, bool> mappp;
//     while (first != NULL)
//     {
//         if (mappp[(first->data)] != true)
//         {
//             mappp[(first->data)] = true;
//         }
//         else
//         {
//             Node *delee = first;
//             second->next = delee->next;
//             first = second;
//             delete[] delee;
//         }
//         second = first;
//         first = first->next;
//     }
// }

// int main()
// {
//     Node *first = new Node(5);
//     Node *firstcopy = first;
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 4);
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 4);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 15);
//     displaynodes(firstcopy);

//     removefromunsorted(firstcopy);

//     // remove(firstcopy);
//     cout << endl;
//     displaynodes(firstcopy);
//     cout << endl;
//     // displaynodes(reverse(firstcopy));
//     cout << endl;
//     return 0;
// }

// SORTING 0's and 1's and 2's (by replacement process)
// #include <iostream>
// #include <map>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next = NULL;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = NULL;
//     }
// };

// void insertcopy(Node *&fcopy, int x)
// {
//     Node *newcopy = new Node(x);
//     newcopy->next = fcopy;
//     fcopy = newcopy;
// }

// void displaynodes(Node *fcopy)
// {
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// void sorting(Node *fcopy)
// {
//     int z = 0;
//     int o = 0;
//     int t = 0;
//     Node *copy = fcopy;
//     while (copy != NULL)
//     {
//         if (copy->data == 0)
//         {
//             z++;
//         }
//         else if (copy->data == 1)
//         {
//             o++;
//         }
//         else if (copy->data == 2)
//         {
//             t++;
//         }
//         copy = copy->next;
//     }

//     Node *fff = fcopy;
//     while (fff != NULL)
//     {
//         for (int i = 0; i < z; i++)
//         {
//             fff->data = 0;
//             fff = fff->next;
//         }
//         for (int i = 0; i < o; i++)
//         {
//             fff->data = 1;
//             fff = fff->next;
//         }
//         for (int i = 0; i < t; i++)
//         {
//             fff->data = 2;
//             fff = fff->next;
//         }
//     }
// }

// int main()
// {
//     Node *first = new Node(1);
//     Node *firstcopy = first;
//     insertcopy(firstcopy, 0);
//     insertcopy(firstcopy, 0);
//     insertcopy(firstcopy, 0);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     cout << endl;
//     displaynodes(firstcopy);
//     cout << endl;
//     sorting(firstcopy);
//     displaynodes(firstcopy);
//     cout << endl;
//     return 0;
// }

// SORTING 0's and 1's and 2's (BY MERGING TECHNIQUE)

// #include <iostream>
// #include <map>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next = NULL;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = NULL;
//     }
// };

// void insertcopy(Node *&fcopy, int x)
// {
//     Node *newcopy = new Node(x);
//     newcopy->next = fcopy;
//     fcopy = newcopy;
// }

// void displaynodes(Node *fcopy)
// {
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// Node *sorting(Node *fcopy)
// {
//     Node *copy = fcopy;
//     Node *zerohead = new Node(-1);
//     Node *zerotail = zerohead;
//     Node *onehead = new Node(-1);
//     Node *onetail = onehead;
//     Node *twohead = new Node(-1);
//     Node *twotail = twohead;
//     while (copy != NULL)
//     {
//         if (copy->data == 0)
//         {
//             Node *newnode = new Node(0);
//             zerotail->next = newnode;
//             zerotail = newnode;
//         }
//         else if (copy->data == 1)
//         {
//             Node *newnode = new Node(1);
//             onetail->next = newnode;
//             onetail = newnode;
//         }
//         else if (copy->data == 2)
//         {
//             Node *newnode = new Node(2);
//             twotail->next = newnode;
//             twotail = newnode;
//         }
//         copy = copy->next;
//     }
//     zerotail->next = onehead->next;
//     onetail->next = twohead->next;
//     twotail->next = NULL;
//     Node *head = zerohead->next;
//     delete[] zerohead;
//     delete[] onehead;
//     delete[] twohead;
//     return head;
// }

// int main()
// {
//     Node *first = new Node(1);
//     Node *firstcopy = first;
//     insertcopy(firstcopy, 0);
//     insertcopy(firstcopy, 0);
//     insertcopy(firstcopy, 0);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 2);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     insertcopy(firstcopy, 1);
//     cout << endl;
//     displaynodes(firstcopy);
//     cout << endl;
//     displaynodes(sorting(firstcopy));
//     cout << endl;
//     return 0;
// }

// ------CHECKING IF THE GIVEN LINKED LIST IS A PALINDROME-(using a O(n) space complexity and O(n) time complexity)---------

// #include <iostream>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next = NULL;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = NULL;
//     }
// };

// void insertnode(Node *&fcopy, int x)
// {
//     Node *newnode = new Node(x);
//     newnode->next = fcopy;
//     fcopy = newnode;
// }

// void displaynodes(Node *copy)
// {
//     Node *fcopy = copy;
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// bool checkpalindrome(Node *fcopy)
// {
//     Node *copy = fcopy;
//     vector<int> vctr;
//     while (copy != NULL)
//     {
//         vctr.push_back(copy->data);
//         copy = copy->next;
//     }
//     int start = 0;
//     int end = vctr.size() - 1;
//     while (start <= end)
//     {
//         if (vctr.at(start) == vctr.at(end))
//         {
//             start++;
//             end--;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     Node *first = new Node(1);
//     Node *firstcopy = first;
//     insertnode(firstcopy, 2);
//     insertnode(firstcopy, 3);
//     insertnode(firstcopy, 2);
//     insertnode(firstcopy, 1);
//     displaynodes(firstcopy);
//     cout << endl;
//     cout << checkpalindrome(firstcopy);
//     return 0;
// }

// -----PALINDROME CHECKING IN LINKED LIST(WITH o(1) SPACE COMPLEXITY AND o(N) TIME COMPLEXITY)-----

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = NULL;
//     }
// };

// void insertNode(Node *&fcopy, int x)
// {
//     Node *newnew = new Node(x);
//     newnew->next = fcopy;
//     fcopy = newnew;
// }

// void displayallnodes(Node *fcopy)
// {
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// Node *findmidforpalindromecheck(Node *fcopy)
// {
//     Node *slow = fcopy;
//     Node *fast = fcopy;
//     while ((fast != NULL) && (fast->next != NULL))
//     {
//         fast = fast->next->next;
//         slow = slow->next;
//     }

//     return slow;
// }

// Node *reverse(Node *midnext)
// {
//     Node *prev = NULL;
//     Node *nextone = NULL;
//     Node *curr = midnext;
//     while (curr != NULL)
//     {
//         nextone = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = nextone;
//     }
//     return prev;
// }

// bool realpalindromecheck(Node *fcopy, Node *middle)
// {
//     while (middle != NULL)
//     {
//         if (fcopy->data == middle->data)
//         {
//             fcopy = fcopy->next;
//             middle = middle->next;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     Node *first = new Node(1);
//     Node *firstcopy = first;
//     insertNode(firstcopy, 2);
//     insertNode(firstcopy, 3);
//     insertNode(firstcopy, 4);
//     insertNode(firstcopy, 5);
//     insertNode(firstcopy, 6);
//     insertNode(firstcopy, 5);
//     insertNode(firstcopy, 4);
//     insertNode(firstcopy, 3);
//     insertNode(firstcopy, 2);
//     insertNode(firstcopy, 1);
//     displayallnodes(firstcopy);
//     cout << endl;
//     Node *middle = findmidforpalindromecheck(firstcopy);
//     middle->next = reverse(middle->next);
//     middle = middle->next;
//     cout << "now the nodes are as such after reversal" << endl;
//     displayallnodes(firstcopy);
//     cout << endl;
//     cout << realpalindromecheck(firstcopy, middle);
//     return 0;
// }

// ADDING THE DATA OF BOTH THE LINKED LIST INDIVIDUALLY AND STORING THE DATA OF EACH LINKED LIST IN A SEPARATE LINKED LIST ----------
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// void insertnode(Node *&fcopy, int x)
// {
//     Node *newnew = new Node(x);
//     newnew->next = fcopy;
//     fcopy = newnew;
// }

// void display(Node *fcopy)
// {
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// void nodedisplay(Node *fcopy)
// {
//     while (fcopy->next != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// Node *nodecreation(Node *fcopy, Node *scopy)
// {
//     int carry = 0;
//     Node *fornull = new Node(-1);
//     Node *forcopy = fornull;
//     int totalsum = (fcopy->data) + (scopy->data) + carry;
//     int sum = totalsum % 10;
//     carry = totalsum / 10;
//     Node *newnew = new Node(sum);
//     newnew->next = forcopy;
//     forcopy = newnew;
//     return forcopy;
// }

// void adding(Node *firstcopy, Node *firstnull, Node *secondcopy, Node *secondnull)
// {
//     if (firstnull == firstcopy && secondnull == secondcopy)
//     {
//         return;
//     }

//     Node *fcopy = firstcopy;
//     while (fcopy->next != firstnull)
//     {
//         fcopy = fcopy->next;
//     }
//     Node *scopy = secondcopy;
//     while (scopy->next != secondnull)
//     {
//         scopy = scopy->next;
//     }
//     firstnull = fcopy;
//     secondnull = scopy;
//     adding(firstcopy, firstnull, secondcopy, secondnull);
//     nodedisplay(nodecreation(fcopy, scopy));
// }

// int main()
// {
//     Node *first = new Node(1);
//     Node *firstcopy = first;
//     Node *firstnull = NULL;
//     insertnode(firstcopy, 1);
//     insertnode(firstcopy, 1);
//     display(firstcopy);
//     cout << endl;
//     Node *second = new Node(5);
//     Node *secondcopy = second;
//     Node *secondnull = NULL;
//     insertnode(secondcopy, 7);
//     insertnode(secondcopy, 7);
//     display(secondcopy);
//     cout << endl;
//     adding(firstcopy, firstnull, secondcopy, secondnull);
//     return 0;
// }

// *************************** PRACTICING ALL IN ONE **********************************
// #include <iostream>
// #include <map>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = NULL;
//     }
// };

// void insertnode(Node *&copy, int x)
// {
//     Node *newnode = new Node(x);
//     newnode->next = copy;
//     copy = newnode;
// }

// void displayallnode(Node *fcopy)
// {
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// Node *reverse(Node *&fcopy)
// {
//     Node *prev = NULL;
//     Node *curr = fcopy;
//     Node *next = NULL;
//     while (curr != NULL)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// void removeduplicatesinunsorted(Node *fcopy)
// {
//     Node *first = fcopy;
//     Node *second = fcopy;
//     map<int, bool> mapppppppppp;
//     while (first != NULL)
//     {
//         if (!(mapppppppppp[first->data]))
//         {
//             mapppppppppp[first->data] = true;
//             second = first;
//             first = first->next;
//         }
//         else
//         {
//             Node *third = first;
//             first = second;
//             second->next = third->next;
//             delete[] third;
//             first = first->next;
//         }
//     }
// }

// void removeduplicatesinsorted(Node *&fcopy)
// {
//     Node *first = fcopy;
//     Node *second = fcopy;
//     while (first->next != NULL)
//     {
//         first = first->next;
//         if (first->data == second->data)
//         {
//             Node *th = first;
//             first = second;
//             second->next = th->next;
//             delete[] th;
//         }
//         else
//         {
//             second = first;
//         }
//     }
// }

// void sort_zero_one_two_replacement_process(Node *copy)
// {
//     Node *fcopy = copy;
//     Node *ccopy = copy;
//     int z = 0, o = 0, t = 0;
//     while (fcopy != NULL)
//     {
//         if (fcopy->data == 0)
//         {
//             z++;
//         }
//         else if (fcopy->data == 1)
//         {
//             o++;
//         }
//         else if (fcopy->data == 2)
//         {
//             t++;
//         }
//         fcopy = fcopy->next;
//     }
//     int p = 0;
//     while (p != z)
//     {
//         ccopy->data = 0;
//         ccopy = ccopy->next;
//         p++;
//     }
//     p = 0;
//     while (p != o)
//     {
//         ccopy->data = 1;
//         ccopy = ccopy->next;
//         p++;
//     }
//     p = 0;
//     while (p != t)
//     {
//         ccopy->data = 2;
//         ccopy = ccopy->next;
//         p++;
//     }
// }

// Node *sort_zero_one_two_merging_process(Node *fcopy)
// {
//     Node *zeroes = new Node(-1);
//     Node *zero = zeroes;
//     Node *ones = new Node(-1);
//     Node *one = ones;
//     Node *twos = new Node(-1);
//     Node *two = twos;
//     Node *copy = fcopy;
//     while (copy != NULL)
//     {
//         if (copy->data == 0)
//         {
//             Node *newnode = new Node(0);
//             zero->next = newnode;
//             zero = newnode;
//         }
//         else if (copy->data == 1)
//         {
//             Node *newnode = new Node(1);
//             one->next = newnode;
//             one = newnode;
//         }
//         else if (copy->data == 2)
//         {
//             Node *newnode = new Node(2);
//             two->next = newnode;
//             two = newnode;
//         }
//         copy = copy->next;
//     }

//     Node *take = zeroes->next;
//     zero->next = ones->next;
//     one->next = twos->next;
//     two->next = NULL;
//     return take;
// }

// bool checkpalindrome(Node *firstcopy)
// {
//     vector<int> vctr;
//     Node *fcopy = firstcopy;
//     while (fcopy != NULL)
//     {
//         vctr.push_back(fcopy->data);
//         fcopy = fcopy->next;
//     }
//     int start = 0;
//     int end = vctr.size() - 1;
//     while (start <= end)
//     {
//         if (vctr.at(start) == vctr.at(end))
//         {
//             start++;
//             end--;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }

// bool checkpalindrome_by_reversing_approach(Node *fcopy)
// {
//     Node *copy = fcopy;
//     Node *slow = fcopy;
//     Node *fast = fcopy;
//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     Node *mid_k_baad = slow->next;
//     Node *prev = NULL;
//     Node *next = NULL;
//     Node *curr = mid_k_baad;
//     while (curr != NULL)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     slow->next = prev;
//     slow = slow->next;
//     while (slow != NULL)
//     {
//         if (slow->data == copy->data)
//         {
//             slow = slow->next;
//             copy = copy->next;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }

// // CLONING QUESTION CANNOT BE DONE SINCE i CANNOT GET HOW TO MAKE THE QUETION FOR CLONING ----------------

// int main()
// {
//     Node *first = new Node(1);
//     Node *firstcopy = first;
//     insertnode(firstcopy, 10);
//     insertnode(firstcopy, 13);
//     insertnode(firstcopy, 40);
//     insertnode(firstcopy, 5);
//     displayallnode(firstcopy);
//     cout << endl;
//     // displayallnode(reverse(firstcopy));
//     // removeduplicates(firstcopy);
//     // removeduplicatesinsorted(firstcopy);
//     // sort_zero_one_two_replacement_process(firstcopy);
//     // displayallnode(sort_zero_one_two_merging_process(firstcopy));
//     // cout<<checkpalindrome_by_array_approach(firstcopy);
//     // cout << checkpalindrome_by_reversing_approach(firstcopy);
//     // displayallnode(firstcopy);
//     return 0;
// }

// MERGE SORT IN LINKED LIST --------(PREFERRED OVER QUICK SORT) -----------------

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// void insertnode(Node *&fcopy, int x)
// {
//     Node *newnew = new Node(x);
//     newnew->next = fcopy;
//     fcopy = newnew;
// }

// void displayallnode(Node *fcopy)
// {
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// Node *findmid(Node *&fcopy)
// {
//     Node *slow = fcopy;
//     Node *fast = fcopy->next;
//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }

// Node *merge(Node *&left, Node *&right)
// {
//     if (left == NULL)
//     {
//         return right;
//     }
//     if (right == NULL)
//     {
//         return left;
//     }
//     Node *ans = new Node(-1);
//     Node *tmp = ans;
//     while (left != NULL && right != NULL)
//     {
//         if (left->data < right->data)
//         {
//             tmp->next = left;
//             tmp = left;
//             left = left->next;
//         }
//         else
//         {
//             tmp->next = right;
//             tmp = right;
//             right = right->next;
//         }
//     }
//     while (left != NULL)
//     {
//         tmp->next = left;
//         tmp = left;
//         left = left->next;
//     }
//     while (right != NULL)
//     {
//         tmp->next = right;
//         tmp = right;
//         right = right->next;
//     }
//     ans = ans->next;
//     return ans;
// }

// Node *mergesort(Node *firstcopy)
// {
//     if ((firstcopy == NULL) && (firstcopy->next = NULL))
//     {
//         return firstcopy;
//     }
//     Node *mid = findmid(firstcopy);
//     Node *left = firstcopy;
//     Node *right = firstcopy->next;
//     mid->next = NULL;
//     left = mergesort(left);
//     right = mergesort(right);
//     Node *result = merge(left, right);
//     return result;
// }

// int main()
// {
//     Node *first = new Node(5);
//     Node *firstcopy = first;
//     insertnode(firstcopy, 2);
//     insertnode(firstcopy, 10);
//     insertnode(firstcopy, 1);
//     insertnode(firstcopy, 36);
//     insertnode(firstcopy, 39);
//     insertnode(firstcopy, 3);
//     insertnode(firstcopy, 13);
//     displayallnode(firstcopy);
//     Node *result = mergesort(firstcopy);
//     Node *resultcopy = result;
//     while (resultcopy != NULL)
//     {
//         cout << resultcopy->data << " ";
//         resultcopy = resultcopy->next;
//     }

//     return 0;
// }

// **************************MERGING OF TWO SORTED LINKED LIST ***************************
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         this->data = x;
//         this->next = NULL;
//     }
// };

// void insertnode(Node *&fcopy, int x)
// {
//     Node *newnode = new Node(x);
//     newnode->next = fcopy;
//     fcopy = newnode;
// }

// void displayallnode(Node *fcopy)
// {
//     while (fcopy != NULL)
//     {
//         cout << fcopy->data << " ";
//         fcopy = fcopy->next;
//     }
// }

// Node *merge(Node *fcopy, Node *scopy)
// {
//     Node *ans = new Node(-1);
//     Node *anscopy = ans;
//     while (fcopy != NULL && scopy != NULL)
//     {
//         if (fcopy->data < scopy->data)
//         {
//             ans->next = fcopy;
//             ans = fcopy;
//             fcopy = fcopy->next;
//         }
//         else
//         {
//             ans->next = scopy;
//             ans = scopy;
//             scopy = scopy->next;
//         }
//     }
//     while (fcopy != NULL)
//     {
//         ans->next = fcopy;
//         ans = fcopy;
//         fcopy = fcopy->next;
//     }
//     while (scopy != NULL)
//     {
//         ans->next = scopy;
//         ans = scopy;
//         scopy = scopy->next;
//     }
//     anscopy = anscopy->next;
//     return anscopy;
// }

// int main()
// {

//     Node *first = new Node(10);
//     Node *firstcopy = first;
//     insertnode(firstcopy, 8);
//     insertnode(firstcopy, 5);
//     insertnode(firstcopy, 2);
//     insertnode(firstcopy, 1);
//     displayallnode(firstcopy);
//     cout << endl;
//     Node *second = new Node(9);
//     Node *secondcopy = second;
//     insertnode(secondcopy, 7);
//     insertnode(secondcopy, 6);
//     insertnode(secondcopy, 4);
//     insertnode(secondcopy, 3);
//     displayallnode(secondcopy);
//     cout << endl;
//     Node *mergedone = merge(firstcopy, secondcopy);
//     displayallnode(mergedone);
//     return 0;
// }

//  ******************************  STACK BASIC CONCEPT  **************************

// #include <iostream>
// using namespace std;

// class Stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int size)
//     {
//         this->arr = new int[size];
//         this->size = size;
//         this->top = -1;
//     }

//     void push(int element)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = element;
//         }
//         else
//         {
//             cout << "Stack overflow";
//         }
//     }

//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << " stack underflow";
//         }
//     }

//     int peek()
//     {
//         if (top >= 0)
//         {
//             return arr[top];
//         }
//         else
//         {
//             cout << " stack is empty" << endl;
//             return -1;
//         }
//     }

//     bool isEmpty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// int main()
// {
//     Stack st(5);
//     st.push(22);
//     st.push(43);
//     st.push(44);
//     st.push(22);
//     st.push(43);
//     st.push(44);

//     cout << st.peek() << endl;
//     st.pop();

//     cout << st.peek() << endl;
//     st.pop();

//     cout << st.peek() << endl;

//     if (st.isEmpty())
//     {
//         cout << " stack is empty ";
//     }
//     else
//     {
//         cout << "stack is not empty";
//     }

//     return 0;
// }

// =============================Delete middle element from stack======================

// #include <bits/stdc++.h>

// void solve(stack<int> &inputStack, int count , int size){
//     // base case
//     if(count ==size/2){inputStack.pop(); return; }

//     int num= inputStack.top();
//     inputStack.pop();

//     // recursive call
//     solve(inputStack, count+1, size);

//     inputStack.push(num);
// }

// void deleteMiddle(stack<int>&inputStack, int N){
//    int count =0;
//     solve(inputStack ,count , N );
// }

// --------------------------CHECKING VALID PARENTHESIS---------------------------------

// bool isValidParenthesis(string expression)
// {
//     // Write your code here.
//     stack<char>s;
//     for(int i=0; i<expression.length(); i++){
//         char ch = expression[i];

//         // if opening bracket, stack push
//         // if close bracket, stack top check and pop

//         if(ch=='(' || ch=='{' || ch== '['){
//             s.push(ch);
//         }
//         else{
//             // for closing bracket
//             if(!s.empty())
//             {
//                 char top= s.top();
//                 if(
//                 ((ch==')' && top=='(') )||
//                 ((ch=='}' && top=='{') )||
//                 ((ch==']' && top=='[') )
//                 )
//                 {
//                     s.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     if(s.empty()){return true; }
//     else{ return false; }
// }

// --------------INSERTING AN ELEMENT AT THE BOTTOM OF THE GIVEN STACK--------------

// #include <bits/stdc++.h>
// void solve(stack<int>&myStack, int x){
//     if(myStack.size()==0){myStack.push(x); return; }
//     int num = myStack.top(); myStack.pop();
//     solve(myStack, x);
//     myStack.push(num);
// }

// stack<int> pushAtBottom(stack<int>& myStack, int x)
// {
//     solve(myStack, x);
//     return myStack;
// }

// ---------------------- REVERSE A STACK USING RECURSION--------------------

// void reverse(stack<int>&stack, int x){
//     if(stack.size()==0){
//         stack.push(x); return;
//     }
//     int storing = stack.top(); stack.pop();
//     reverse(stack, x);
//     stack.push(storing);
// }

// void solve(stack<int>&stack){
//     if(stack.size()==0){return ; }
//     int store=  stack.top(); stack.pop();
//     solve(stack);
//     reverse(stack, store);
// }

// void reverseStack(stack<int> &stack) {
//     solve(stack);
// }

// -------------------------------SORT A STACK USING RECURSION------------------------------

// #include <bits/stdc++.h>

// void sortnow(stack<int>&stack, int num){
//     if(stack.empty() || (!stack.empty() && stack.top()<=num)){ stack.push(num); return; }
//     int take= stack.top();
//     stack.pop();
//     sortnow(stack, num);
//     stack.push(take);
// }

// void solve(stack<int>&stack){
//     if(stack.size()==0){return;}
//     int num = stack.top();
//     stack.pop();
//     solve(stack);
//     sortnow(stack, num);
// }

// void sortStack(stack<int> &stack)
// {
//     solve(stack);
// }

// -----------------------------------REDUCTANT BRACKETS-------------------------

// #include <bits/stdc++.h>
// bool findRedundantBrackets(string &s)
// {
//     stack<int> stack;
//     // Write your code here.
//     for(int i=0; i<s.length(); i++){
//         char ch = s[i];
//         if((ch=='(') || (ch=='+') || (ch=='-') || (ch=='*') || (ch=='/'))         {
//             stack.push(ch);
//         }
//         else if(ch==')'){
//             int one= 0;
//             while(stack.top()!= '('){
//                 char top= stack.top();
//                 if((top=='+') || (top=='-') || (top=='*') || (top=='/')){
//                     one=1;
//                 }
//                 stack.pop();
//             }
//             stack.pop();
//             if(one==0){return true;}
//         }
//     }
//     return false;
// }

// -----------------------MINIMUM COST TO MAKE A SRING VALID------------------------
// #include <bits/stdc++.h>
// int findMinimumCost(string str) {
//   // Write your code here
//     stack<char> stack;
//     if(str.length() & 1){return -1;}
//     for(int i=0; i<str.length(); i++){
//         char ch= str[i];
//         if(ch=='{'){stack.push(ch); }
//         else{
//             if(stack.top()== '{'){
//                 stack.pop();
//             }
//             else{stack.push(ch); }
//         }
//     }
//     int a=0; int b=0;
//     while(stack.size()!=0){
//         if(stack.top()=='{'){
//             a++; stack.pop();
//         }
//         else{
//             b++; stack.pop();
//         }
//     }
//     return (a+1)/2 + (b+1)/2;
// }

//      ----------------------NEXT SMALLER ELEMENT-------------

// #include<stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     stack<int>stack;
//     vector<int>ans(n);
//     stack.push(-1);
//     for(int i = n-1; i >= 0; i--)
//     {
//         while(stack.top() >= arr[i]){
//             stack.pop();
//         }
//         ans[i]= stack.top();
//         stack.push(arr[i]);
//     }
//     return ans;
// }

// ---------------------HISTOGRAM PROBLEM-------------------------
// class Solution {
// private:
//     vector<int> rightsidesmallest(vector<int>heights, int n){
//         stack<int> stack;
//         stack.push(-1);
//         vector<int> ans(n);
//         for(int i=n-1; i>=0; i--){
//             while(stack.top()!=-1 &&  heights[i]<= heights[stack.top()]){
//                 stack.pop();
//             }
//             ans[i]= stack.top();
//             stack.push(i);
//         }
//         return ans;
//     }

//     vector<int> leftsidesmallest(vector<int>heights, int n){
//         stack<int> stack;
//         stack.push(-1);
//         vector<int>ans(n);
//         for(int i=0; i<n; i++){
//             while(stack.top()!=-1 && heights[i]<= heights[stack.top()]){
//                 stack.pop();
//             }
//             ans[i] = stack.top();
//             stack.push(i);
//         }
//         return ans;
//     }

// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n=heights.size();
//         vector<int> next(n);
//         vector<int> prev(n);
//         next= rightsidesmallest(heights, n);
//         prev= leftsidesmallest(heights, n);
//         int area= INT_MIN;
//         for(int i=0; i<n; i++){
//         int l= heights[i]; if(next[i]==-1){next[i]= n; }
//         int b= next[i]-prev[i]-1;
//         int newarea= l*b;
//         area= max(area, newarea);
//         }
//         return area;
//     }
// };

// -----------------------CELEBRITY PROBLEM---------------------

// class Solution
// {
//     private:
//         bool knows(vector<vector<int> >& M, int a, int b){
//             if(M[a][b]==1){
//                 return true;
//             }else{
//                 return false;
//             }
//         }
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n)
//     {
//         stack <int> s;
//         // step 1-  push all the elements in stack
//         for(int i=0 ; i<n; i++){
//             s.push(i);
//         }
//         // step 2-  get two elements and compare them
//         while(s.size()>1){
//             int a=s.top(); s.pop();
//             int b=s.top(); s.pop();
//             if(knows(M, a,b)){
//                 s.push(b);
//             }
//             else{
//                 s.push(a);
//             }
//         }
//         int candidate= s.top();
//         // single element in the stack is the potential celebrity
//         // so verify it

//         bool rowcheck= false;
//         int zerocount= 0;
//         for(int i=0; i<n; i++){
//             if(M[candidate][i]==0){
//                 zerocount++;
//             }
//         }
//         if(zerocount == n ){
//             rowcheck=true;
//         }

//         bool colcheck= false;
//         int onecount= 0;
//         for(int i=0; i<n; i++){
//             if(M[i][candidate]==1){
//                 onecount++;
//             }
//         }
//         if(onecount == n-1 ){
//             colcheck=true;
//         }

//         if(rowcheck==true && colcheck==true){
//             return candidate;
//         }
//         else{
//             return -1;
//         }

//     }
// };

//--------------------MAXIMUM AREA OF THE RECTANGLE --------------------

// class Solution{
//   private:

//   vector<int> rightsidesmallest(int *heights, int n){
//         stack<int> stack;
//         stack.push(-1);
//         vector<int> ans(n);
//         for(int i=n-1; i>=0; i--){
//             while(stack.top()!=-1 &&  heights[i]<= heights[stack.top()]){
//                 stack.pop();
//             }
//             ans[i]= stack.top();
//             stack.push(i);
//         }
//         return ans;
//     }

//     vector<int> leftsidesmallest(int *heights, int n){
//         stack<int> stack;
//         stack.push(-1);
//         vector<int>ans(n);
//         for(int i=0; i<n; i++){
//             while(stack.top()!=-1 && heights[i]<= heights[stack.top()]){
//                 stack.pop();
//             }
//             ans[i] = stack.top();
//             stack.push(i);
//         }
//         return ans;
//     }

//     int largestRectangleArea(int *heights, int n) {
//         vector<int> next(n);
//         vector<int> prev(n);
//         next= rightsidesmallest(heights, n);
//         prev= leftsidesmallest(heights, n);
//         int area= INT_MIN;
//         for(int i=0; i<n; i++){
//         int l= heights[i]; if(next[i]==-1){next[i]= n; }
//         int b= next[i]-prev[i]-1;
//         int newarea= l*b;
//         area= max(area, newarea);
//         }
//         return area;
//     }

//   public:
//     int maxArea(int M[MAX][MAX], int n, int m) {

//         // compute the area for the first row
//         int area= largestRectangleArea(M[0], m);

//         for(int i=1; i<n; i++){
//             for(int j=0; j<m; j++){

//                 // row update by adding previous row's value
//                 if(M[i][j] != 0){M[i][j] =  M[i][j] + M[i-1][j];}
//                 else{ M[i][j]= 0; }
//             }

//             // row is updated now ------------
//             area= max(area, largestRectangleArea(M[i], m));
//         }
//         return area;

//     }
// };

// -----------------N STACKS IN AN ARRAY-------------------(TOUGH QUESTION)------

// #include <iostream>
// using namespace std;

// class NStacks
// {
// public:
//     int n;
//     int s;
//     int *arr;
//     int *top;
//     int *next;
//     int freespot;
//     NStacks(int n, int s)
//     {
//         this->n = n;
//         this->s = s;
//         arr = new int[n];
//         top = new int[s];
//         next = new int[s];
//         freespot = 0;
//         for (int i = 0; i < n; i++)
//         {
//             next[i] = i + 1;
//         }
//         next[n - 1] = -1;
//         for (int i = 0; i < s; i++)
//         {
//             top[i] = -1;
//         }
//     }
//     bool push(int x, int m)
//     {
//         if (freespot == -1)
//         {
//             cout << x<<" nai ho skta" << endl;
//             return false;
//         }
//         int index = freespot;
//         freespot = next[index];
//         arr[index] = x;
//         next[index] = top[m - 1];
//         top[m - 1] = index;
//         cout << x<<" aa gya" << endl;
//         return true;
//     }

//     int pop(int m)
//     {
//         if (top[m - 1] == -1)
//         {
//             return -1;
//         }
//         int index = top[m - 1];
//         top[m - 1] = next[index];
//         next[index] = freespot;
//         freespot = index;
//         return arr[index];
//     }
// };

// int main()
// {
//     NStacks ns(6, 3);
//     ns.push(10, 1);
//     ns.push(20, 2);
//     ns.push(30, 3);
//     ns.push(101, 1);
//     ns.push(201, 2);
//     ns.push(301, 3);
//     ns.push(102, 1);
//     ns.push(202, 2);
//     ns.push(302, 3);
//     cout<< endl;
//     cout << ns.pop(1) << " 1 ka hai jo nikal gaya" << endl;
//     cout << ns.pop(2) << " 2 ka hai jo nikal gaya" << endl;
//     cout << ns.pop(3) << " 3 ka hai jo nikal gaya" << endl;
//     cout << ns.pop(1) << " 1 ka hai jo nikal gaya" << endl;
//     cout << ns.pop(2) << " 2 ka hai jo nikal gaya" << endl;
//     cout << ns.pop(3) << " 3 ka hai jo nikal gaya" << endl;
//     return 0;
// }
//
//
//

// ----------- queue using STL --------------

// #include <iostream>
// #include<queue>
// using namespace std;

// int main()
// {
//     queue<int> q;
//     q.push(11); q.push(15);  q.push(13);
//     cout<< " size of the queue is "<< q.size()<< endl;
//     q.pop();
//     cout<< " size of the queue is "<< q.size()<< endl;

//     if(q.empty()){cout<< " queue empty"; }else { cout<< "queue not empty"<< endl;
//     }

//     cout<< q.front();
//     return 0;
// }

//  ------------QUEUE IMPLEMENTATION--------------

// #include <iostream>
// using namespace std;

// class Queue
// {
// public:
//     int *arr;
//     int size;
//     int qfront;
//     int rear;

//     Queue()
//     {
//         this->qfront = -1;
//         this->rear = -1;
//         this->size = 100001;
//         this->arr = new int[size];
//     }

//     bool isEmpty()
//     {
//         // Implement the isEmpty() function
//         if (qfront == rear == -1)
//         {
//             return true;
//         }
//         if (qfront == rear + 1)
//         {
//             qfront = 0;
//             rear = 0;
//             return true;
//         }
//         return false;
//     }

//     void enqueue(int data)
//     {
//         // Implement the enqueue() function
//         if (rear == size - 1)
//         {
//             cout << " overflow ";
//         }
//         else if (qfront == -1 && rear == -1)
//         {
//             qfront = 0;
//             rear = 0;
//             arr[rear] = data;
//             cout << data << "DONE " << endl;
//         }
//         else
//         {
//             arr[++rear] = data;
//             cout << data << "DONE " << endl;
//         }
//     }

//     void dequeue()
//     {
//         // Implement the dequeue() function
//         if (!isEmpty())
//         {
//             int ret = arr[qfront++];
//             cout << ret << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     void front()
//     {
//         if (!isEmpty())
//         {
//             cout << arr[qfront];
//         }
//         else
//         {
//             cout << "nah";
//         }
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Queue gygy;
//     gygy.enqueue(17);
//     gygy.enqueue(23);
//     gygy.enqueue(11);
//     gygy.enqueue(11);
//     gygy.enqueue(11);
//     gygy.dequeue();
//     gygy.dequeue();
//     gygy.dequeue();
//     gygy.dequeue();
//     return 0;
// }

// -------------D-E- QUEUE----------------(STL IMPLEMENTATION)------------
// #include <iostream>
// #include<queue>
// using namespace std;

// int main()
// {
//     deque<int> d;
//     d.push_back(14);
//     d.push_front(12);
//     cout<< d.front()<< endl;
//     cout<< d.back()<< endl;

//     d.pop_front();

//     cout<< d.front()<< endl;
//     cout<< d.back()<< endl;

//     d.pop_front();
//     d.pop_back();
//     cout<< "FJKJFM"<< endl;
//     cout<< d.front()<< endl;
//     cout<< d.back()<< endl;
//     return 0;
// }

// CIRCULAR QUEUE IMPLEMENTATION----------(full concept implementation)

// #include <iostream>
// using namespace std;

// class Cqueue
// {
// public:
//     int size;
//     int *arr;
//     int front;
//     int rear;
//     Cqueue(int n)
//     {
//         this->size = n;
//         this->front = -1;
//         this->rear = -1;
//         this->arr = new int[size];
//     }

//     bool push(int x)
//     {
//         if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
//         {
//             cout << " Nai hoga" << endl;
//             return false;
//         }
//         else if (front == -1)
//         {
//             front = rear = 0;
//             arr[rear] = x;
//         }
//         else if (rear == size - 1)
//         {
//             rear = 0;
//             arr[rear] = x;
//         }
//         else
//         {
//             arr[++rear] = x;
//         }
//         return true;
//     }

//     int pop()
//     {
//         if (front == -1)
//         {
//             cout << " aur kuch nai hai" << endl;
//             return -1;
//         }
//         int ret = arr[front];
//         arr[front] = -1;
//         if (front == rear)
//         {
//             front = rear = -1;
//         }
//         else if (front == size - 1)
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//         return ret;
//     }
// };

// int main()
// {
//     Cqueue cq(6);
//     cq.push(10);
//     cq.push(20);
//     cq.push(30);
//     cq.push(40);
//     cq.push(50);
//     cq.push(60);
//     // cq.push(70); // isme 'nai hoga' print ho jayega---------
//     cq.pop();
//     cq.pop();
//     cq.pop();
//     cq.pop();
//     cq.pop();
//     cq.pop();
//     // cq.pop();  // isme 'aur kuch nai hai' print ho jayega--------
//     return 0;
// }

// -----------D-E-QUEUE IMPLEMENTATION--------------
// #include <iostream>
// using namespace std;

// class Dequeue
// {
// public:
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     Dequeue(int n)
//     {
//         this->size = n;
//         this->arr = new int[n];
//         this->front = -1;
//         this->rear = -1;
//     }
//     bool push_front(int x)
//     {
//         if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
//         {
//             cout << " Bhara hua hai. nai jayga aur" << endl;
//             return false;
//         }
//         else if (front == -1)
//         {
//             rear = front = 0;
//             arr[front] = x;
//         }
//         else if (front == 0)
//         {
//             front = size - 1;
//             arr[front] = x;
//         }
//         else
//         {
//             front--;
//             arr[front] = x;
//         }
//         return true;
//     }
//     bool push_back(int x)
//     {
//         if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
//         {
//             cout << " nai ja payga aur" << endl;
//             return false;
//         }
//         else if (front == -1)
//         {
//             front = rear = 0;
//             arr[rear] = x;
//         }
//         else if (front != 0 && rear == size - 1)
//         {
//             rear = 0;
//             arr[rear] = x;
//         }
//         else
//         {
//             arr[++rear] = x;
//         }
//         return true;
//     }

//     int front_delete()
//     {
//         if (front == -1)
//         {
//             cout << "aur nai hai, kya delete krega?" << endl;
//             return -1;
//         }

//         int ret = arr[front];
//         arr[front] = -1;

//         if (front == rear)
//         {
//             front = rear = -1;
//         }
//         else if (front == size - 1)
//         {
//             front = 0;
//         }
//         else
//         {
//             front++;
//         }
//         return ret;
//     }

//     int back_delete()
//     {
//         if (front == -1)
//         {
//             cout << "Kuch nai hai delete kya hoga " << endl;
//             return -1;
//         }
//         int ret = arr[rear];
//         arr[rear] = -1;
//         if (front == rear)
//         {
//             front = rear = -1;
//         }
//         else if (rear == 0)
//         {
//             rear = size - 1;
//         }
//         else
//         {
//             rear--;
//         }
//         return ret;
//     }
// };

// int main()
// {
//     Dequeue deq(6);
//     deq.push_front(10);
//     deq.push_back(20);
//     deq.push_front(30);
//     deq.push_back(40);
//     deq.push_front(50);
//     deq.push_back(60);
//     // deq.push_back(70);  // push nai ho payega-----

//     deq.front_delete();
//     deq.back_delete();
//     deq.front_delete();
//     deq.back_delete();
//     deq.front_delete();
//     deq.back_delete();
//     // deq.front_delete(); // aur delete nai ho paygea
//     // deq.back_delete();  // aur delete nai ho paygea
//     return 0;
// }

// -------------------CIRCULAR TOUR-------------------------(CODE ALREADY PRACTICED IN GFG)

// class Solution{
//   public:
//
//     //Function to find starting point where the truck can start to get through
//     //the complete circle without exhausting its petrol in between.
//     int tour(petrolPump p[],int n)
//     {
//        //Your code here
//        int balance=0; int adding =0; int index=0;
//        for(int i=0; i<n; i++){
//             balance+=p[i].petrol-p[i].distance;
//             if(balance<0){
//                 adding += balance; balance=0; index=i+1;
//             }
//        }
//        if(balance+adding>=0)    return index; return -1;
//     }
// };

// ----------------REVERSING K ELEMENTS IN A QUEUE-----------------
// i/p-----  {1,2,3,4,5}   -------------o/p------------{3,2,1,4,5}

// queue<int> modifyQueue(queue<int> q, int k) {
//     // add code here.
//     stack<int> stack;
//     for(int i=0; i<k; i++){
//         stack.push(q.front());q.pop();
//     }
//
//     while(stack.size()!=0){
//         q.push(stack.top()); stack.pop();
//     }
//
//     int n= q.size()-k;
//
//     while(n!=0){
//         q.push(q.front()); q.pop();n--;
//     }
//     return q;
// }

// IMPLEMENTING N QUEUES IN AN ARRAY-----------(ek aur baar niche likha hua hai jisko ki refer krna hai)

// #include <iostream>
// using namespace std;

// class kQueue
// {

// public:
//     int n;
//     int k;
//     int *front;
//     int *rear;
//     int *arr;
//     int *next;
//     int freespot;

//     kQueue(int n, int k)
//     {
//         this->n = n;
//         this->k = k;
//         front = new int[k];
//         rear = new int[k];
//         for (int i = 0; i < k; i++)
//         {
//             front[i] = -1;
//             rear[i] = -1;
//         }
//         next = new int[n];
//         for (int i = 0; i < n; i++)
//         {
//             next[i] = i + 1;
//         }
//         next[n - 1] = -1;
//         arr = new int[n];
//         freespot = 0;
//     }

//     void enqueue(int data, int qn)
//     {
//         // overflow
//         if (freespot == -1)
//         {
//             cout << " no empty space available";
//             return;
//         }

//         // find first free index
//         int index = freespot;

//         // update freespot
//         freespot = next[index];

//         // check whether first element
//         if (front[qn - 1] == -1)
//         {
//             front[qn - 1] = index;
//         }
//         else
//         {
//             // link new element to the previous element
//             next[rear[qn - 1]] = index;
//         }

//         // update next
//         next[index] = -1;

//         // update rear
//         rear[qn - 1] = index;

//         // push element
//         arr[index] = data;
//     }

//     int dequeue(int qn)
//     {
//         //  underflow
//         if (front[qn - 1] == -1)
//         {
//             cout << " queuue underflow" << endl;
//             return -1;
//         }

//         // find the index to pop
//         int index = front[qn - 1];

//         // front ko aage badhao
//         front[qn - 1] = next[index];

//         // freespots ko manage karo
//         next[index] = freespot;
//         freespot = index;
//         return arr[index];
//     }
// };

// int main()
// {
//     kQueue q(10, 3);
//     q.enqueue(10, 1);
//     q.enqueue(15, 1);
//     q.enqueue(20, 2);
//     q.enqueue(25, 1);

//     cout << q.dequeue(1) << endl;
//     cout << q.dequeue(2) << endl;
//     cout << q.dequeue(1) << endl;
//     cout << q.dequeue(1) << endl;
//     cout << q.dequeue(1) << endl;
//     return 0;
// }
// -------------
// -----(ek aur baar likhe hai yaha pe)-----------
// #include <iostream>
// using namespace std;

// class Queue
// {
// public:
//     int n;
//     int s;
//     int *front;
//     int *rear;
//     int *arr;
//     int *next;
//     int freespot;
//     Queue(int n, int s)
//     {
//         this->n = n;
//         this->s = s;
//         front = new int[s];
//         rear = new int[s];
//         for (int i = 0; i < s; i++)
//         {
//             front[i] = -1;
//             rear[i] = -1;
//         }

//         arr = new int[n];
//         next = new int[n];
//         for (int i = 0; i < n; i++)
//         {
//             next[i] = i + 1;
//         }
//         next[n - 1] = -1;
//         freespot = 0;
//     }

//     bool enqueue(int data, int m)
//     {
//         if (freespot < 0)
//         {
//             cout << " cant insert";
//             return false;
//         }
//         int index = freespot;
//         freespot = next[index];
//         next[index] = -1;
//         if (front[m - 1] == -1)
//         {
//             front[m - 1] = index;
//         }
//         else
//         {
//             next[rear[m - 1]] = index;
//         }
//         rear[m - 1] = index;
//         arr[index] = data;
//         return true;
//     }

//     int dequeue(int m)
//     {
//         if (front[m - 1] == -1)
//         {
//             cout << " kch nai nikal payega " << endl;
//             return -1;
//         }
//         int index = front[m - 1];
//         front[m - 1] = next[index];
//         next[index] = freespot;
//         freespot = index;
//         return arr[index];
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Queue qu(6, 3);
//     qu.enqueue(100, 1);
//     cout << " Ho gya daalna " << endl;
//     qu.enqueue(200, 2);
//     cout << " Ho gya daalna " << endl;
//     qu.enqueue(300, 3);
//     cout << " ho gya daalna " << endl;
//     qu.enqueue(101, 1);
//     cout << " Ho gya daalna " << endl;
//     qu.enqueue(201, 2);
//     cout << " Ho gya daalna " << endl;
//     qu.enqueue(301, 3);
//     cout << " ho gya daalna " << endl;
//     cout << endl;
//     cout << qu.dequeue(1) << " nikalna ho gya " << endl;
//     cout << qu.dequeue(2) << " nikalna ho gya " << endl;
//     cout << qu.dequeue(3) << " nikalna ho gya " << endl;
//     return 0;
// }

// --------------------------------------------------

// --------SUM OF ALL THE MINIMUM AND THE MAXIMUM ELEMENTS IN A SUBARRAY OF SIZE 'K' IN AN ARRAY OF SIZE 'N'-------

// #include <iostream>
// #include <queue>
// using namespace std;

// int solve(int *arr, int n, int k)
// {

//     deque<int> maxi(k);
//     deque<int> mini(k);

//     // addition  of first k size window

//     for (int i = 0; i < k; i++)
//     {
//         while (!maxi.empty() && arr[maxi.back()] <= arr[i])
//             maxi.pop_back();

//         while (!mini.empty() && arr[mini.back()] >= arr[i])
//             mini.pop_back();

//         maxi.push_back(i);
//         mini.push_back(i);
//     }

//     int ans = 0;
//     ans += arr[maxi.front()] + arr[mini.front()];

//     // remaining windows ko process karlo---
//     for (int i = k; i < n; i++)
//     {

//         // next window--

//         // removal
//         while (!maxi.empty() && i - maxi.front() >= k)
//         {
//             maxi.pop_front();
//         }
//         while (!mini.empty() && i - mini.front() >= k)
//         {
//             mini.pop_front();
//         }

//         // addition----

//         while (!maxi.empty() && arr[maxi.back()] <= arr[i])
//             maxi.pop_back();

//         while (!mini.empty() && arr[mini.back()] >= arr[i])
//             mini.pop_back();

//         maxi.push_back(i);
//         mini.push_back(i);
//         ans += arr[maxi.front()] + arr[mini.front()];
//     }

//     return ans;
// }

// int main(int argc, char const *argv[])
// {

//     int arr[7] = {2, 5, -1, 7, -3, -1, -2};
//     int k = 4;
//     cout << solve(arr, 7, 4) << endl;

//     return 0;
// }

// SLIDING WINDOW PROBLEM--------
// (finding the maximum sum from the subarray in the given array)
// #include <iostream>
// using namespace std;

// void go(int *arr, int sz, int k)
// {
//     int i = 0, j = 0, sum = 0;
//     int maxx = INT_MIN;
//     while (j < sz)
//     {
//         if (j - i + 1 <= k)
//         {
//             sum += arr[j++];
//         }
//         else
//         {
//             maxx = max(maxx, sum);
//             sum -= arr[i++];
//             sum += arr[++j];
//         }
//     }
//     cout << endl
//          << maxx;
// }

// int main()
// {
//     int arr[7] = {2, 5, -1, 7, -3, -1, 2};
//     int size = 7;
//     go(arr, size, 4);
//     return 0;
// }

// -----------------SUM OF MINIMUM AND MAXIMUM ELEMENT OF SUBARRAYS OF SIZE K-----------------------(USING NORMAL METHOD(NOT USING DEQUE))
// #include <iostream>
// #include <vector>
// using namespace std;

// void go(int *arr, int sz, int k, vector<int> &vctr)
// {
//     int i = 0;
//     int j = 0;
//     int maxx = INT_MIN;
//     int minn = INT_MAX;
//     while (j <= sz)
//     {
//         if (j - i + 1 <= k)
//         {
//             maxx = max(maxx, arr[j]);
//             minn = min(minn, arr[j]);
//             j++;
//         }
//         else
//         {
//             vctr.push_back(maxx + minn);
//             i++;
//             for (int p = i; p <= j; p++)
//             {
//                 maxx = max(maxx, arr[j]);
//                 minn = min(minn, arr[j]);
//             }
//             j++;
//         }
//     }
// }

// int prit(vector<int> vcr, int count)
// {
//     for (auto i : vcr)
//     {
//         count += i;
//     }
//     return count;
// }

// int main()
// {
//     int arr[7] = {2, 5, -1, 7, -3, -1, -2};
//     int size = 7;
//     int k = 4;
//     vector<int> vctr;
//     go(arr, size, k, vctr);
//     int count = 0;
//     cout << prit(vctr, count);
//     return 0;
// }

//-----------------------BINARY TREES CREATION---------------------
// #include <iostream>
// #include <queue>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *buildtree()
// {
//     cout << " ENTER THE DATA" << endl;
//     int data;
//     cin >> data;
//     node *root = new node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << " enter the data for inserting in left of " << data << endl;
//     root->left = buildtree();
//     cout << " enter the data for inserting in right of " << data << endl;
//     root->right = buildtree();
//     return root;
// }

// void levelordertraversal(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             // purana level traverse compute ho chuka hai----
//             cout << endl;
//             if (!q.empty())
//             {
//                 // queue still has some child nodes
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// void inorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void preorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << " ";
//     inorder(root->left);
//     inorder(root->right);
// }

// void postorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     inorder(root->right);
//     cout << root->data << " ";
// }

// // level order matlb hi queue lena hoga
// void buildfromlevelorder(node *&root)
// {
//     queue<node *> q;
//     cout << " Enter the data for root" << endl;
//     int data;
//     cin >> data;
//     root = new node(data);
//     q.push(root);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();

//         cout << " enter the left node for " << temp->data << endl;
//         int leftdata;
//         cin >> leftdata;
//         if (leftdata != -1)
//         {
//             temp->left = new node(leftdata);
//             q.push(temp->left);
//         }

//         cout << " enter the right node for " << temp->data << endl;
//         int rightdata;
//         cin >> rightdata;
//         if (rightdata != -1)
//         {
//             temp->right = new node(rightdata);
//             q.push(temp->right);
//         }
//     }
// }

// int main()
// {
//     node *root = NULL;

// buildfromlevelorder(root);
// levelordertraversal(root);

//     /*  // creating a tree
//   root = buildtree();

//       // level order
//       // cout << " printing the level order traversal output" << endl;

//       // inorder traversal
//       inorder(root);
//       cout << endl;

//       // inorder traversal
//       preorder(root);
//       cout << endl;

//       // inorder traversal
//       postorder(root);
//       cout << endl;  */
//     return 0;
// }

// ------------------------------------ALL THE BINARY QUESTIONS IN ONE -------------------------------
// #include <iostream>
// #include <queue>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *createnode()
// {
//     cout << " enter the data for node" << endl;
//     int da;
//     cin >> da;
//     if (da == -1)
//     {
//         return NULL;
//     }
//     node *newnode = new node(da);
//     cout << "now for the left side of " << da;
//     newnode->left = createnode();
//     cout << " now for the right side of " << da;
//     newnode->right = createnode();
//     return newnode;
// }

// void dispalytree(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         if (temp != NULL)
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//                 q.push(temp->left);
//             if (temp->right)
//                 q.push(temp->right);
//         }
//         else if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//                 q.push(NULL);
//         }
//     }
// }

// void inorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int height(node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int left = height(root->left);
//     int right = height(root->right);
//     return max(left, right) + 1;
// }

// int brutediameter(node *root)
// {
//     if (root == NULL)
//         return 0;
//     int left = brutediameter(root->left);
//     int right = brutediameter(root->right);
//     int hght = height(root->left) + height(root->right) + 1;
//     return max(left, max(right, hght));
// }

// pair<int, int> efficientdiameterapproach(node *root)
// { // first is the diameter and the second is the height--------
//     if (root == NULL)
//         return make_pair(0, 0);
//     pair<int, int> left = efficientdiameterapproach(root->left);
//     pair<int, int> right = efficientdiameterapproach(root->right);
//     int leftdia = left.first;
//     int rightdia = right.first;
//     int heightt = left.second + right.second + 1;
//     pair<int, int> ans;
//     ans.first = max(leftdia, max(rightdia, heightt));
//     ans.second = max(left.second, right.second) + 1;
//     return ans;
// }

// pair<bool, int> checkbalanced(node *root)
// {
//     if (root == NULL)
//         return make_pair(true, 0);
//     pair<bool, int> left = checkbalanced(root->left);
//     pair<bool, int> right = checkbalanced(root->right);
//     bool fir = left.first;
//     bool sec = right.first;
//     bool diff = abs(left.second - right.second) <= 1;
//     pair<bool, int> ans;
//     if (fir && sec && diff)
//         ans.first = true;
//     else
//         ans.first = false;
//     ans.second = max(left.second, right.second) + 1;
//     return ans;
// }

// pair<bool, int> checksumoftree(node *root)
// {
//     if (root == NULL)
//         return make_pair(true, 0);
//     if (root->left == NULL && root->right == NULL)
//         return make_pair(true, root->data);
//     pair<bool, int> left = checksumoftree(root->left);
//     pair<bool, int> right = checksumoftree(root->right);
//     bool fir = left.first;
//     bool sec = right.first;
//     bool condn = left.second + right.second == root->data;
//     pair<bool, int> ans;
//     if (fir && sec && condn)
//         ans.first = true;
//     else
//         ans.first = false;
//     ans.second = root->data + left.second + right.second;
//     return ans;
// }

// bool findidentical(node *root1, node *root2)
// {
//     if (root1 == NULL && root2 == NULL)
//         return true;
//     if (root1 == NULL && root2 != NULL)
//         return false;
//     if (root1 != NULL && root2 == NULL)
//         return false;

//     bool fir = findidentical(root1->left, root2->left);
//     bool sec = findidentical(root1->right, root2->right);
//     bool val = root1->data == root2->data;
//     if (fir && sec && val)
//         return true;
//     return false;
// }

// vector<int> zigzagprint(node *root, vector<int> vctr)
// {
//     queue<node *> q;
//     q.push(root);
//     bool find = true;
//     while (!q.empty())
//     {
//         int size = q.size();
//         vector<int> asn(size);
//         for (int i = 0; i < size; i++)
//         {
//             node *tem = q.front();
//             q.pop();
//             asn[find ? i : (size - 1) - i] = tem->data;
//             if (tem->left)
//                 q.push(tem->left);
//             if (tem->right)
//                 q.push(tem->right);
//         }
//         find = !find;
//         for (auto j : asn)
//             vctr.push_back(j);
//     }
//     return vctr;
// }

// int main()
// {
//     node *nd;
//     nd = createnode();
// dispalytree(nd);
// inorder(nd);
// cout << height(nd);
// cout << brutediameter(nd); // using bruteforce approach
// cout << efficientdiameterapproach(nd).first;
//
//
//
// if (checkbalanced(nd).first)
//     cout << " balanced ";
// else
//     cout << " not balanced";
//
//
//
//
// if (checksumoftree(nd).first)
// {
//     cout << " yes sum of tree is same ";
// }
// else
// {
//     cout << " no sum of the tree is not the same";
// }
//
//
//
// node *rg;
// rg = createnode();
// if (findidentical(nd, rg))
//     cout << "yes identical trees";
// else
//     cout << " no not identical";
//
//
//
//
// vector<int> vctr;
// vector<int> p = zigzagprint(nd, vctr);
// for (auto h : p)
//     cout << h << " ";
//
//
//
//
//
//
//     return 0;
// }

// -------------------VERTICAL TRAVERSAL------------------
// class Solution {

// private:
//     void travleft(Node *root, vector<int>&ans){
//         if((root==NULL) || (root->left==NULL && root->right==NULL))   return;
//         ans.push_back(root->data);
//         if(root->left)  travleft(root->left, ans);
//         else    travleft(root->right, ans);
//     }

//     void travleaf(Node *root, vector<int> & ans){
//         if(root==NULL)  return;
//         if(root->left==NULL && root->right==NULL) {ans.push_back(root->data); return ;}
//         travleaf(root->left, ans);
//         travleaf(root->right, ans);
//     }

//     void travright(Node *root, vector<int> &ans){
//        if(root==NULL || (root->right==NULL && root->left==NULL))    return;
//
//         if(root->right)
//             travright(root->right, ans);
//         else
//             travright(root->left, ans);
//         ans.push_back(root->data);
//     }
// public:
//     vector <int> boundary(Node *root)
//     {
//         vector<int> ans;
//         if(root==NULL)  return ans;

//         ans.push_back(root->data);

//         travleft(root->left,ans);

//         travleaf(root->left, ans);
//         travleaf(root->right, ans);

//         travright(root->right, ans);
//         return ans;
//     }
// };

// ----------------TOP VIEW OF A BINARY TREE-----------
// class Solution
// {
//     public:
//     //Function to return a list of nodes visible from the top view
//     //from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         vector<int> ans;
//         if(root==NULL) return ans;
//         map<int, int> nodetop;
//         queue<pair<Node* , int>>q;
//         q.push(make_pair(root, 0));
//         while(!q.empty()){
//            pair<Node*, int>temp= q.front(); q.pop();
//            Node *frontnode= temp.first;
//            int hd=temp.second;
//            if(nodetop.find(hd)== nodetop.end())
//                 nodetop[hd]=frontnode->data;
//             if(frontnode->left)
//                 q.push(make_pair(frontnode->left, hd-1));
//             if(frontnode->right)
//                 q.push(make_pair(frontnode->right, hd+1));
//         }
//         for(auto i: nodetop)
//             ans.push_back(i.second);

//     return ans; }

// };

// ---------------------BOTTOM VIEW OF BINARY TREE------------
// class Solution {
//   public:
//     vector <int> bottomView(Node *root)
//     {
//          vector<int> ans;
//          if(root==NULL) return ans;

//          map<int, int> topnode;
//          queue<pair<Node *,int>> q;  // yaha int mane horizontal distance---

//          q.push(make_pair(root, 0));

//          while(!q.empty()){
//              pair<Node* , int> temp= q.front();
//              q.pop();
//              Node *frontnode= temp.first;
//              int hd= temp.second;

//              // if one value is present for a Horz. distan. then do nothing--
//                  topnode[hd]= frontnode->data;

//              if(frontnode->left)    q.push(make_pair(frontnode->left, hd-1));
//              if(frontnode->right)    q.push(make_pair(frontnode->right, hd+1));
//          }

//          for(auto i: topnode)   ans.push_back(i.second);
//          return ans;

//     }
// };

//------------------RIGHT VIEW OF A BINARY TREE----------------
// class Solution
// {
//     private:
//         void solve(Node *root, vector<int>&vctr, int level){
//             if(root==NULL)  return;
//             if(vctr.size()== level){
//                 vctr.push_back(root->data) ;
//             }
//             solve(root->right, vctr, level+1);
//             solve(root->left, vctr, level+1);
//
//         }
//     public:
//     //Function to return list containing elements of right view of binary tree.
//     vector<int> rightView(Node *root)
//     {
//         vector<int>vctr;
//         if(root==NULL) return vctr;
//         solve(root, vctr, 0);
//         return vctr;
//     }
// };

//------------LEFT VIEW OF A BINARY TREE------------
// class Solution
// {
//     private:
//         void solve(Node *root, vector<int>&vctr, int level){
//             if(root==NULL)  return;
//             if(vctr.size()== level){
//                 vctr.push_back(root->data) ;
//             }
//             solve(root->left, vctr, level+1);
//             solve(root->right, vctr, level+1);

//         }
//     public:
//     //Function to return list containing elements of right view of binary tree.
//     vector<int> rightView(Node *root)
//     {
//         vector<int>vctr;
//         if(root==NULL) return vctr;
//         solve(root, vctr, 0);
//         return vctr;
//     }
// };

// ---------------------BINARY SEARCH TREE IMPLEMENTATION-------------------

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *maketree(Node *&root, int da)
// {
//     if (root == NULL)
//         return new Node(da);
//     else if (da > root->data)
//         root->right = maketree(root->right, da);
//     else if (da < root->data)
//         root->left = maketree(root->left, da);
//     return root;
// }

// void lvl(Node *&root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node *front = q.front();
//         q.pop();
//         if (front != NULL)
//         {
//             cout << front->data << " ";
//             if (front->left)
//                 q.push(front->left);
//             if (front->right)
//                 q.push(front->right);
//         }
//         else
//         {
//             cout << endl;
//             if (!q.empty())
//                 q.push(NULL);
//         }
//     }
// }

// bool srching(Node *root, int x)
// {
//     if (root == NULL)
//         return false;
//     if (root->data == x)
//         return true;
//     if (root->data > x)
//         return srching(root->left, x);
//     if (root->data < x)
//         return srching(root->right, x);
// }

// int minval(Node *root)
// {
//     if (root->left == NULL)
//         return root->data;
//     return minval(root->left);
// }

// int maxval(Node *root)
// {
//     if (root->right == NULL)
//         return root->data;
//     return maxval(root->right);
// }

// Node *deletenode(Node *&root, int num)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (num == root->data)
//     {
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//         }
//         if (root->left != NULL && root->right == NULL)
//         {
//             Node *temp = root->left;
//             delete root;
//             return temp;
//         }
//         if (root->right != NULL && root->left == NULL)
//         {
//             Node *tm = root->right;
//             delete root;
//             return tm;
//         }
//         if (root->left != NULL && root->right != NULL)
//         {
//             int minn = minval(root->right);
//             root->data = minn;
//             root->right = deletenode(root->right, minn);
//             return root;
//         }
//     }
//     else if (num > root->data)
//     {
//         root->right = deletenode(root->right, num);
//         return root;
//     }
//     else
//     {
//         root->left = deletenode(root->left, num);
//         return root;
//     }
// }

// bool chckvalidbst(Node *root, int min, int max)
// {
//     if (root == NULL)
//         return true;
//     if (root->data >= min && root->data <= max)
//     {
//         bool left = chckvalidbst(root->left, min, root->data);
//         bool right = chckvalidbst(root->right, root->data, max);
//         return left && right;
//     }
//     else
//         return false;
// }

// int kthsmallest(Node *root, int i, int k)
// {
//     if (root == NULL)
//         return -1;
//     int left = kthsmallest(root->left, i, k);
//     if (left != -1)
//     {
//         return left;
//     }
//     i++;
//     if (i == k)
//         return root->data;
//     return kthsmallest(root->right, i, k);
// }

// int main()
// {
//     Node *root = NULL;
//     while (true)
// {
//     cout << " enter the data " << endl;
//     int data;
//     cin >> data;
//     if (data == -1)
//     {
//         break;
//     }
//     root = maketree(root, data);
// }
// lvl(root);
// cout << endl;
// -------searching in a bst--------
//     // if (srching(root, 30))
//     //     cout << " yes present ";
//     // else
//     //     cout << " not present ";

//-------finding min and max--------
//     // cout << minval(root) << endl;
//     // cout << maxval(root) << endl;

// --------deleting node----------
//     root=deletenode(root, 20);
//     lvl(root);

// ------checking valididity of BST
// if (chckvalidbst(root, INT_MIN, INT_MAX))
//     cout << " yes valid ";
// else
//     cout << " no not valid ";

// kth smallest element in an array-------
// int count = 0;
// cout << " the kth smallest element is " << kthsmallest(root, 3, count);

// ----------code for inorder predecessor and inorder successor of a BST---------

// pair<int, int> predecessorSuccessor(BinaryTreeNode<int> * root, int key)
// {
//     BinaryTreeNode<int> *temp = root;
//     int pre = -1;
//     int suc = -1;
//     while (temp->data != key)
//     {
//         if (temp->data > key)
//         {
//             suc = temp->data;
//             temp = temp->left;
//         }
//         else
//         {
//             pre = temp->data;
//             temp = temp->right;
//         }
//     }
//     // pre and suc

//     // pre
//     BinaryTreeNode<int> *lefttree = temp->left;
//     while (lefttree != NULL)
//     {
//         pre = lefttree->data;
//         lefttree = lefttree->right;
//     }

//     // suc
//     BinaryTreeNode<int> *righttree = temp->right;
//     while (righttree != NULL)
//     {
//         suc = righttree->data;
//         righttree = righttree->left;
//     }
//     pair<int, int> ans = make_pair(pre, suc);
//     return ans;
// }
//
// ---------lca of BST---------------
//
// TreeNode<int> *LCAinaBST(TreeNode<int> * root, TreeNode<int> * P, TreeNode<int> * Q)
// {
//     if (root == NULL)
//         return NULL;
//     if (root->data < P->data && root->data < Q->data)
//         return LCAinaBST(root->right, P, Q);
//     if (root->data > P->data && root->data > Q->data)
//         return LCAinaBST(root->left, P, Q);
//     return root;
// }

//     return 0;
// }
//
//

// ------------------HEAPS-------------------------

// #include <iostream>
// using namespace std;

// class heap
// {
// public:
//     int arr[100];
//     int size;

//     heap()
//     {
//         arr[0] = -1;
//         size = 0;
//     }

//     void insert(int val)
//     {
//         size = size + 1;
//         int index = size;
//         arr[index] = val;

//         while (index > 1)
//         {
//             int parent = index / 2;
//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }

//     void print()
//     {
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     void deletefromheap()
//     {
//         if (size == 0)
//         {
//             cout << " nothing to delete";
//             return;
//         }

//         // put last element to first index
//         arr[1] = arr[size];
//         // remove the last element
//         size--;

//         // take root node to its correct position
//         int i = 1;
//         while (i < size)
//         {
//             int leftindex = 2 * i;
//             int rightindex = 2 * i + 1;
//             if (leftindex < size && arr[i] < arr[leftindex])
//             {
//                 swap(arr[i], arr[leftindex]);
//                 i = leftindex;
//             }
//             else if (rightindex < size && arr[rightindex])
//             {
//                 swap(arr[i], arr[rightindex]);
//                 i = rightindex;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
// };

// // heapify algo------(ek node ko apne jagah se uthake sahi jagah pe leke jane wala code ko heapify algo bolte hai)

// void max_heapify(int *arr, int n, int i)
// {
//     int largest = i;
//     int left = 2 * i;
//     int right = 2 * i + 1;

//     if (left <= n && arr[largest] < arr[left])
//     {
//         largest = left;
//     }
//     if (right <= n && arr[largest] < arr[right])
//     {
//         largest = right;
//     }
//     if (largest != i)
//     {
//         swap(arr[largest], arr[i]);
//         max_heapify(arr, n, largest);
//     }
// }

// // ***********  heap sort**************

// void heapsort(int *arr, int n)
// {
//     int size = n;
//     while (size > 1)
//     {
//         // step1: swap
//         swap(arr[size], arr[1]);
//         size--;
//         // step2
//         max_heapify(arr, size, 1);
//     }
// }

// int main()
// {
//     heap h;
//     h.insert(50);
//     h.insert(55);
//     h.insert(53);
//     h.insert(52);
//     h.insert(54);
//     h.print();
//     h.deletefromheap();
//     h.print();
//     int arr[6] = {-1, 54, 53, 55, 52, 50};
//     int n = 5;

//     // heap creation
//     for (int i = n / 2; i > 0; i--)
//     {
//         max_heapify(arr, n, i);
//     }
//     cout << " printing the array is " << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // heapsort
//     heapsort(arr, n);
//     cout << " printing the array now " << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//  -----------HEAP IMPLEMENTATION USING (PRIORITY QUEUE) STL------------------
// #include <iostream>
// #include <queue>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // for max heap------------
//     priority_queue<int> pq;
//     pq.push(4);
//     pq.push(2);
//     pq.push(5);
//     pq.push(3);

//     cout << " the element at the top is" << pq.top() << endl;
//     pq.pop();
//     cout << " element at the top " << pq.top() << endl;
//     cout << "size is " << pq.size() << endl;
//     if (pq.empty())
//         cout << " pq is empty" << endl;
//     else
//         cout << "pq is not empty" << endl;

//     cout << "///////////////////////////////"<< endl;
//     // for min heap------------
//     priority_queue<int, vector<int>, greater<int>> minheap;
//     minheap.push(4);
//     minheap.push(2);
//     minheap.push(5);
//     minheap.push(3);

//     cout << " the element at the top is" << pq.top() << endl;
//     pq.pop();
//     cout << " element at the top " << pq.top() << endl;
//     cout << "size is " << pq.size() << endl;
//     if (pq.empty())
//         cout << " pq is empty" << endl;
//     else
//         cout << "pq is not empty" << endl;
//     return 0;
// }
//
//
//
//
//  ----------------kth smallest element in array-----------------
// int kthSmallest(int arr[], int l, int r, int k) {
//         priority_queue<int> pq;

//         //  step1
//         for(int i=0; i<k; i++){
//             pq.push(arr[i]);
//         }

//         for(int i=k; i<=r; i++){
//             if(arr[i]< pq.top())
//             {
//             pq.pop();
//             pq.push(arr[i]); }
//         }

//         return pq.top();

//     }
//
//
//
// ------------------finding out the kth smallest element----------
// int kthSmallest(int arr[], int l, int r, int k) {
//         priority_queue<int> pq;
//         for(int i=0; i<k; i++){
//             pq.push(arr[i]);
//         }
//         for(int i=k; i<=r; i++){
//             if(arr[i]<pq.top()) {
//                 pq.pop();
//                 pq.push(arr[i]);
//             }
//         }
//         return pq.top();
//}
//
//
//
//
// //   -------------------CHECKING IF A BINARY TREE IS A HEAP OR NOT-----------------------
// class Solution {
//   public:
// //   counting the total number of nodes
//     int countnode(struct Node* root){
//         if(root==NULL)  return 0;
//         int ans=1+countnode(root->left)+countnode(root->right);
//         return ans;
//     }

// //   code for the checking of a complete binary tree
//     bool isCBT(struct Node* root, int index, int cnt){
//         if(root==NULL)  return true;
//         if(index >= cnt) return false;
//         else{
//             bool left= isCBT(root->left, 2*index+1, cnt);
//             bool right= isCBT(root->right, 2*index+2 ,cnt);
//             return (left && right);
//         }
//     }

// //   code for the checking if root ka data uska left aur right ka data se bada hai ya nahi
//     bool ismax(struct Node* root){
//         if(root->left==NULL && root->right==NULL){
//             return true;
//         }
//         if(root->right==NULL){
//             return (root->data > root->left->data);
//         }
//         else{
//             bool left= ismax(root->left);
//             bool right= ismax(root->right);
//             if(left && right && (root->data > root->right->data && root->data > root->left->data)){
//                 return true;
//             }
//             else{return false;}
//         }
//     }

//     bool isHeap(struct Node* tree) {
//         int index=0; int totalcount= countnode(tree);
//         if(isCBT(tree, index, totalcount) && ismax(tree)){
//             return true;
//         }
//         return false;
//     }
// };
//
//
//
//
//
// //   ------------------minimum cost of the ropes ---------------
// class Solution
// {
// public:
//     // Function to return the minimum cost of connecting the ropes.
//     long long minCost(long long arr[], long long n)
//     {
//         priority_queue<long long, vector<long long>, greater<long long>> pq;
//         for (int i = 0; i < n; i++)
//             pq.push(arr[i]);
//         long long cost = 0;

//         while (pq.size() > 1)
//         {
//             long long a = pq.top();
//             pq.pop();
//             long long b = pq.top();
//             pq.pop();
//             long long sum = a + b;
//             cost += sum;
//             pq.push(sum);
//         }
//         return cost;
//     }
// };

// //   ----------------merge two max heaps------------------
// class Solution
// {
// public:
//     void heapify(vector<int> &v, int n, int i)
//     {
//         int largest = i;
//         int left = 2 * i + 1;
//         int right = 2 * i + 2;
//         if (left < n && v[left] > v[largest])
//             largest = left;
//         if (right < n && v[right] > v[largest])
//             largest = right;
//         if (i != largest)
//         {
//             swap(v[largest], v[i]);
//             i = largest;
//             heapify(v, n, i);
//         }
//     }

//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
//     {
//         vector<int> vctr;
//         for (int i = 0; i < n; i++)
//         {
//             vctr.push_back(a[i]);
//         }
//         for (int i = 0; i < m; i++)
//         {
//             vctr.push_back(b[i]);
//         }
//         int nn = vctr.size();
//         for (int i = (nn / 2) - 1; i >= 0; i--)
//         {
//             heapify(vctr, nn, i);
//         }
//         return vctr;
//     }
// };

//***************HASHMAPS IMPLEMENTATION*****************

// #include <iostream>
// #include <map>
// #include <unordered_map>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // creation
//     unordered_map<string, int> m;

//     // insertion(1)
//     pair<string, int> p = make_pair("babbar", 3);
//     m.insert(p);
//     //(2)
//     pair<string, int> pair2("love", 2);
//     m.insert(pair2);
//     //(3)
//     m["mera"] = 1;
//     m["mera"] = 2; // rewrite ho jayega

//     // searching
//     cout << m["mera"] << endl;
//     cout << m.at("babbar") << endl;

//     // cout<< m["unknown"];
//     // cout<< m.at("unknown");

//     cout << "GHH";
//     cout << m.size() << endl;

//     cout << m.count("bro") << endl;

//     m.erase("mera");
//     cout << m.size();

//     for (auto i : m)
//     {
//         cout << i.first << " ";
//     }

//     // iterator
//     unordered_map<string, int>::iterator iter = m.begin();
//     while (iter != m.end())
//     {
//         cout << iter->first << " " << iter->second;
//         iter++;
//     }

//     return 0;
// }

// *******  TRIE   ************

// #include <iostream>
// using namespace std;

// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isterminal;

//     TrieNode(char ch)
//     {
//         data = ch;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }
//         isterminal = false;
//     }
// };

// class Trie
// {
// public:
//     TrieNode *root;

//     Trie()
//     {
//         root = new TrieNode('\0');
//     }

//     void insertUtil(TrieNode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             root->isterminal = true;
//             return;
//         }

//         // assumption: word will be in CAPS
//         int index = word[0] - 'A';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }
//         // recursion
//         insertUtil(child, word.substr(1));
//     }

//     void insert(string word)
//     {
//         insertUtil(root, word);
//     }

//     bool searchUtil(TrieNode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             return root->isterminal;
//         }

//         int index = word[0] - 'A';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             return false;
//         }

//         // recursion
//         return searchUtil(child, word.substr(1));
//     }

//     bool search(string word)
//     {
//         return searchUtil(root, word);
//     }

//     ~Trie()
//     {
//         delete root;
//     }
// };

// int main()
// {
//     Trie *t = new Trie();
//     t->insert("ABCD");
//     t->insert("DO");

//     cout << "Is 'ABCD' present? " << t->search("ABCD") << endl;
//     cout << "Is 'DO' present? " << t->search("DO") << endl;

//     delete t;
//     return 0;
// }

//**************  TRIE (FROM CODING NINJAS)*****************
/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isterminal;
//     TrieNode(char ch)
//     {
//         data = ch;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }
//         isterminal = false;
//     }
// };

// class Trie
// {
//     TrieNode *root;

// public:
//     /** Initialize your data structure here. */
//     Trie()
//     {
//         root = new TrieNode('\0');
//     }

//     void insertutil(TrieNode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             root->isterminal = true;
//             return;
//         }

//         // assumption, word will be in CAPS
//         int index = word[0] - 'a';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }
//         // recursion
//         insertutil(child, word.substr(1));
//     }

//     /** Inserts a word into the trie. */
//     void insert(string word)
//     {
//         insertutil(root, word);
//     }

//     bool searchutil(TrieNode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             return root->isterminal;
//         }
//         int index = word[0] - 'a';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             return false;
//         }
//         // recursion
//         return searchutil(child, word.substr(1));
//     }

//     /** Returns if the word is in the trie. */
//     bool search(string word)
//     {
//         return searchutil(root, word);
//     }

//     bool prefixutil(TrieNode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             return true;
//         }
//         int index = word[0] - 'a';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             return false;
//         }
//         // recursion
//         return prefixutil(child, word.substr(1));
//     }

//     /** Returns if there is any word in the trie that starts with the given prefix. */
//     bool startsWith(string prefix)
//     {

//         return prefixutil(root, prefix);
//     }
// };

//**************LONGEST COMMON PREFIX PROBLEM******************

// class trienode
// {
// public:
//     int data;
//     trienode *children[26];
//     int childcount;
//     bool isterminal;
//     trienode(char ch)
//     {
//         data = ch;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }
//         isterminal = false;
//         childcount = 0;
//     }
// };

// class trie
// {
// public:
//     trienode *root;
//     trie(char ch) { root = new trienode(ch); }

//     void insertutil(trienode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             root->isterminal = true;
//             return;
//         }

//         // assumption, word will be in CAPS
//         int index = word[0] - 'a';
//         trienode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             child = new trienode(word[0]);
//             root->childcount++;
//             root->children[index] = child;
//         }
//         // recursion
//         insertutil(child, word.substr(1));
//     }

//     /** Inserts a word into the trie. */
//     void insert(string word) { insertutil(root, word); }

//     void lcp(string str, string &ans)
//     {
//         for (int i = 0; i < str.length(); i++)
//         {
//             char ch = str[i];
//             if (root->childcount == 1)
//             {
//                 ans.push_back(ch);
//                 int index = ch - 'a';
//                 root = root->children[index];
//             }
//             else
//             {
//                 break;
//             }
//             if (root->isterminal)
//                 break;
//         }
//     }
// };

// string longestCommonPrefix(vector<string> &arr, int n)
// {

//     trie *t = new trie('\0');
//     // insert kardo all strings into trie
//     for (int i = 0; i < n; i++)
//     {
//         t->insert(arr[i]);
//     }

//     string first = arr[0];
//     string ans = "";

//     t->lcp(first, ans);
//     return ans;
// }

//****************PHONE DIRECTORY IMPLEMENTATION USING TRIE**************
// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isterminal;
//     TrieNode(char ch)
//     {
//         data = ch;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }
//         isterminal = false;
//     }
// };

// class Trie
// {
//     TrieNode *root;

// public:
//     /** Initialize your data structure here. */
//     Trie() { root = new TrieNode('\0'); }

//     void insertutil(TrieNode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             root->isterminal = true;
//             return;
//         }

//         // assumption, word will be in CAPS
//         int index = word[0] - 'a';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }
//         // recursion
//         insertutil(child, word.substr(1));
//     }

//     /** Inserts a word into the trie. */
//     void insert(string word) { insertutil(root, word); }

//     void printsuggestions(TrieNode *curr, vector<string> &temp, string prefix)
//     {
//         if (curr->isterminal)
//         {
//             temp.push_back(prefix);
//         }
//         for (char ch = 'a'; ch <= 'z'; ch++)
//         {
//             TrieNode *next = curr->children[ch - 'a'];

//             if (next != NULL)
//             {
//                 prefix.push_back(ch);
//                 printsuggestions(next, temp, prefix);
//                 prefix.pop_back();
//             }
//         }
//     }

//     vector<vector<string>> getsuggestions(string str)
//     {
//         TrieNode *prev = root;
//         vector<vector<string>> output;
//         string prefix = "";
//         for (int i = 0; i < str.length(); i++)
//         {
//             char lastch = str[i];

//             prefix.push_back(lastch);

//             // check for lastch
//             TrieNode *curr = prev->children[lastch - 'a'];

//             // if not fount
//             if (curr == NULL)
//             {
//                 break;
//             }

//             // if found
//             vector<string> temp;
//             printsuggestions(curr, temp, prefix);
//             output.push_back(temp);
//             prev = curr;
//         }
//         return output;
//     }
// };

// vector<vector<string>> phoneDirectory(vector<string> &contactList,
//                                       string &queryStr)
// {

//     // trie creation
//     Trie *t = new Trie();

//     // insert all contact in trie
//     for (int i = 0; i < contactList.size(); i++)
//     {
//         string str = contactList[i];
//         t->insert(str);
//     }

//     return t->getsuggestions(queryStr);
// }

//*****************  RAT IN A MAZE *********************
// #include <bits/stdc++.h>

// bool isSafe(int newx, int newy, vector<vector<bool>> &vis, vector<vector<int>> &arr, int n){
//     if((newx>=0 && newx<n )&&( newy>=0 && newy<n ) && vis[newx][newy]!=1 && arr[newx][newy]==1){
//         return true;
//     }return false;
// }

// void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &vis, string path){
//     // base case
//     if(x==n-1 && y==n-1){
//         ans.push_back(path);
//         return;
//     }

//     // 4 movement
//     // D L R U

//     //down
//     if(isSafe(x+1, y, vis, arr, n)){
//         vis[x][y]=1;
//         solve(x+1, y, arr, n, ans, vis, path+'D');
//         vis[x][y]=0;
//     }
//     //left
//     if(isSafe(x, y-1, vis, arr, n)){
//         vis[x][y]=1;
//         solve(x, y-1, arr, n, ans, vis, path+'L');
//         vis[x][y]=0;
//     }
//     //right
//     if(isSafe(x, y+1, vis, arr, n)){
//         vis[x][y]=1;
//         solve(x, y+1, arr, n, ans, vis, path+'R');
//         vis[x][y]=0;
//     }
//     // up
//     if(isSafe(x-1, y, vis, arr, n)){
//         vis[x][y]=1;
//         solve(x-1, y, arr, n, ans, vis, path+'U');
//         vis[x][y]=0;
//     }
// }
// vector < string > searchMaze(vector < vector < int >> & arr, int n) {
//     vector<string> ans;
//     vector<vector<bool>> visited(n, vector<bool>(n,0));
//     string path= "";
//     if(arr[0][0]==0)return ans;
//     solve(0, 0, arr, n, ans, visited, path);
//     return ans;
// }

// ************* N QUEENS PUZZLE***************
// #include <bits/stdc++.h>

// void addsolution(vector<vector<int>> &ans, vector<vector<int>> &board, int n)
// {
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             temp.push_back(board[i][j]);
//         }
//     }
//     ans.push_back(temp);
// }

// bool isSafe(int row, int col, vector<vector<int>> &board, int n)
// {
//     int x = row;
//     int y = col;

//     // check for the same row
//     while (y >= 0)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         y--;
//     }

//     x = row;
//     y = col;
//     // check for diagonal
//     while (x >= 0 && y >= 0)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         y--;
//         x--;
//     }

//     x = row;
//     y = col;
//     // check for diagonal
//     while (x < n && y >= 0)
//     {
//         if (board[x][y] == 1)
//         {
//             return false;
//         }
//         y--;
//         x++;
//     }
//     return true;
// }

// void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board,
//            int n)
// {
//     // base case
//     if (col == n)
//     {
//         addsolution(ans, board, n);
//         return;
//     }

//     // solve 1 case and the rest recursion will take care

//     for (int row = 0; row < n; row++)
//     {
//         if (isSafe(row, col, board, n))
//         {
//             // if placing queen is safe or not
//             board[row][col] = 1;
//             solve(col + 1, ans, board, n);
//             board[row][col] = 0;
//         }
//     }
// }

// vector<vector<int>> nQueens(int n)
// {
//     vector<vector<int>> board(n, vector<int>(n, 0));
//     vector<vector<int>> ans;
//     solve(0, ans, board, n);
//     return ans;
// }

// ************** GRAPHS (using unordered map)******************

// #include <iostream>
// #include <unordered_map>
// #include <list>
// using namespace std;

// class graph
// {
// public:
//     unordered_map<int, list<int>> adj;

//     void addedge(int u, int v, bool direction)
//     {
//         // create an edge from u to v
//         adj[u].push_back(v);
//         if (direction == 0)
//         {
//             adj[v].push_back(u);
//         }
//     }

//     void printadjlist()
//     {
//         for (auto i : adj)
//         {
//             cout << i.first << "->";
//             for (auto j : i.second)
//             {
//                 cout << j << ",  ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     int n;
//     cout << " enter the number of nodes" << endl;
//     cin >> n;

//     int m;
//     cout << " enter the number of edges" << endl;
//     cin >> m;

//     graph g;

//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         g.addedge(u, v, 0);
//     }

//     // printing  graph
//     g.printadjlist();

//     return 0;
// }

// // ********* graphs(using vector<vector<int>>)***********
// #include <bits/stdc++.h>
// #include<vector>
// vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
//     vector<int>ans[n];
//     for(int i=0; i<m; i++){
//         int u= edges[i][0];
//         int v= edges[i][1];

//         ans[u].push_back(v);
//         ans[v].push_back(u);

//     }

//     vector<vector<int>> adj(n);
//     for(int i=0; i<n; i++){
//         adj[i].push_back(i);
//         for(int j=0; j<ans[i].size(); j++)
//         {
//             adj[i].push_back(ans[i][j]);
//         }
//     }
//     return adj;
// }

// ***************** BFS ***************

// #include <bits/stdc++.h>

// void prepareadj(unordered_map<int, set<int>> &adjlist, vector<pair<int, int>> &edges){
//     for(int i= 0; i<edges.size(); i++){
//         int u= edges[i].first;
//         int v= edges[i].second;

//         adjlist[u].insert(v);
//         adjlist[v].insert(u);
//     }
// }

// void bfs(unordered_map<int, set<int>> &adjlist, unordered_map<int, bool> &visited, vector<int> &ans, int node){
//     queue<int> q;
//     q.push(node);
//     visited[node]=1;

//     while(!q.empty()){
//         int frontnode= q.front();
//         q.pop();

//         // store front node into ans
//         ans.push_back(frontnode);

//         // traverse all the neighbours of frontnode
//         for(auto i: adjlist[frontnode]){
//             if(!visited[i]){
//                 q.push(i);
//                 visited[i]=1;
//             }
//         }
//     }
// }

// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     unordered_map<int, set<int>> adjlist;
//     vector<int> ans;
//     unordered_map<int, bool> visited;

//     prepareadj(adjlist, edges);

//     //traverse all components of a graph
//     for(int i=0; i<vertex; i++){
//         if(!visited[i]){
//             bfs(adjlist, visited, ans, i);
//         }
//     }
//     return ans;
// }

// **************** DFS ALGO *****************

// #include<unordered_map>

// void dfs(int node, unordered_map<int, bool>&vis, unordered_map<int, list<int>> &adj, vector<int> &component){
//     component.push_back(node);
//     vis[node]=true;

//     for(auto i:adj[node]){
//         if(!vis[i]){
//             dfs(i, vis, adj, component);
//         }
//     }

// }

// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//     unordered_map<int, list<int>> adj;
//     for(int i=0; i<edges.size(); i++){
//         int u= edges[i][0];
//         int v= edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     vector<vector<int>> ans;
//     unordered_map<int, bool> vis;
//     for(int i=0; i<V ; i++){
//         if(!vis[i]){
//             vector<int> component;
//             dfs(i, vis, adj, component);
//             ans.push_back(component);
//         }
//     }return ans;
// }

//  *********  DETECTION IN UNDIRECTED GRAPH (USING BFS)  ************

// #include <vector>
// #include <queue>
// #include <list>
// #include <unordered_map>

// using namespace std;

// bool isCyclicBFS(int src, unordered_map<int, bool>& visited, unordered_map<int, list<int>>& adj) {
//     unordered_map<int, int> parent;
//     parent[src] = -1;

//     queue<int> q;
//     q.push(src);

//     while (!q.empty()) {
//         int front = q.front();
//         q.pop();

//         for (auto neighbour : adj[front]) {
//             if (!visited[neighbour]) {
//                 visited[neighbour] = true;
//                 q.push(neighbour);
//                 parent[neighbour] = front;
//             }
//             else if (neighbour != parent[front]) {
//                 return true;
//             }
//         }
//     }

//     return false;
// }

// string cycleDetection(vector<vector<int>>& edges, int n, int m) {
//     unordered_map<int, list<int>> adj;

//     for (int i = 0; i < m; i++) {
//         int u = edges[i][0];
//         int v = edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     unordered_map<int, bool> visited;
//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             visited[i] = true;
//             if (isCyclicBFS(i, visited, adj)) {
//                 return "Yes";
//             }
//         }
//     }

//     return "No";
// }

//  ***********  DETECTION IN UNDIRECTED GRAPH (USING DFS  )****************
// #include <vector>
// #include <queue>
// #include <list>
// #include <unordered_map>

// using namespace std;

// bool isCyclicDFS(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
// {
//     visited[node] = true;
//     for (auto nghbr : adj[node])
//     {
//         if (!visited[nghbr])
//         {
//             bool cycledetect = isCyclicDFS(nghbr, node, visited, adj);
//             if (cycledetect)
//                 return true;
//         }
//         else if (nghbr != parent)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// string cycleDetection(vector<vector<int>> &edges, int n, int m)
// {
//     unordered_map<int, list<int>> adj;

//     for (int i = 0; i < m; i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     unordered_map<int, bool> visited;
//     for (int i = 0; i < n; i++)
//     {
//         if (!visited[i])
//         {
//             visited[i] = true;
//             if (isCyclicDFS(i, -1, visited, adj))
//             {
//                 return "Yes";
//             }
//         }
//     }

//     return "No";
// }

//  ************* Detect Cycle In A Directed Graph(DFS ALGO)  **************

// #include "list"

// bool chckcycl(int node, unordered_map<int, bool> &visited,
//               unordered_map<int, bool> &dfsvisited,
//               unordered_map<int, list<int>> &adj)
// {
//     visited[node] = true;
//     dfsvisited[node] = true;

//     for (auto neighbour : adj[node])
//     {
//         if (!visited[neighbour])
//         {
//             bool cyclede = chckcycl(neighbour, visited, dfsvisited, adj);
//             if (cyclede)
//                 return true;
//         }
//         else if (dfsvisited[neighbour])
//         {
//             return true;
//         }
//     }
//     dfsvisited[node] = false;
//     return false;
// }

// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
// {
//     unordered_map<int, list<int>> adj;
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i].first;
//         int v = edges[i].second;
//         adj[u].push_back(v);
//     }

//     unordered_map<int, bool> visited;
//     unordered_map<int, bool> dfsvisited;

//     for (int i = 0; i < n; i++)
//     {
//         if (!visited[i])
//         {
//             bool cyclefound = chckcycl(i, visited, dfsvisited, adj);
//             if (cyclefound)
//                 return true;
//         }
//     }
//     return false;
// }

//  *******  Topological Sort(using dfs) *****

// #include "list"
// #include "stack"
// #include "unordered_map"
// #include "vector"
// #include "iostream"

// void toposort(int node, unordered_map<int, list<int>>& adj,
//               vector<bool>& visited, stack<int>& stack) {
//   visited[node] = true;
//   for (auto it : adj[node]) {
//     if (!visited[it]) {
//       toposort(it, adj, visited, stack);
//     }
//   }
//   stack.push(node);
// }

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
//   unordered_map<int, list<int>> adj;
//   for (int i = 0; i < edges.size(); i++) {
//     int u = edges[i][0];
//     int v = edges[i][1];

//     adj[u].push_back(v);
//   }
//   vector<bool> visited(v);
//   stack<int> st;
//   for (int i = 0; i < v; i++) {
//     if (!visited[i]) {
//       toposort(i, adj, visited, st);
//     }
//   }
//   vector<int> ansfinal;
//   while (!st.empty()) {
//     ansfinal.push_back(st.top());
//     st.pop();
//   }
//   return ansfinal;
// }

// ******   TOPOGRAPHICAL SORT(bfs) KAHN'S ALGORITHM  **********

// #include <bits/stdc++.h>
// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
//   // Write your code here
//   unordered_map<int, list<int>> adj;
//   for (int i = 0; i < e; i++) {
//     int u = edges[i][0];
//     int v = edges[i][1];
//     adj[u].push_back(v);
//   }

//   vector<int> indegree(v);
//   for (auto i : adj) {
//     for (auto j : i.second) {
//       indegree[j]++;
//     }
//   }

//   queue<int> q;
//   for (int i = 0; i < v; i++) {
//     if (indegree[i] == 0) {
//       q.push(i);
//     }
//   }

//   vector<int> ans;
//   while (!q.empty()) {
//     int front = q.front();
//     q.pop();

//     ans.push_back(front);

//     for (auto nghbr : adj[front]) {
//       indegree[nghbr]--;
//       if (indegree[nghbr] == 0) {
//         q.push(nghbr);
//       }
//     }
//   }

//   return ans;
// }

//  *********   CYCLE DETECTION USING BFS  *****************
// #include <bits/stdc++.h>
// int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {

//   unordered_map<int, list<int>> adj;
//   for (int i = 0; i < edges.size(); i++) {
//     int u = edges[i].first - 1;
//     int v = edges[i].second - 1;
//     adj[u].push_back(v);
//   }

//   vector<int> indegree(n);
//   for (auto i : adj) {
//     for (auto j : i.second) {
//       indegree[j]++;
//     }
//   }

//   queue<int> q;
//   for (int i = 0; i < n; i++) {
//     if (indegree[i] == 0) {
//       q.push(i);
//     }
//   }
//   int count = 0;
//   while (!q.empty()) {
//     int front = q.front();
//     q.pop();

//     count++;

//     for (auto nghbr : adj[front]) {
//       indegree[nghbr]--;
//       if (indegree[nghbr] == 0) {
//         q.push(nghbr);
//       }
//     }
//   }
//   if (count == n) {
//     return false;
//   }
//   return true;
// }

//  ********    SHORTEST PATH IN AN UNDIRECTED GRAPH    *******

// #include "unordered_map"
// #include "list"

// vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s,
//                          int t) {

//   unordered_map<int, list<int>> adj;
//   for (int i = 0; i < edges.size(); i++) {
//     int u = edges[i].first;
//     int v = edges[i].second;

//     adj[u].push_back(v);
//     adj[v].push_back(u);
//   }

//   unordered_map<int, bool> visited;
//   unordered_map<int, int> parent;
//   queue<int> q;
//   q.push(s);
//   visited[s] = true;
//   parent[s] = -1;
//   while (!q.empty()) {
//     int front = q.front();
//     q.pop();
//     for (auto it : adj[front]) {
//       if (!visited[it]) {
//         q.push(it);
//         visited[it] = true;
//         parent[it] = front;
//       }
//     }
//   }

//   // prepare the shortest path
//   vector<int> ans;
//   int currentnode = t;
//   while (currentnode != s) {
//     ans.push_back(currentnode);
//     currentnode = parent[currentnode];
//   }
//   ans.push_back(currentnode);
//   reverse(ans.begin(), ans.end());

//   return ans;
// }

//  ******* SHORTEST PATH IN A DIRECTED GRAPH   ********

// #include <iostream>
// #include <stack>
// #include <vector>
// #include <unordered_map>
// #include <list>
// using namespace std;

// class graph
// {
// public:
//     unordered_map<int, list<pair<int, int>>> adj;

//     void addedge(int u, int v, int weight)
//     {
//         pair<int, int> p = make_pair(v, weight);
//         adj[u].push_back(p);
//     }
//     void printadj()
//     {
//         for (auto i : adj)
//         {
//             cout << i.first << " ->";
//             for (auto j : i.second)
//             {
//                 cout << "(" << j.first << ", " << j.second << "), ";
//             }
//             cout << endl;
//         }
//     }

//     void dfs(int node, unordered_map<int, bool> &visited, stack<int> &topo)
//     {
//         visited[node] = true;
//         for (auto nghbr : adj[node])
//         {
//             if (!visited[nghbr.first])
//             {
//                 dfs(nghbr.first, visited, topo);
//             }
//         }
//         topo.push(node);
//     }

//     void getshorttestpath(int src, vector<int> &dist, stack<int> &topo)
//     {
//         dist[src] = 0;
//         while (!topo.empty())
//         {
//             int top = topo.top();
//             topo.pop();
//             if (dist[top] != INT_MAX)
//             {
//                 for (auto i : adj[top])
//                 {
//                     if (dist[top] + i.second < dist[i.first])
//                     {
//                         dist[i.first] = dist[top] + i.second;
//                     }
//                 }
//             }
//         }
//     }
// };

// int main()
// {
//     graph g;
//     g.addedge(0, 1, 5);
//     g.addedge(0, 2, 3);
//     g.addedge(1, 2, 2);
//     g.addedge(1, 3, 6);
//     g.addedge(2, 3, 7);
//     g.addedge(2, 4, 4);
//     g.addedge(2, 5, 2);
//     g.addedge(3, 4, -1);
//     g.addedge(4, 5, -2);
//     g.printadj();

//     // topological sorting
//     int n = 6;
//     unordered_map<int, bool> visited;
//     stack<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         if (!visited[i])
//         {
//             g.dfs(i, visited, s);
//         }
//     }

//     int src = 1;
//     vector<int> dist(n);
//     for (int i = 0; i < n; i++)
//     {
//         dist[i] = INT_MAX;
//     }
//     g.getshorttestpath(src, dist, s);
//     cout << "answer is: " << endl;
//     for (int i = 0; i < dist.size(); i++)
//     {
//         cout << dist[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//  **********  DIJKSTRA'S ALGORITHM    ************

// #include <bits/stdc++.h>

// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges,
//                      int source) {
//   // CREATE adjency list
//   unordered_map<int, list<pair<int, int>>> adj;
//   for (int i = 0; i < edges; i++) {
//     int u = vec[i][0];
//     int v = vec[i][1];
//     int w = vec[i][2];

//     adj[u].push_back(make_pair(v, w));
//     adj[v].push_back(make_pair(u, w));
//   }

//   // creation of distance array with infinite value initially
//   vector<int> dist(vertices);
//   for (int i = 0; i < vertices; i++)
//     dist[i] = INT_MAX;

//   // creation of set on the basis (distance, node)
//   set<pair<int, int>> st;

//   // initialise distance and set with source node
//   dist[source] = 0;
//   st.insert(make_pair(0, source));

//   while (!st.empty()) {
//       // fetch top record
//     auto top= *(st.begin());

//     int nodedistance= top.first;
//     int topnode= top.second;
//     st.erase(st.begin());

//     // traverse on neighbours
//     for(auto nghbr: adj[topnode])
//     {
//         if(nodedistance+nghbr.second < dist[nghbr.first])
//         {
//             auto record= st.find(make_pair(dist[nghbr.first], nghbr.first));

//             // if record is found then erase it
//             if(record!=st.end()){
//                 st.erase(record);
//             }

//             // dsitance update
//             dist[nghbr.first]= nodedistance+nghbr.second;
//             // record
//             st.insert(make_pair(dist[nghbr.first], nghbr.first));
//         }
//     }
//   }
//   return dist;
// }

//  **********  PRIMS ALGORITHM     ************

// #include <bits/stdc++.h>

// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
// {
//     unordered_map<int, list<pair<int, int>>> adj;
//     for (int i = 0; i < g.size(); i++)
//     {
//         int u = g[i].first.first;
//         int v = g[i].first.second;
//         int w = g[i].second;
//         adj[u].push_back(make_pair(v, w));
//         adj[v].push_back(make_pair(u, w));
//     }

//     vector<int> key(n + 1);
//     vector<int> parent(n + 1);
//     vector<bool> mst(n + 1);

//     for (int i = 0; i <= n; i++)
//     {
//         key[i] = INT_MAX;
//         mst[i] = false;
//         parent[i] = -1;
//     }

//     key[1] = 0;
//     parent[1] = -1;

//     for (int i = 1; i < n; i++)
//     {
//         int mini = INT_MAX;
//         int u;
//         // find the min wali node
//         for (int v = 1; v <= n; v++)
//         {
//             if (mst[v] == false && key[v] < mini)
//             {
//                 u = v;
//                 mini = key[v];
//             }
//         }

//         // mark min node as true
//         mst[u] = true;

//         // check its adjacent nodes
//         for (auto it : adj[u])
//         {
//             int v = it.first;
//             int w = it.second;
//             if (mst[v] == false && w < key[v])
//             {
//                 parent[v] = u;
//                 key[v] = w;
//             }
//         }
//     }

//     vector<pair<pair<int, int>, int>> result;
//     for (int i = 2; i <= n; i++)
//     {
//         result.push_back({{parent[i], i}, key[i]});
//     }

//     return result;
// }

//  ********* DISJOINT SETS AND KRUSKAL'S ALGORTHM  *************

// #include "algorithm"

// bool cmp(vector<int> &a, vector<int> &b) { return a[2] < b[2]; }

// void makeset(vector<int> &parent, vector<int> &rank, int n) {
//   for (int i = 0; i <= n; i++) {
//     parent[i] = i;
//     rank[i] = 0;
//   }
// }

// int findparent(vector<int> &parent, int node) {
//   if (parent[node] == node) {
//     return node;
//   }

//   return parent[node] = findparent(parent, parent[node]);
// }

// void unionset(int u, int v, vector<int> &parent, vector<int>&rank) {
//     u = findparent(parent, u);
//     v=findparent(parent, v);

//     if(rank[u] < rank[v]){
//     parent[u] = v;
//     }
//     else if (rank[v]< rank[u])
//     {
//     parent[v] = u;
//     }
//     else {
//     parent[v] = u;
//     rank[u]++;
//     }
// }

// int minimumSpanningTree(vector<vector<int>> &edges, int n) {
//   sort(edges.begin(), edges.end(), cmp);
//   vector<int> parent(n);
//   vector<int> rank(n);
//   makeset(parent, rank, n);

//   int minweight = 0;

//   for (int i = 0; i < edges.size(); i++) {
//     int u = findparent(parent, edges[i][0]);
//     int v = findparent(parent, edges[i][1]);
//     int wt = edges[i][2];

//     if (u != v) {
//       minweight += wt;
//       unionset(u, v, parent, rank);
//     }
//   }
//   return minweight;
// }

//  *********** BRIDGES IN A GRAPH(TARJANS ALGORITHM)***********

// #include "bits/stdc++.h"

// void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int> &low,
//          vector<vector<int>> &result, unordered_map<int, list<int>> &adj,
//          unordered_map<int, bool> &visited) {

//   visited[node] = true;
//   disc[node] = low[node] = timer++;

//   for (auto nghbr : adj[node]) {
//     if (nghbr == parent)
//       continue;
//     if (!visited[nghbr]) {
//       dfs(nghbr, node, timer, disc, low, result, adj, visited);
//       low[node] = min(low[node], low[nghbr]);
//     }
//     if (low[nghbr] > disc[node]) {
//       vector<int> ans;
//       ans.push_back(node);
//       ans.push_back(nghbr);
//       result.push_back(ans);
//     } else {
//       low[node] = min(low[node], disc[nghbr]);
//     }
//   }
// }

// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
//   // adj list
//   unordered_map<int, list<int>> adj;

//   for (int i = 0; i < edges.size(); i++) {
//     int u = edges[i][0];
//     int v = edges[i][1];

//     adj[u].push_back(v);
//     adj[v].push_back(u);
//   }

//   int timer = 0;
//   vector<int> disc(v);
//   vector<int> low(v);
//   int parent = -1;
//   unordered_map<int, bool> visited;

//   for (int i = 0; i < v; i++) {
//     disc[i] = -1;
//     low[i] = -1;
//   }

//   vector<vector<int>> result;
//   // dfs
//   for (int i = 0; i < v; i++) {
//     if (!visited[i]) {
//       dfs(i, parent, timer, disc, low, result, adj, visited);
//     }
//   }
//   return result;
// }

//  **********  ARTICULATION POINT  **************

// #include <iostream>
// #include <unordered_map>
// #include <list>
// #include <vector>
// using namespace std;

// void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj, vector<int> &ap, int &timer)
// {
//     vis[node] = true;
//     disc[node] = low[node] = timer++;
//     int child = 0;

//     for (auto nghbr : adj[node])
//     {
//         if (nghbr == parent)
//             continue;
//         if (!vis[nghbr])
//         {
//             dfs(nghbr, node, disc, low, vis, adj, ap, timer);
//             low[node] = min(low[node], low[nghbr]);

//             // checking for an articulation point
//             if (low[nghbr] >= disc[node] && parent != -1)
//             {
//                 ap[node] = true;
//             }
//             child++;
//         }
//         else
//         {
//             low[node] = min(low[node], disc[nghbr]);
//         }
//     }
//     if (parent == -1 && child > 1)
//     {
//         ap[node] = 1;
//     }
// }

// int main()
// {

//     int n = 5;
//     int e = 5;

//     vector<pair<int, int>> edges;
//     edges.push_back({0, 3});
//     edges.push_back({3, 4});
//     edges.push_back({0, 4});
//     edges.push_back({0, 1});
//     edges.push_back({1, 2});

//     // adj list
//     unordered_map<int, list<int>> adj;
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i].first;
//         int v = edges[i].second;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     int timer = 0;
//     vector<int> disc(n);
//     vector<int> low(n);
//     unordered_map<int, bool> vis;
//     vector<int> ap(n, 0);

//     for (int i = 0; i < n; i++)
//     {
//         disc[i] = -1;
//         low[i] = -1;
//     }

//     // dfs
//     for (int i = 0; i < n; i++)
//     {
//         if (!vis[i])
//         {
//             dfs(i, -1, disc, low, vis, adj, ap, timer);
//         }
//     }

//     // print ap
//     cout << " articulation points are as follows" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (ap[i] != 0)
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

//  ***********     KOSARAJU'S ALGORITHM    ***************
// #include "algorithm"
// #include "bits/stdc++.h"

// void dfs(unordered_map<int, list<int>> adj, unordered_map<int, bool> &visited,
//          int node, stack<int> &stackk)
// {
//     visited[node] = true;
//     for (auto nghbr : adj[node])
//     {
//         if (!visited[nghbr])
//         {
//             dfs(adj, visited, nghbr, stackk);
//         }
//     }
//     stackk.push(node);
// }

// void revdfs(int node, unordered_map<int, bool> &vis,
//             unordered_map<int, list<int>> &adj)
// {
//     vis[node] = true;
//     for (auto nghbr : adj[node])
//     {
//         if (!vis[nghbr])
//         {
//             revdfs(nghbr, vis, adj);
//         }
//     }
// }

// int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
// {

//     unordered_map<int, list<int>> adj;
//     for (int i = 0; i < edges.size(); i++)
//     {
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//     }

//     // topo sort
//     unordered_map<int, bool> visited;
//     stack<int> stackk;
//     for (int i = 0; i < v; i++)
//     {
//         if (!visited[i])
//         {
//             dfs(adj, visited, i, stackk);
//         }
//     }

//     // create a transpose graph
//     unordered_map<int, list<int>> transpose;
//     for (int i = 0; i < v; i++)
//     {
//         visited[i] = false;
//         for (auto nghbr : adj[i])
//         {
//             transpose[nghbr].push_back(i);
//         }
//     }

//     // dfs using above ordering
//     int count = 0;
//     while (!stackk.empty())
//     {
//         int top = stackk.top();
//         stackk.pop();
//         if (!visited[top])
//         {
//             count++;
//             revdfs(top, visited, transpose);
//         }
//     }
//     return count;
// }

//  *********** BELMANN FORD ALGORITHM  ************
// #include <bits/stdc++.h>
// int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {

//   vector<int> dist(n + 1, 1e9);
//   dist[src] = 0;

//   for (int i = 1; i <= n; i++) {
//     // traverse on edge list
//     for (int j = 0; j < m; j++) {
//       int u = edges[j][0];
//       int v = edges[j][1];
//       int wt = edges[j][2];

//       if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v])) {
//         dist[v] = dist[u] + wt;
//       }
//     }
//   }
//   return dist[dest];

//   // check for negative cycle
//   // bool flag= 0;
//   // for (int j = 0; j < m; j++) {
//   //     int u = edges[j][0];
//   //     int v = edges[j][1];
//   //     int wt = edges[j][2];

//   //     if (dist[u] != INT_MAX && ((dist[u] + wt) < dist[v])) {
//   //         flag= 1;
//   //     }
//   //   }

//   //   if(flag==0)
//   //   {
//   //       return dist[dest];
//   //   }
//   //   return -1;
// }

// ------BELMANN -FORD ALGORITHM CODED BY ME ----------
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {

//     // Write your code here.
//     int n = 4, m = 4;
//     vector<vector<int>> edges = {{1, 2, 4}, {2, 4, 7}, {1, 3, 3}, {3, 4, -2}};
//     int src = 1;
//     int desc = 4;

//     vector<int> ans(n + 1, 1e9);
//     ans[src] = 0;
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             int u = edges[j][0];
//             int v = edges[j][1];
//             int wt = edges[j][2];
//             if (ans[u] + wt < ans[v] && ans[u] != 1e9)
//             {
//                 ans[v] = ans[u] + wt;
//             }
//         }
//     }
//     int flag = 0;
//     for (int j = 0; j < m; j++)
//     {
//         int u = edges[j][0];
//         int v = edges[j][1];
//         int wt = edges[j][2];
//         if (ans[u] + wt < ans[v] && ans[u] != 1e9)
//         {
//             flag = 1;
//             ans[v] = ans[u] + wt;
//         }
//     }
//     if (flag == 1)
//         cout << "NP";
//     else
//     {
//         // for (int i = 0; i <= n; i++)
//         // {
//         //     cout << ans[i] << " ,";
//         // }
//         cout << ans[desc];
//     }
//     return 0;
// }

//  *********** DYNAMIC PROGRAMMING *************
//  USING TOP-DOWN APPROACH
// #include "vector"
// #include <bits/stdc++.h>

// using namespace std;

// int fib(int n, vector<int> &dp)
// {
//     if (n <= 1)
//         return n;
//     if (dp[n] != -1)
//         return dp[n];
//     dp[n] = fib((n - 1), dp) + fib((n - 2), dp);
//     return dp[n];
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> dp(n + 1);
//     for (int i = 0; i < n + 1; i++)
//     {
//         dp[i] = -1;
//     }

//     cout << fib(n, dp) << endl;

//     return 0;
// }

// ********Min Cost Climbing Stairs******
// class Solution {
// public:
// int solve(vector<int> &cost, int n, vector<int> &dp){
//     //base case
//     if(n==0)    return cost[0];
//     if(n==1)    return cost[1];

//     int ans= cost[n]+min(solve(cost, n-1,dp), solve(cost, n-2,dp));
//     return  ans;
// }

// int solve2(vector<int> &cost, int n, vector<int> &dp){
//     //base case
//     if(n==0)    return cost[0];
//     if(n==1)    return cost[1];

//     if(dp[n]!=-1){
//         return dp[n];
//     }

//     dp[n]= cost[n]+min(solve2(cost, n-1,dp), solve2(cost, n-2,dp));
//     return  dp[n];
// }

// int solve3(vector<int>&cost, int n){
//     vector<int> dp(n+1);
//     dp[0]=cost[0];
//     dp[1]=cost[1];

//     for(int i=2; i<n; i++)
//     {
//         dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
//     }
//     return min(dp[n-1], dp[n-2]);

// }

// int solve4(vector<int>&cost, int n){
//     int prev2= cost[0];
//     int prev1= cost[1];
//     for(int i=2; i<n; i++)
//     {
//        int curr= cost[i]+min(prev1, prev2);
//        prev2= prev1; prev1= curr;

//     }
//     return min(prev1, prev2);

// }

//     int minCostClimbingStairs(vector<int>& cost) {
//         // int  n=cost.size();
//         // vector<int>dp(n+1, -1);
//         // int ans= min(solve2(cost, n-1, dp), solve2(cost, n-2, dp));
//         // return ans;

//         // int  n=cost.size();
//         // return solve3(cost, n);

//          int  n=cost.size();
//         return solve4(cost, n);
//     }
// };

//  ************    MINIUM ELEMENTS (COUNTING COINS)    ************

// #include <bits/stdc++.h>

// int solve(vector<int> &num, int x) {
//   if (x == 0)
//     return 0;
//   if (x < 0)
//     return INT_MAX;

//   int mini = INT_MAX;
//   for (int i = 0; i < num.size(); i++) {
//     int ans = solve(num, x - num[i]);
//     if (ans != INT_MAX)
//       mini = min(mini, 1 + ans);
//   }
//   return mini;
// }

// int solvemem(vector<int> &num, int x, vector<int> &dp) {
//   if (x == 0)
//     return 0;
//   if (x < 0)
//     return INT_MAX;

//   if (dp[x] != -1)
//     return dp[x];

//   int mini = INT_MAX;
//   for (int i = 0; i < num.size(); i++) {
//     int ans = solve(num, x - num[i]);
//     if (ans != INT_MAX)
//       mini = min(mini, 1 + ans);
//   }
//   dp[x] = mini;
//   return mini;
// }

// int solvetabulation(vector<int> &num, int x) {
//   vector<int> dp(x + 1, INT_MAX);
//   dp[0] = 0;
//   for (int i = 1; i <= x; i++) {
//     for (int j = 0; j < num.size(); j++) {
//       if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX) {
//         dp[i] = min(dp[i], 1 + dp[i - num[j]]);
//       }
//     }
//   }

//   if (dp[x] == INT_MAX)
//     return -1;
//   return dp[x];
// }

// int minimumElements(vector<int> &num, int x) {
//   // int ans = solve(num, x);
//   // if (ans == INT_MAX)
//   //   return -1;
//   // return ans;

//   // vector<int> dp(x + 1, -1);
//   // int ans = solvemem(num, x, dp);
//   // if (ans == INT_MAX) {
//   //   return -1;
//   // } else {
//   //   return ans;
//   // }

//   return solvetabulation(num, x);
// }

//  ************    MAXIMUM SUM OF NON-ADJACENT ELEMENTS    ****************
// #include <bits/stdc++.h>

// int solve(vector<int> &nums, int n)
// {
//     if (n < 0)
//         return 0;
//     if (n == 0)
//         return nums[0];

//     int incl = solve(nums, n - 2) + nums[n];
//     int excl = solve(nums, n - 1) + 0;

//     return max(incl, excl);
// }

// int solvemem(vector<int> &nums, int n, vector<int> &dp)
// {
//     if (n == 0)
//         return nums[0];
//     if (n < 0)
//         return 0;

//     if (dp[n] != -1)
//         return dp[n];
//     int incl = solve(nums, n - 2) + nums[n];
//     int excl = solve(nums, n - 1) + 0;
//     dp[n] = max(incl, excl);
//     return dp[n];
// }

// int solvetab(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> dp(n, 0);

//     dp[0] = nums[0];

//     for (int i = 1; i < n; i++)
//     {
//         int incl = dp[i - 2] + nums[i];
//         int excl = dp[i - 1] + 0;
//         dp[i] = max(incl, excl);
//     }
//     return dp[n - 1];
// }

// int solvewithSpaceOptimisation(vector<int> &nums)
// {
//     int n = nums.size();

//     int prev2 = 0;
//     int prev1 = nums[0];

//     for (int i = 1; i < n; i++)
//     {
//         int incl = prev2 + nums[i];
//         int excl = prev1 + 0;
//         int ans = max(incl, excl);
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return prev1;
// }

// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     //   int n = nums.size();
//     //   return solve(nums, n - 1);

//     //   int n = nums.size();
//     //   vector<int> dp(n, -1);
//     //   return solvemem(nums, n - 1, dp);

//     //   return solvetab(nums);

//     return solvewithSpaceOptimisation(nums);
// }

//  **************HOUSE ROBBERY PROBLEM ****************
// #include <bits/stdc++.h>

// long long int solve(vector<int> &nums)
// {
//     int n = nums.size();

//     long long int prev2 = 0;
//     long long int prev1 = nums[0];

//     for (int i = 1; i < n; i++)
//     {
//         long long int incl = prev2 + nums[i];
//         long long int excl = prev1 + 0;
//         long long int ans = max(incl, excl);
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return prev1;
// }

// long long int houseRobber(vector<int> &valueInHouse)
// {
//     // Write your code here.
//     int n = valueInHouse.size();
//     if (n == 1)
//         return valueInHouse[0];

//     vector<int> first, second;
//     for (int i = 0; i < n; i++)
//     {
//         if (i != n - 1)
//             first.push_back(valueInHouse[i]);
//         if (i != 0)
//             second.push_back(valueInHouse[i]);
//     }

//     return max(solve(first), solve(second));
// }

// ********** CUTTING ROD INTO SEGMENTS***********
// #include <bits/stdc++.h>
// int solve(int n, int x, int y, int z) {
//   if (n == 0)
//     return 0;
//   if (n < 0)
//     return INT_MIN;
//   int a = solve(n - x, x, y, z) + 1;
//   int b = solve(n - y, x, y, z) + 1;
//   int c = solve(n - z, x, y, z) + 1;

//   return max(a, max(b, c));
// }

// int solvemem(int n, int x, int y, int z, vector<int> &dp) {
//   if (n == 0)
//     return 0;
//   if (n < 0)
//     return INT_MIN;

//   if (dp[n] != -1)
//     return dp[n];
//   int a = solvemem(n - x, x, y, z, dp) + 1;
//   int b = solvemem(n - y, x, y, z, dp) + 1;
//   int c = solvemem(n - z, x, y, z, dp) + 1;

//   dp[n] = max(a, max(b, c));
//   return dp[n];
// }

// int solvetab(int n, int x, int y, int z) {
//   vector<int> vctr(n + 1, INT_MIN);
//   vctr[0] = 0;
//   for (int i = 1; i <= n; i++) {
//     if (i - x >= 0)
//       vctr[i] = max(vctr[i], vctr[i - x] + 1);

//     if (i - y >= 0)
//       vctr[i] = max(vctr[i], vctr[i - y] + 1);

//     if (i - z >= 0)
//       vctr[i] = max(vctr[i], vctr[i - z] + 1);
//   }
//   if (vctr[n] < 0)
//     return 0;
//   else
//     return vctr[n];
// }

// int cutSegments(int n, int x, int y, int z) {
//   // recursion
//   //   int ans = solve(n, x, y, z);
//   //   if (ans < 0)
//   //     return 0;
//   //   else
//   //     return ans;

//   // recursion + memoisation
//   // vector<int> dp(n + 1, -1);
//   // int ans = solvemem(n, x, y, z, dp);
//   // return (ans < 0) ? 0 : ans;

//   // tabulation method
//   return solvetab(n, x, y, z);

//   // space optimisation

// }

// ***************COUNTING DERANGEMENTS***********
// #define MOD 1000000007
// #include "bits/stdc++.h"

// long long solvemem(int n, vector<long long int> &dp) {
//   if (n == 1)
//     return 0;
//   if (n == 2)
//     return 1;

//   if (dp[n] != -1)
//     return dp[n];

//   dp[n] = (((n - 1) % MOD) *
//            ((solvemem(n - 1, dp) % MOD) + (solvemem(n - 2, dp) % MOD)) % MOD) %
//           MOD;

//   return dp[n];
// }

// long long int solvebytab(int n) {
//   vector<long long int> dp(n + 1, -1);

//   dp[1] = 0;
//   dp[2] = 1;
//   for (int i = 3; i <= n; i++) {
//     long long int first = dp[i - 1] % MOD;
//     long long int second = dp[i - 2] % MOD;
//     long long int sum = (first + second) % MOD;
//     long long int ans = ((i - 1) * sum) % MOD;
//     dp[i] = ans;
//   }
//   return dp[n];
// }

// long long int spaceoptimisation(int n) {
//   long long int prev2 = 0;
//   long long int prev1 = 1;
//   for (int i = 3; i <= n; i++) {
//     long long int first = prev1 % MOD;
//     long long int second = prev2 % MOD;
//     long long int sum = (first + second) % MOD;
//     long long int ans = ((i - 1) * sum) % MOD;
//     prev2 = prev1;
//     prev1 = ans;
//   }
//   return prev1;
// }

// long long int countDerangements(int n) {
//   // recursion + memoisation
//   // vector<long long int> dp(n + 1, -1);
//   // return solvemem(n, dp);

//   // tabulation
//   // return solvebytab(n);

//   // space optimisation
//   return spaceoptimisation(n);
// }

//  PAINTING FENCE ALGORITHM
// #include <bits/stdc++.h>
// #define MOD 1000000007

// int add(int a, int b) { return (a % MOD + b % MOD) % MOD; }

// int mul(int a, int b) { return ((a % MOD) * 1LL * b % MOD) % MOD; }

// int solverec(int n, int k) {
//   if (n == 1)
//     return k;
//   if (n == 2)
//     return add(k, mul(k, k - 1));

//   int ans = add(mul(solverec(n - 2, k), k - 1), mul(solverec(n - 1, k), k - 1));
//   return ans;
// }

// int solvemem(int n, int k, vector<int> &dp) {
//   if (n == 1)
//     return k;
//   if (n == 2)
//     return add(k, mul(k, k - 1));

//   if (dp[n] != -1)
//     return dp[n];
//   dp[n] = add(mul(solvemem(n - 2, k, dp), k - 1),
//               mul(solvemem(n - 1, k, dp), k - 1));
//   return dp[n];
// }

// int solvetab(int n, int k) {
//   vector<int> dp(n + 1, -1);
//   dp[1] = k;
//   dp[2] = add(k, mul(k, k - 1));
//   for (int i = 3; i <= n; i++) {
//     dp[i] = add(mul(dp[i - 2], k - 1), mul(dp[i - 1], k - 1));
//   }
//   return dp[n];
// }

// int solvespaceoptimise(int n, int k) {
//   int prev2 = k;
//   int prev1 = add(k, mul(k, k - 1));
//   for (int i = 3; i <= n; i++) {
//     int ans = add(mul(prev2, k - 1), mul(prev1, k - 1));
//     prev2 = prev1;
//     prev1 = ans;
//   }
//   return prev1;
// }

// int numberOfWays(int n, int k) {
//   // using recursion that gives TLE
//   // return solverec(n, k);

//   // using recursion+ memoisation
//   // vector<int> dp(n + 1, -1);
//   // return solvemem(n, k, dp);

//   // using tabulation method
//   return solvetab(n, k);

//   // using space optimisation
//   return solvespaceoptimise(n, k);
// }

//  **********  2-D DP (KNAPSACK PROBLEM)   **************
// #include <bits/stdc++.h>

// int solve(vector<int> &weight, vector<int> &value, int index, int capacity)
// {
//     //	base case
//     // if there is only 1 item to steal, then just compare its weight with the
//     // knapsack capacity
//     if (index == 0)
//     {
//         if (weight[index] <= capacity)
//             return value[0];
//         else
//             return 0;
//     }

//     int include = 0;
//     if (weight[index] <= capacity)
//     {
//         include = value[index] +
//                   solve(weight, value, index - 1, capacity - weight[index]);
//     }
//     int exclude = 0 + solve(weight, value, index - 1, capacity);
//     int ans = max(include, exclude);
//     return ans;
// }

// int solvemem(vector<int> &weight, vector<int> &value, int index, int capacity,
//              vector<vector<int>> &dp)
// {
//     //	base case
//     // if there is only 1 item to steal, then just compare its weight with the
//     // knapsack capacity
//     if (index == 0)
//     {
//         if (weight[index] <= capacity)
//             return value[0];
//         else
//             return 0;
//     }

//     if (dp[index][capacity] != -1)
//         return dp[index][capacity];

//     int include = 0;
//     if (weight[index] <= capacity)
//     {
//         include = value[index] +
//                   solvemem(weight, value, index - 1, capacity - weight[index], dp);
//     }
//     int exclude = 0 + solvemem(weight, value, index - 1, capacity, dp);
//     dp[index][capacity] = max(include, exclude);
//     return dp[index][capacity];
// }

// int solvetab(vector<int> &weight, vector<int> &value, int n, int capacity)
// {
//     vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));

//     for (int w = weight[0]; w <= capacity; w++)
//     {
//         if (weight[0] <= capacity)
//         {
//             dp[0][w] = value[0];
//         }
//         else
//         {
//             dp[0][w] = 0;
//         }
//     }

//     for (int index = 1; index < n; index++)
//     {
//         for (int w = 0; w <= capacity; w++)
//         {
//             int include = 0;
//             if (weight[index] <= w)
//             {
//                 include = value[index] + dp[index - 1][w - weight[index]];
//             }
//             int exclude = 0 + dp[index - 1][w];
//             dp[index][w] = max(include, exclude);
//         }
//     }
//     return dp[n - 1][capacity];
// }

// int solvebyoptimisation(vector<int> &weight, vector<int> &value, int n,
//                         int capacity)
// {
//     vector<int> prev(capacity + 1, 0);
//     vector<int> curr(capacity + 1, 0);

//     for (int w = weight[0]; w <= capacity; w++)
//     {
//         if (weight[0] <= capacity)
//         {
//             prev[w] = value[0];
//         }
//         else
//         {
//             prev[w] = 0;
//         }
//     }

//     for (int index = 1; index < n; index++)
//     {
//         for (int w = 0; w <= capacity; w++)
//         {
//             int include = 0;
//             if (weight[index] <= w)
//             {
//                 include = value[index] + prev[w - weight[index]];
//             }
//             int exclude = 0 + prev[w];
//             curr[w] = max(include, exclude);
//         }
//         prev = curr;
//     }
//     return prev[capacity];
// }

// int solvebyevenmoreoptimisation(vector<int> &weight, vector<int> &value, int n,
//                                 int capacity)
// {
//     vector<int> prev(capacity + 1, 0);
//     vector<int> curr(capacity + 1, 0);

//     for (int w = weight[0]; w <= capacity; w++)
//     {
//         if (weight[0] <= capacity)
//         {
//             curr[w] = value[0];
//         }
//         else
//         {
//             curr[w] = 0;
//         }
//     }

//     for (int index = 1; index < n; index++)
//     {
//         for (int w = capacity; w >= 0; w--)
//         {
//             int include = 0;
//             if (weight[index] <= w)
//             {
//                 include = value[index] + curr[w - weight[index]];
//             }
//             int exclude = 0 + curr[w];
//             curr[w] = max(include, exclude);
//         }
//         prev = curr;
//     }
//     return curr[capacity];
// }

// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
// {

//     // using recursion
//     // return solve(weight, value, n - 1, maxWeight);

//     //  using recursion+memoisation
//     // vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
//     // return solvemem(weight, value, n - 1, maxWeight, dp);

//     // tabulation method
//     // return solvetab(weight, value, n, maxWeight);

//     // space optimisation
//     // return solvebyoptimisation(weight, value, n, maxWeight);

//     // even more space-optimised
//     return solvebyevenmoreoptimisation(weight, value, n, maxWeight);
// }

// ***************GET MINIMUM SQUARES   *************************
//{ Driver Code Starts
// Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution
// {
// public:
//     int solverec(int n)
//     {
//         if (n == 0)
//             return 0;

//         int ans = n;
//         for (int i = 1; i * i <= n; i++)
//         {
//             ans = min(ans, 1 + solverec(n - i * i));
//         }
//         return ans;
//     }

//     int solvemem(int n, vector<int> &dp)
//     {
//         if (n == 0)
//             return 0;
//         if (dp[n] != -1)
//             return dp[n];

//         int ans = n;
//         for (int i = 1; i * i <= n; i++)
//         {
//             ans = min(ans, 1 + solvemem(n - i * i, dp));
//         }
//         dp[n] = ans;
//         return dp[n];
//     }

//     int solvetab(int n)
//     {
//         vector<int> dp(n + 1, INT_MAX);
//         dp[0] = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j * j <= n; j++)
//             {
//                 if (i - j * j >= 0)
//                     dp[i] = min(dp[i], 1 + dp[i - j * j]);
//             }
//         }
//         return dp[n];
//     }

//     int MinSquares(int n)
//     {
//         // return solverec(n);

//         // vector<int> dp(n+1, -1);
//         // return solvemem(n, dp);

//         return solvetab(n);
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         Solution ob;
//         int ans = ob.MinSquares(n);
//         cout << ans << "\n";
//     }
//     return 0;
// }

//  ******************  COMBINATION SUM *******************
// #include <bits/stdc++.h>

// int rec(vector<int> &num, int target)
// {
//     if (target == 0)
//         return 1;
//     if (target < 0)
//         return 0;

//     int sum = 0;
//     for (int i = 0; i < num.size(); i++)
//     {
//         sum += rec(num, target - num[i]);
//     }
//     return sum;
// }

// int rec_mem(vector<int> &num, int target, vector<int> &dp)
// {
//     if (target == 0)
//         return 1;
//     if (target < 0)
//         return 0;
//     if (dp[target] != -1)
//         return dp[target];

//     int sum = 0;
//     for (int i = 0; i < num.size(); i++)
//     {
//         sum += rec_mem(num, target - num[i], dp);
//     }
//     dp[target] = sum;
//     return dp[target];
// }

// int tab(vector<int> &num, int target)
// {

//     vector<int> dp(target + 1, 0);
//     dp[0] = 1;

//     // traversing from target to tar 1
//     for (int i = 1; i < target + 1; i++)
//     {

//         // traverse on th enum vector
//         for (int j = 0; j < num.size(); j++)
//         {
//             if (i - num[j] >= 0)
//             {
//                 dp[i] += dp[i - num[j]];
//             }
//         }
//     }
//     return dp[target];
// }

// int findWays(vector<int> &num, int tar)
// {
//     // recursion
//     //   return rec(num, tar);

//     // recursion+memoisation
//     // vector<int> dp(tar + 1, -1);
//     // return rec_mem(num, tar, dp);

//     // tabulation
//     return tab(num, tar);
// }

// **************** NINJAS TRIP OF DAYS AND PASSES  ***************
// int rec_mem(vector<int> days, vector<int> &cost, int i, vector<int> &dp, int n)
// {
//     if (i >= n)
//         return 0;
//     if (dp[i] > 0)
//         return dp[i];

//     int op1 = cost[0] + rec_mem(days, cost, i + 1, dp, n);

//     int k = i;
//     for (; k < n; k++)
//     {
//         if (days[k] >= days[i] + 7)
//             break;
//     }
//     int op2 = cost[1] + rec_mem(days, cost, k, dp, n);

//     for (; k < n; k++)
//     {
//         if (days[k] >= days[i] + 30)
//             break;
//     }

//     int op3 = cost[2] + rec_mem(days, cost, k, dp, n);

//     dp[i] = min(op1, min(op2, op3));
//     return dp[i];
// }

// int solvebyspaceopti(int n, vector<int> &days, vector<int> &cost)
// {
//     int ans = 0;

//     queue<pair<int, int>> month;
//     queue<pair<int, int>> week;

//     for (int day : days)
//     {

//         // step1 : remove expired days
//         while (!month.empty() && month.front().first + 30 <= day)
//             month.pop();

//         while (!week.empty() && week.front().first + 7 <= day)
//             week.pop();

//         // step2: add cost for the currnet day
//         week.push(make_pair(day, ans + cost[1]));
//         month.push(make_pair(day, ans + cost[2]));

//         // step3: answer update
//         ans = min(ans + cost[0], min(week.front().second, month.front().second));
//     }
//     return ans;
// }

// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {

//     //  recursion+memoisation
//     // vector<int> dp(n + 1);
//     // return rec_mem(days, cost, 0, dp, n);

//     // space optimisation
//     return solvebyspaceopti(n, days, cost);
// }

//    ***********  LARGEST SQUARE THAT CAN BE FORMED IN A MATRIX*******

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// private:
//     int solve(vector<vector<int>> mat, int i, int j, int &maxi)
//     {
//         if (i >= mat.size() || j >= mat[0].size())
//         {
//             return 0;
//         }
//         int right = solve(mat, i, j + 1, maxi);
//         int diagonal = solve(mat, i + 1, j + 1, maxi);
//         int down = solve(mat, i + 1, j, maxi);

//         int ans;
//         if (mat[i][j] == 1)
//         {
//             ans = 1 + min(diagonal, min(right, down));
//             maxi = max(maxi, ans);
//             return ans;
//         }
//          else{
//               return 0;
//          }
//     }

//     int solvemem(vector<vector<int>> &mat, int i, int j, int &maxi, vector<vector<int>> &dp)
//     {
//         if (i >= mat.size() || j >= mat[0].size())
//         {
//             return 0;
//         }

//         if (dp[i][j] != -1)
//             return dp[i][j];

//         int right = solvemem(mat, i, j + 1, maxi, dp);
//         int diagonal = solvemem(mat, i + 1, j + 1, maxi, dp);
//         int down = solvemem(mat, i + 1, j, maxi, dp);

//         if (mat[i][j] == 1)
//         {
//             dp[i][j] = 1 + min(diagonal, min(right, down));
//             maxi = max(maxi, dp[i][j]);
//             return dp[i][j];
//         }
//         else
//             return dp[i][j] = 0;
//     }

//     int solvetab(vector<vector<int>> &mat, int &maxi)
//     {
//         int row = mat.size();
//         int col = mat[0].size();
//         vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));
//         for (int i = row - 1; i >= 0; i--)
//         {
//             for (int j = col - 1; j >= 0; j--)
//             {

//                 int right = dp[i][j + 1];
//                 int diagonal = dp[i + 1][j + 1];
//                 int down = dp[i + 1][j];

//                 if (mat[i][j] == 1)
//                 {
//                     dp[i][j] = 1 + min(diagonal, min(right, down));
//                     maxi = max(maxi, dp[i][j]);
//                 }
//                 else
//                     dp[i][j] = 0;
//             }
//         }
//         return dp[0][0];
//     }

//     int spaceopti(vector<vector<int>> &mat, int &maxi)
//     {
//         int row = mat.size();
//         int col = mat[0].size();

//         vector<int> curr(col + 1, 0);
//         vector<int> next(col + 1, 0);
//         for (int i = row - 1; i >= 0; i--)
//         {
//             for (int j = col - 1; j >= 0; j--)
//             {
//                 int right = curr[j + 1];
//                 int diagonal = next[j + 1];
//                 int down = next[j];

//                 if (mat[i][j] == 1)
//                 {
//                     curr[j] = 1 + min(diagonal, min(right, down));
//                     maxi = max(maxi, curr[j]);
//                 }
//                 else
//                     curr[j] = 0;
//             }
//             next = curr;
//         }
//         return next[0];
//     }

// public:
//     int maxSquare(int n, int m, vector<vector<int>> mat)
//     {
//         int maxi = 0;

//         // recursion
//         // solve(mat, 0, 0, maxi);

//         // recu+memo
//         // vector<vector<int>>dp(n, vector<int> (m, -1));
//         // solvemem(mat, 0, 0, maxi, dp);

//         // tabulation
//         // solvetab(mat, maxi);
//         // return maxi;

//         // space optimisation
//         spaceopti(mat, maxi);
//         return maxi;
//     }
// };

// *************Minimum Score Triangulation of Polygon***************

// class Solution {
// public:

//     // int solve(vector<int> &values, int start, int end){
//     //     if(start+1==end)  return 0;
//     //     int minn= INT_MAX;
//     //     for(int i= start+1; i<=end-1; i++)
//     //     {
//     //         int ans= values[start]*values[i]*values[end]+ solve(values, start, i)+ solve(values, i, end);
//     //         minn=min(minn, ans);
//     //     }
//     //     return minn;
//     // }

//     // int solvemem(vector<int> &values, int start, int end, vector<vector<int>>& dp){
//     //     if(start+1==end)  return 0;
//     //     int minn= INT_MAX;
//     //     if(dp[start][end]!=-1)  return dp[start][end];
//     //     for(int i= start+1; i<=end-1; i++)
//     //     {
//     //         int ans= values[start] * values[i] * values[end] + solvemem(values, start, i, dp)+ solvemem(values, i, end, dp);
//     //         minn=min(minn, ans);
//     //     }
//     //     dp[start][end]=minn;
//     //     return dp[start][end];
//     // }

//     int solvetab(vector<int>&values){
//         int n= values.size();
//         vector<vector<int>> dp(n, vector<int>(n, 0));
//         for(int i= n-1; i>=0; i--){
//             for(int j=i+2; j<n; j++){
//                 int minn= INT_MAX;
//                 for(int k=i+1; k<=j-1; k++)
//                 {
//                     int ans= values[i]*values[j]*values[k]+dp[i][k]+dp[k][j];
//                     minn= min(minn, ans);
//                 }
//                 dp[i][j]= minn;
//             }
//         }
//         return dp[0][n-1];
//     }

//     int minScoreTriangulation(vector<int>& values) {
//         int i=0; int j=values.size()-1;

//         // recursion
//         // return solve(values, i, j);

//         // recursion + memoisation
//         // vector<vector<int>> dp(values.size(), vector<int>(values.size(), -1));
//         // return solvemem(values, i, j, dp);

//         // tabulation
//         // return solvetab(values);

//     }

// };

//  ********* Minimum Sideway Jumps ************

// class Solution {
// public:

//     int solve(vector<int> &obs, int currlane, int currpos){
//         int n= obs.size()-1;
//         if(currpos>=n) return 0;

//         if(obs[currpos+1]!=currlane){
//             return solve(obs, currlane, currpos+1);
//         }
//         else{
//             int minn=INT_MAX;
//             for(int i=1; i<=3; i++)
//             if(obs[currpos]!=i && i!=currlane){
//                 int one= 1+solve(obs, i, currpos);
//                 minn=min(minn, one);
//             }return minn;
//         }
//     }

//     int solvemem(vector<int> &obs, int currlane, int currpos, vector<vector<int>>&dp){
//         int n= obs.size()-1;
//         if(currpos>=n) return 0;
//         if(dp[currlane][currpos]>0)   return dp[currlane][currpos];

//         if(obs[currpos+1] != currlane){
//             return solvemem(obs, currlane, currpos+1, dp);
//         }
//         else{
//             int minn=INT_MAX;
//             for(int i=1; i<=3; i++)
//             if(obs[currpos]!=i && i!=currlane){
//                 int one= 1+solvemem(obs, i, currpos, dp);
//                 minn=min(minn, one);
//             }
//             dp[currlane][currpos]= minn;
//             return dp[currlane][currpos];
//         }
//     }

//     int solvetab(vector<int> &obs){
//         int n= obs.size()-1;
//         vector<vector<int>> dp(4, vector<int>(n+1, 1e9));
//         dp[0][n]=0; dp[1][n]=0; dp[2][n]=0; dp[3][n]= 0;

//         for(int currpos=n-1; currpos>=0; currpos--){
//             for(int currlane=1; currlane<=3; currlane++){
//                 if(obs[currpos+1]!=currlane){
//                     dp[currlane][currpos]=dp[currlane][currpos+1];
//                 }
//                 else{
//                     int minn=1e9;
//                     for(int i=1; i<=3; i++)
//                     if(obs[currpos]!=i && i!=currlane){
//                         int one= 1+dp[i][currpos+1];
//                         minn=min(minn, one);
//                     }
//                     dp[currlane][currpos]= minn;
//                 }
//             }
//         }
//         return min(dp[2][0], min(1+dp[1][0], 1+dp[3][0]));
//     }

//     int spaceopti(vector<int> &obs){
//         int n= obs.size()-1;
//         vector<int> curr(4, INT_MAX);
//         vector<int> next(4, INT_MAX);

//         next[0]=0; next[1]=0; next[2]=0; next[3]= 0;

//         for(int currpos=n-1; currpos>=0; currpos--){
//             for(int currlane=1; currlane<=3; currlane++){
//                 if(obs[currpos+1]!=currlane){
//                     curr[currlane]=next[currlane];
//                 }
//                 else{
//                     int minn=1e9;
//                     for(int i=1; i<=3; i++)
//                     if(obs[currpos]!=i && i!=currlane){
//                         int one= 1+next[i];
//                         minn=min(minn, one);
//                     }
//                     curr[currlane]= minn;
//                 }
//             }
//             next= curr;
//         }
//         return min(next[2], min(1+next[1], 1+next[3]));
//     }

//     int minSideJumps(vector<int>& obstacles) {
//         // recursion
//         // return solve(obstacles, 2, 0);

//         // recursion+memoisation
//         // int n= obstacles.size();
//         // vector<vector<int>> dp(4, vector<int>(n, 0));
//         // return solvemem(obstacles, 2, 0, dp);

//         // tabulation
//         // return solvetab(obstacles);

//         // spaceoptim
//         return spaceopti(obstacles);
//     }
// };

//     *************. Reducing Dishes****************

// class Solution {
// private:
//     int solve(vector<int> &satis, int index, int time ){
//         // base case
//         if(index==satis.size()) return 0;

//         //  include
//         int include= satis[index]* (time+1) +solve(satis, index+1, time +1);
//         // exclude
//         int exclude= 0+ solve(satis, index+1, time);
//         return max(include, exclude);
//     }

//     int solvemem(vector<int>&satis, int index, int time, vector<vector<int>>&dp){

//         // base case
//         if(index==satis.size()) return 0;
//         if(dp[index][time]>0)   return dp[index][time];

//         //include
//         int include= satis[index]* (time+1) +solvemem(satis,index+1, time+1, dp);
//         // exclude
//         int exclude= 0+solvemem(satis, index+1, time, dp);
//         dp[index][time]= max(include, exclude);
//         return dp[index][time];
//     }

//     int solvetab(vector<int>& satis){
//         int n=satis.size();
//         vector<vector<int>>dp(satis.size()+1, vector<int>(satis.size()+1, 0));

//         for(int in=n-1; in>=0; in--){
//             for(int ti=in; ti>=0; ti--){
//                 //include
//                 int include= satis[in]* (ti+1) +dp[in+1][ti+1];
//                 // exclude
//                 int exclude= 0+dp[in+1][ti];
//                 dp[in][ti]=max(include, exclude);
//             }
//         }
//         return dp[0][0];
//     }

//     int spaceopti(vector<int>& satis){
//         int n= satis.size();
//         vector<int> curr(n+1 , 0);
//         vector<int> next(n+1, 0);
//         for(int in=n-1; in>=0; in--){
//             for(int ti=in; ti>=0; ti--)
//             {
//                 //  include
//                 int include= satis[in]* (ti+1) + next[ti+1];
//                 // exclude
//                 int exclude= 0+next[ti];
//                 curr[ti]= max(include, exclude);
//             }
//             next=curr;
//         }
//         return next[0];
//     }

// public:
//     int maxSatisfaction(vector<int>& satisfaction) {
//         int index=0; int time =0;
//         sort(satisfaction.begin(), satisfaction.end());

//         //recursion
//         // return solve(satisfaction, index, time );

//         // recursion + memoisation
//         // vector<vector<int>>dp(satisfaction.size()+1, vector<int>(satisfaction.size()+1, 0));
//         // return solvemem(satisfaction, index, time, dp);

//         //  tabulation
//         // return solvetab(satisfaction);

//         //  space optimisation
//         return spaceopti(satisfaction);

//     }
// };

// *********Longest Increasing Subsequence**********

// class Solution
// {
// private:
//     int solve(int n, int a[], int curr, int prev)
//     {
//         // base case
//         if (curr == n)
//             return 0;

//         // include
//         int take = 0;
//         if (prev == -1 || a[curr] > a[prev])
//         {
//             take = 1 + solve(n, a, curr + 1, curr);
//         }

//         // exclude
//         int notake = 0 + solve(n, a, curr + 1, prev);

//         return max(take, notake);
//     }

//     int solvemem(int n, int a[], int curr, int prev, vector<vector<int>> &dp)
//     {
//         // base case
//         if (curr == n)
//             return 0;
//         if (dp[curr][prev + 1] > 0)
//             return dp[curr][prev + 1];

//         // include
//         int take = 0;
//         if (prev == -1 || a[curr] > a[prev])
//         {
//             take = 1 + solvemem(n, a, curr + 1, curr, dp);
//         }

//         // exclude
//         int notake = 0 + solvemem(n, a, curr + 1, prev, dp);
//         return dp[curr][prev + 1] = max(take, notake);
//     }

//     int solvetab(int n, int a[])
//     {
//         vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

//         for (int i = n - 1; i >= 0; i--)
//         {
//             for (int j = i - 1; j >= -1; j--)
//             {
//                 // include
//                 int take = 0;
//                 if (j == -1 || a[i] > a[j])
//                 {
//                     take = 1 + dp[i + 1][i + 1];
//                 }
//                 // exclude
//                 int notake = 0 + dp[i + 1][j + 1];
//                 dp[i][j + 1] = max(take, notake);
//             }
//         }
//         return dp[0][-1 + 1];
//     }

//     int spaceopti(int n, int a[])
//     {
//         vector<int> next(n + 1, 0);
//         vector<int> curr(n + 1, 0);

//         for (int i = n - 1; i >= 0; i--)
//         {
//             for (int j = i - 1; j >= -1; j--)
//             {

//                 // include
//                 int take = 0;
//                 if (j == -1 || a[i] > a[j])
//                 {
//                     take = 1 + next[i + 1];
//                 }

//                 // exclude
//                 int notake = 0 + next[j + 1];
//                 curr[j + 1] = max(take, notake);
//             }
//             next = curr;
//         }
//         return next[-1 + 1];
//     }
//          *******using 0(N log N) T.C. and 0(N) S.C
//      int solveoptimal(int n, int a[])
//      {
//          if (n == 0)
//              return 0;
//          vector<int> ans;
//          ans.push_back(a[0]);

//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] > ans.back())
//         {
//             ans.push_back(a[i]);
//         }
//         else
//         {
//             // find the index of the jusstttt bada wala element
//             int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
//             ans[index] = a[i];
//         }
//     }
//     return ans.size();
// }

// public:
//     // Function to find length of longest increasing subsequence.
//     int longestSubsequence(int n, int a[])
//     {
//         // recursion
//         //   return solve(n, a, 0, -1);

//         //  recursion+ memeoisation
//         //   vector<vector<int>> dp(n+1, vector<int>(n+1,0));
//         //     return solvemem(n, a, 0, -1, dp);

//         // tabulation
//         // return solvetab(n, a);

//         // space optimisation
//         return spaceopti(n, a);

//        //  moreorganised time complexity
//        return solveoptimal(n, a);
//     }
// };

//      *********RUSSIAN DOLL PROBLEM (BASED ON LONGEST SUBSEQUENCE PROBLEM )*********

// static bool cmp(vector<int> &a, vector<int> &b)
// {
//     if (a[0] == b[0])
//         return a[1] > b[1];
//     return a[0] < b[0];
// }

// int maxEnvelopes(vector<vector<int>> &envelopes)
// {
//     sort(envelopes.begin(), envelopes.end(), cmp);
//     vector<int> ans;
//     ans.push_back(envelopes[0][1]);
//     for (int i = 1; i < envelopes.size(); i++)
//     {
//         if (envelopes[i][1] > ans.back())
//         {
//             ans.push_back(envelopes[i][1]);
//         }
//         else
//         {
//             int findindex = lower_bound(ans.begin(), ans.end(), envelopes[i][1]) - ans.begin();
//             ans[findindex] = envelopes[i][1];
//         }
//     }
//     return ans.size();
// }

// APPLICATION OF LARGEST INCREASING SUBSEQUENCE ------(MAXIMUM HEIGHT OF STACKING CUBOIDS)
// class Solution
// {
// public:
//     bool check(vector<int> base, vector<int> newbox)
//     {
//         if (newbox[0] <= base[0] && newbox[1] <= base[1] && newbox[2] <= base[2])
//             return true;
//         return false;
//     }

//     int solve(int n, vector<vector<int>> &a)
//     {
//         vector<int> currow(n + 1, 0);
//         vector<int> nextrow(n + 1, 0);
//         for (int curr = n - 1; curr >= 0; curr--)
//         {
//             for (int prev = curr - 1; prev >= -1; prev--)
//             {
//                 // include
//                 int take = 0;
//                 if (prev == -1 || check(a[curr], a[prev]))
//                     take = a[curr][2] + nextrow[curr + 1];

//                 // exclude
//                 int notake = 0 + nextrow[prev + 1];

//                 currow[prev + 1] = max(take, notake);
//             }
//             nextrow = currow;
//         }
//         return nextrow[0];
//     }

//     int maxHeight(vector<vector<int>> &cuboids)
//     {
//         for (auto &a : cuboids)
//         {
//             sort(a.begin(), a.end());
//         }

//         // sort all the cuboids on the basis of width or length
//         sort(cuboids.begin(), cuboids.end());

//         // use LIS logic
//         int n = cuboids.size();
//         return solve(n, cuboids);
//     }
// };

//   Pizza With 3n Slices
// class Solution
// {
// public:
//     int solve(int index, int end, vector<int> &slices, int n)
//     {

//         if ((n == 0) || (index > end))
//             return 0;

//         int take = slices[index] + solve(index + 2, end, slices, n - 1);
//         int notake = 0 + solve(index + 1, end, slices, n);
//         return max(take, notake);
//     }

//     int solvemem(int index, int end, vector<int> &slices, int n, vector<vector<int>> &dp)
//     {

//         if ((n == 0) || (index > end))
//             return 0;
//         if (dp[index][n] > 0)
//             return dp[index][n];

//         int take = slices[index] + solvemem(index + 2, end, slices, n - 1, dp);
//         int notake = 0 + solvemem(index + 1, end, slices, n, dp);
//         return dp[index][n] = max(take, notake);
//     }

//     int solvetab(vector<int> &slices)
//     {
//         int n = slices.size();
//         vector<vector<int>> dp1(n + 2, vector<int>(n + 2, 0));
//         for (int i = n - 2; i >= 0; i--)
//         {
//             for (int j = 1; j <= n / 3; j++)
//             {
//                 int take = slices[i] + dp1[i + 2][j - 1];
//                 int notake = 0 + dp1[i + 1][j];
//                 dp1[i][j] = max(take, notake);
//             }
//         }
//         int case1 = dp1[0][n / 3];

//         vector<vector<int>> dp2(n + 2, vector<int>(n + 2, 0));
//         for (int i = n - 1; i >= 1; i--)
//         {
//             for (int j = 1; j <= n / 3; j++)
//             {
//                 int take = slices[i] + dp2[i + 2][j - 1];
//                 int notake = 0 + dp2[i + 1][j];
//                 dp2[i][j] = max(take, notake);
//             }
//         }
//         int case2 = dp2[1][n / 3];

//         return max(case1, case2);
//     }

//     int spaceopti(vector<int> &slices)
//     {
//         int n = slices.size();

//         vector<int> next1(n + 2, 0);
//         vector<int> curr1(n + 2, 0);
//         vector<int> prev1(n + 2, 0);
//         for (int i = n - 2; i >= 0; i--)
//         {
//             for (int j = 1; j <= n / 3; j++)
//             {
//                 int take = slices[i] + next1[j - 1];
//                 int notake = 0 + curr1[j];
//                 prev1[j] = max(take, notake);
//             }
//             next1 = curr1;
//             curr1 = prev1;
//         }
//         int case1 = curr1[n / 3];

//         vector<int> next2(n + 2, 0);
//         vector<int> curr2(n + 2, 0);
//         vector<int> prev2(n + 2, 0);
//         for (int i = n - 1; i >= 1; i--)
//         {
//             for (int j = 1; j <= n / 3; j++)
//             {
//                 int take = slices[i] + next2[j - 1];
//                 int notake = 0 + curr2[j];
//                 prev2[j] = max(take, notake);
//             }
//             next2 = curr2;
//             curr2 = prev2;
//         }
//         int case2 = curr2[n / 3];

//         return max(case1, case2);
//     }

//     int maxSizeSlices(vector<int> &slices)
//     {
//         int k = slices.size();

//         // recursion
//         // int case1= solve(0, k-2, slices, k/3);
//         // int case2= solve(1, k-1, slices, k/3);
//         // return max(case1, case2);

//         // recursion +memo
//         // vector<vector<int>>dp1(k+1, vector<int>(k+1, 0));
//         // int case1= solvemem(0, k-2, slices, k/3, dp1);
//         // vector<vector<int>>dp2(k+1, vector<int>(k+1, 0));
//         // int case2= solvemem(1, k-1, slices, k/3, dp2);
//         // return max(case1, case2);

//         //  tabulation
//         // return  solvetab(slices);

//         // space optimisation
//         return spaceopti(slices);
//     }
// };

// Minimum Swaps To Make Sequences Increasing
// You are given two integer arrays of the same length nums1 and nums2. In one operation, you are allowed to swap nums1[i] with nums2[i].
// For example, if nums1 = [1,2,3,8], and nums2 = [5,6,7,4], you can swap the element at i = 3 to obtain nums1 = [1,2,3,4] and nums2 = [5,6,7,8].
// Return the minimum number of needed operations to make nums1 and nums2 strictly increasing. The test cases are generated so that the given input
// always makes it possible.
// An array arr is strictly increasing if and only if arr[0] < arr[1] < arr[2] < ... < arr[arr.length - 1].
// int solve(vector<int> &nums1, vector<int> &nums2, int i, bool swapped)
// {

//     if (i >= nums1.size())
//         return 0;
//     int ans = INT_MAX;

//     int prev1 = nums1[i - 1];
//     int prev2 = nums2[i - 1];
//     if (swapped)
//         swap(prev1, prev2);

//     // no swap
//     if (nums1[i] > prev1 && nums2[i] > prev2)
//         ans = solve(nums1, nums2, i + 1, 0);
//     if (nums1[i] > prev2 || nums2[i] > prev1)
//         ans = min(ans, 1 + solve(nums1, nums2, i + 1, 1));

//     return ans;
// }

// int solvemem(vector<int> &nums1, vector<int> &nums2, int i, bool swapped, vector<vector<int>> &dp)
// {
//     if (i >= nums1.size())
//         return 0;
//     if (dp[i][swapped] != -1)
//         return dp[i][swapped];
//     int ans = INT_MAX;

//     int prev1 = nums1[i - 1];
//     int prev2 = nums2[i - 1];
//     if (swapped)
//         swap(prev1, prev2);

//     // no swap
//     if (nums1[i] > prev1 && nums2[i] > prev2)
//         ans = solvemem(nums1, nums2, i + 1, 0, dp);
//     if (nums1[i] > prev2 && nums2[i] > prev1)
//         ans = min(ans, 1 + solvemem(nums1, nums2, i + 1, 1, dp));

//     return dp[i][swapped] = ans;
// }

// int solvetab(vector<int> &nums1, vector<int> &nums2)
// {
//     int n = nums1.size();
//     vector<vector<int>> dp(n + 1, vector<int>(2, 0));
//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j >= 0; j--)
//         {

//             int ans = INT_MAX;
//             int prev1 = nums1[i - 1];
//             int prev2 = nums2[i - 1];
//             if (j)
//                 swap(prev1, prev2);

//             // no swap
//             if (nums1[i] > prev1 && nums2[i] > prev2)
//                 ans = dp[i + 1][0];
//             if (nums1[i] > prev2 && nums2[i] > prev1)
//                 ans = min(ans, 1 + dp[i + 1][1]);

//             dp[i][j] = ans;
//         }
//     }
//     return dp[1][0];
// }

// int spaceopti(vector<int> &nums1, vector<int> &nums2)
// {
//     int n = nums1.size();

//     vector<int> curr(2, 0);
//     vector<int> next(2, 0);

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j >= 0; j--)
//         {

//             int ans = INT_MAX;
//             int prev1 = nums1[i - 1];
//             int prev2 = nums2[i - 1];
//             if (j)
//                 swap(prev1, prev2);

//             // no swap
//             if (nums1[i] > prev1 && nums2[i] > prev2)
//                 ans = next[0];
//             if (nums1[i] > prev2 && nums2[i] > prev1)
//                 ans = min(ans, 1 + next[1]);

//             curr[j] = ans;
//         }
//         next = curr;
//     }
//     return next[1];
// }

// int evenmorespaceopti(vector<int> &nums1, vector<int> &nums2)
// {
//     int n = nums1.size();

//     int swap = 0;
//     int noswap = 0;
//     int currswap = 0;
//     int currnoswap = 0;

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j >= 0; j--)
//         {

//             int ans = INT_MAX;
//             int prev1 = nums1[i - 1];
//             int prev2 = nums2[i - 1];
//             if (j)
//             {
//                 int tem = prev2;
//                 prev2 = prev1;
//                 prev1 = tem;
//             }

//             // no swap
//             if (nums1[i] > prev1 && nums2[i] > prev2)
//                 ans = noswap;
//             if (nums1[i] > prev2 && nums2[i] > prev1)
//                 ans = min(ans, 1 + swap);

//             if (j)
//                 currswap = ans;
//             else
//                 currnoswap = ans;
//         }
//         swap = currswap;
//         noswap = currnoswap;
//     }
//     return swap;
// }

// int minSwap(vector<int> &nums1, vector<int> &nums2)
// {
//     nums1.insert(nums1.begin(), -1);
//     nums2.insert(nums2.begin(), -1);
//     // rec
//     // return solve(nums1 , nums2, 1, 0);

//     // rec+mem
//     //  int n= nums1.size();
//     //  vector<vector<int>> dp(n+1, vector<int>(2, -1));
//     //  return solvemem(nums1, nums2, 1, 0, dp);

//     //  tabulation
//     // return solvetab(nums1, nums2);

//     // space opti
//     // return spaceopti(nums1, nums2);

//     // more spaceopti
//     return evenmorespaceopti(nums1, nums2);
// }

// ************** Longest Arithmetic Subsequence of Given Difference****************
// Given an integer array arr and an integer difference, return the length of the longest subsequence in arr which is an arithmetic sequence such that the difference between adjacent elements in the subsequence equals difference.
// int longestSubsequence(vector<int> &arr, int difference)
// {
//     unordered_map<int, int> dp;
//     int ans = 0;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         int temp = arr[i] - difference;
//         int tempans = 0;
//         // check if answer exist for temp or not
//         if (dp.count(temp))
//             tempans = dp[temp];

//         // current answer update
//         dp[arr[i]] = 1 + tempans;

//         // ans update
//         ans = max(ans, dp[arr[i]]);
//     }
//     return ans;
// }

// ************Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.************

// int solve(int n)
// {
//     int ans = 0;
//     if (n <= 1)
//         return 1;
//     for (int i = 1; i <= n; i++)
//     {
//         int left = numTrees(i - 1);
//         int right = numTrees(n - i);
//         int mul = left * right;
//         ans += mul;
//     }
//     return ans;
// }

// int solvemem(vector<int> &dp, int n)
// {
//     int ans = 0;
//     if (n <= 1)
//         return 1;
//     if (dp[n] != 1)
//         return dp[n];
//     for (int i = 1; i <= n; i++)
//     {
//         int left = solvemem(dp, i - 1);
//         int right = solvemem(dp, n - i);
//         int mul = left * right;
//         ans += mul;
//     }
//     return dp[n] = ans;
// }

// int solvetab(int n)
// {
//     vector<int> dp(n + 1, 0);
//     dp[0] = dp[1] = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             int left = dp[j - 1];
//             int right = dp[i - j];
//             int mul = left * right;
//             dp[i] += mul;
//         }
//     }
//     return dp[n];
// }

// int numTrees(int n)
// {
//     // using rec
//     // return solve(n);

//     // using rec+mem
//     // vector<int> dp(n+1, 1);
//     // return solvemem(dp, n);

//     //  using tabulation
//     return solvetab(n);
// }

// **************Guess Number Higher or Lower ******************
// int solve(int start, int end)
// {
//     if (start >= end)
//         return 0;
//     int ans = INT_MAX;
//     for (int i = start; i <= end; i++)
//     {
//         ans = min(ans, i + max(solve(start, i - 1), solve(i + 1, end)));
//     }
//     return ans;
// }

// int solvemem(vector<vector<int>> &dp, int start, int end)
// {
//     if (start >= end)
//         return 0;
//     if (dp[start][end] > 0)
//         return dp[start][end];
//     int ans = INT_MAX;
//     for (int i = start; i <= end; i++)
//     {
//         ans = min(ans, i + max(solvemem(dp, start, i - 1), solvemem(dp, i + 1, end)));
//     }
//     return dp[start][end] = ans;
// }

// int solvetab(int n)
// {
//     vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

//     for (int start = n; start >= 1; start--)
//     {
//         for (int end = start; end <= n; end++)
//         {
//             if (start == end)
//                 continue;
//             else
//             {
//                 int maxi = INT_MAX;
//                 for (int i = start; i <= end; i++)
//                 {
//                     maxi = min(maxi, i + max(dp[start][i - 1], dp[i + 1][end]));
//                 }
//                 dp[start][end] = maxi;
//             }
//         }
//     }
//     return dp[1][n];
// }

// int getMoneyAmount(int n)
// {
//     // rec
//     //  return solve(1, n);

//     // rec+mem
//     //  vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
//     //  return solvemem(dp, 1, n);

//     // tabulation
//     return solvetab(n);
//
// }

//   *******MINIMUM COST TRESS FROM LEAF VALUES***************
// The values of arr correspond to the values of each leaf in an in - order traversal of the tree.The value of each non - leaf node is equal to the product of the largest leaf value in its left and right subtree, respectively.

// int findmaxi(int p, int q, vector<int> &arr)
// {
//     int z = INT_MIN;
//     for (int i = p; i <= q; i++)
//     {
//         z = max(z, arr[i]);
//     }
//     return z;
// }

// int solvemem(vector<int> &arr, int i, int j, vector<vector<int>> &dp)
// {
//     int mini = 1e9;
//     if (i >= j)
//         return 0;
//     if (dp[i][j] > 0)
//         return dp[i][j];
//     for (int k = i; k < j; k++)
//     {
//         int l = findmaxi(i, k, arr);
//         int r = findmaxi(k + 1, j, arr);
//         int small = l * r + solvemem(arr, i, k, dp) + solvemem(arr, k + 1, j, dp);
//         mini = min(mini, small);
//         dp[i][j] = mini;
//     }
//     return dp[i][j];
// }

// int mctFromLeafValues(vector<int> &arr)
// {
//     int n = arr.size();

//     // rec
//     //  return solve(arr, 0, n-1);

//     // rec+mem
//     // vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
//     // return solvemem(arr, 0, n-1, dp);

//     // tabulation
//     return solvetab(arr);
// }

//***********************************   BUY AND SELL STOCKS ***********************

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit, return 0

// int maxProfit(vector4<int> &prices)
// {
//     int mini = prices[0];
//     int profit = 0;
//     for (int i = 1; i < prices.size(); i++)
//     {
//         int diff = prices[i] - mini;
//         profit = max(profit, diff);
//         mini = min(mini, prices[i]);
//     }
//     return profit;
// }

//  **********Best Time to Buy and Sell Stock II(BUYING AND SELLING INFINITE NUMBER OF TIMES)
// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.
// Find and return the maximum profit you can achieve.

// int solve(vector<int> &prices, int index, int n, int buyhoga){
// if (index >= n)
//     return 0;
// int profit = 0;
// if (buyhoga)
// {
//     int buy = -prices[index] + solve(prices, index + 1, n, 0);
//     int ignoreb = 0 + solve(prices, index + 1, n, 1);
//     profit = max(buy, ignoreb);
// }
// else
// {
//     int sell = prices[index] + solve(prices, index + 1, n, 1);
//     int ignores = 0 + solve(prices, index + 1, n, 0);
//     profit = max(sell, ignores);
// }
// return profit;
// }

// int solvemem(vector<int> &prices, int index, int n, int buyhoga, vector<vector<int>> &dp)
// {
//     if (index >= n)
//         return 0;
//     if (dp[index][buyhoga] != -1)
//         return dp[index][buyhoga];
//     int profit = 0;
//     if (buyhoga)
//     {
//         int buy = -prices[index] + solvemem(prices, index + 1, n, 0, dp);
//         int ignoreb = 0 + solvemem(prices, index + 1, n, 1, dp);
//         profit = max(buy, ignoreb);
//     }
//     else
//     {
//         int sell = prices[index] + solvemem(prices, index + 1, n, 1, dp);
//         int ignores = 0 + solvemem(prices, index + 1, n, 0, dp);
//         profit = max(sell, ignores);
//     }
//     return dp[index][buyhoga] = profit;
// }

// int solvetab(vector<int> &prices)
// {
//     int n = prices.size();
//     vector<vector<int>> dp(n + 1, vector<int>(2, 0));
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int buyornot = 0; buyornot <= 1; buyornot++)
//         {
//             int profit = 0;
//             if (buyornot)
//             {
//                 int buy = -prices[index] + dp[index + 1][0];
//                 int ignoreb = 0 + dp[index + 1][1];
//                 profit = max(buy, ignoreb);
//             }
//             else
//             {
//                 int sell = prices[index] + dp[index + 1][1];
//                 int ignores = 0 + dp[index + 1][0];
//                 profit = max(sell, ignores);
//             }
//             dp[index][buyornot] = profit;
//         }
//     }
//     return dp[0][1];
// }

// int solveopti(vector<int> &prices)
// {
//     int n = prices.size();
//     vector<int> curr(2, 0), next(2, 0);
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int buyornot = 0; buyornot <= 1; buyornot++)
//         {
//             int profit = 0;
//             if (buyornot)
//             {
//                 int buy = -prices[index] + next[0];
//                 int ignoreb = 0 + next[1];
//                 profit = max(buy, ignoreb);
//             }
//             else
//             {
//                 int sell = prices[index] + next[1];
//                 int ignores = 0 + next[0];
//                 profit = max(sell, ignores);
//             }
//             curr[buyornot] = profit;
//         }
//         next = curr;
//     }
//     return next[1];
// }

// int maxProfit(vector<int> &prices)
// {
//     int n = prices.size();
//     int buyhoga = 1;
//     int index = 0;
//     // return solve(prices, index, n, buyhoga);

//     // rec+mem
//     // vector<vector<int>> dp(n+1, vector<int>(2, -1));
//     // return solvemem(prices, index, n, buyhoga, dp);

//     // tab
//     // return solvetab(prices);

//     // space opti
//     return solveopti(prices);
// }

//  **************  (BUYING AND SELLING ATMOST A PARTICULAR NUMBER OF TIMES(2))***************

// int solve(vector<int> &prices, int index, int n, int buyhoga, int count)
// {
//     if (index >= n)
//         return 0;
//     if (count == 0)
//         return 0;
//     int profit = 0;
//     if (buyhoga)
//     {
//         int buy = -prices[index] + solve(prices, index + 1, n, 0, count);
//         int ignoreb = 0 + solve(prices, index + 1, n, 1, count);
//         profit = max(buy, ignoreb);
//     }
//     else
//     {
//         int sell = prices[index] + solve(prices, index + 1, n, 1, count - 1);
//         int ignores = 0 + solve(prices, index + 1, n, 0, count);
//         profit = max(sell, ignores);
//     }
//     return profit;
// }

// int solvemem(vector<int> &prices, int index, int n, int buyhoga, int count, vector<vector<vector<int>>> &dp)
// {
//     if (index >= n)
//         return 0;
//     if (count == 0)
//         return 0;
//     if (dp[index][buyhoga][count] != -1)
//         return dp[index][buyhoga][count];
//     int profit = 0;
//     if (buyhoga)
//     {
//         int buy = -prices[index] + solvemem(prices, index + 1, n, 0, count, dp);
//         int ignoreb = 0 + solvemem(prices, index + 1, n, 1, count, dp);
//         profit = max(buy, ignoreb);
//     }
//     else
//     {
//         int sell = prices[index] + solvemem(prices, index + 1, n, 1, count - 1, dp);
//         int ignores = 0 + solvemem(prices, index + 1, n, 0, count, dp);
//         profit = max(sell, ignores);
//     }
//     return dp[index][buyhoga][count] = profit;
// }

// int solvetab(vector<int> &prices)
// {
//     int n = prices.size();
//     vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int buyhga = 0; buyhga <= 1; buyhga++)
//         {
//             for (int count = 1; count <= 2; count++)
//             {
//                 int profit = 0;
//                 if (buyhga)
//                 {
//                     int buy = -prices[index] + dp[index + 1][0][count];
//                     int ignoreb = 0 + dp[index + 1][1][count];
//                     profit = max(buy, ignoreb);
//                 }
//                 else
//                 {
//                     int sell = prices[index] + dp[index + 1][1][count - 1];
//                     int ignores = 0 + dp[index + 1][0][count];
//                     profit = max(sell, ignores);
//                 }
//                 dp[index][buyhga][count] = profit;
//             }
//         }
//     }
//     return dp[0][1][2];
// }

// int spaceopti(vector<int> &prices)
// {
//     int n = prices.size();
//     vector<vector<int>> curr(3, vector<int>(3, 0));
//     vector<vector<int>> next(3, vector<int>(3, 0));
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int buyhga = 0; buyhga <= 1; buyhga++)
//         {
//             for (int count = 1; count <= 2; count++)
//             {
//                 int profit = 0;
//                 if (buyhga)
//                 {
//                     int buy = -prices[index] + next[0][count];
//                     int ignoreb = 0 + next[1][count];
//                     profit = max(buy, ignoreb);
//                 }
//                 else
//                 {
//                     int sell = prices[index] + next[1][count - 1];
//                     int ignores = 0 + next[0][count];
//                     profit = max(sell, ignores);
//                 }
//                 curr[buyhga][count] = profit;
//             }
//         }
//         next = curr;
//     }
//     return next[1][2];
// }

// int maxProfit(vector<int> &prices)
// {

//     // REC
//     int n = prices.size();
//     int buyhoga = 1;
//     int index = 0;
//     int count = 2;
//     // return solve(prices, index, n, buyhoga, count);

//     //  rec+mem(changing of three paramters, so 3d vector)
//     // vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(2, vector<int>(3, -1)));
//     // return solvemem(prices, index, n, buyhoga, count, dp);

//     // tab
//     // return solvetab(prices);

//     // space opti
//     return spaceopti(prices);
// }

//  **************  (BUYING AND SELLING ATMOST A PARTICULAR NUMBER OF TIMES(k))***************(using some changes in the above approach)
// int solve(vector<int> &prices, int index, int n, int buyhoga, int count)
// {
//     if (index >= n)
//         return 0;
//     if (count == 0)
//         return 0;
//     int profit = 0;
//     if (buyhoga)
//     {
//         int buy = -prices[index] + solve(prices, index + 1, n, 0, count);
//         int ignoreb = 0 + solve(prices, index + 1, n, 1, count);
//         profit = max(buy, ignoreb);
//     }
//     else
//     {
//         int sell = prices[index] + solve(prices, index + 1, n, 1, count - 1);
//         int ignores = 0 + solve(prices, index + 1, n, 0, count);
//         profit = max(sell, ignores);
//     }
//     return profit;
// }

// int solvemem(vector<int> &prices, int index, int n, int buyhoga, int count, vector<vector<vector<int>>> &dp)
// {
//     if (index >= n)
//         return 0;
//     if (count == 0)
//         return 0;
//     if (dp[index][buyhoga][count] != -1)
//         return dp[index][buyhoga][count];
//     int profit = 0;
//     if (buyhoga)
//     {
//         int buy = -prices[index] + solvemem(prices, index + 1, n, 0, count, dp);
//         int ignoreb = 0 + solvemem(prices, index + 1, n, 1, count, dp);
//         profit = max(buy, ignoreb);
//     }
//     else
//     {
//         int sell = prices[index] + solvemem(prices, index + 1, n, 1, count - 1, dp);
//         int ignores = 0 + solvemem(prices, index + 1, n, 0, count, dp);
//         profit = max(sell, ignores);
//     }
//     return dp[index][buyhoga][count] = profit;
// }

// int solvetab(vector<int> &prices)
// {
//     int n = prices.size();
//     vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int buyhga = 0; buyhga <= 1; buyhga++)
//         {
//             for (int count = 1; count <= 2; count++)
//             {
//                 int profit = 0;
//                 if (buyhga)
//                 {
//                     int buy = -prices[index] + dp[index + 1][0][count];
//                     int ignoreb = 0 + dp[index + 1][1][count];
//                     profit = max(buy, ignoreb);
//                 }
//                 else
//                 {
//                     int sell = prices[index] + dp[index + 1][1][count - 1];
//                     int ignores = 0 + dp[index + 1][0][count];
//                     profit = max(sell, ignores);
//                 }
//                 dp[index][buyhga][count] = profit;
//             }
//         }
//     }
//     return dp[0][1][2];
// }

// int spaceopti(vector<int> &prices)
// {
//     int n = prices.size();
//     vector<vector<int>> curr(3, vector<int>(3, 0));
//     vector<vector<int>> next(3, vector<int>(3, 0));
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int buyhga = 0; buyhga <= 1; buyhga++)
//         {
//             for (int count = 1; count <= 2; count++)
//             {
//                 int profit = 0;
//                 if (buyhga)
//                 {
//                     int buy = -prices[index] + next[0][count];
//                     int ignoreb = 0 + next[1][count];
//                     profit = max(buy, ignoreb);
//                 }
//                 else
//                 {
//                     int sell = prices[index] + next[1][count - 1];
//                     int ignores = 0 + next[0][count];
//                     profit = max(sell, ignores);
//                 }
//                 curr[buyhga][count] = profit;
//             }
//         }
//         next = curr;
//     }
//     return next[1][2];
// }

// int maxProfit(int k, vector<int> &prices)
// {
//     // REC
//     int n = prices.size();
//     int buyhoga = 1;
//     int index = 0;
//     int count = k;
//     // return solve(prices, index, n, buyhoga, count);

//     //  rec+mem(changing of three paramters, so 3d vector)
//     vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(k + 1, -1)));
//     return solvemem(prices, index, n, buyhoga, count, dp);

//     // tab
//     // return solvetab(prices);

//     // space opti
//     // return spaceopti(prices);
// }

//  **************  (BUYING AND SELLING ATMOST A PARTICULAR NUMBER OF TIMES(k))***************(using operationnumber in the above approach)

// int solve(int index, int operationno, int k, vector<int> &prices)
// {
//     if (index == prices.size())
//         return 0;
//     if (operationno == 2 * k)
//         return 0;
//     int profit;
//     if (!(operationno & 1))
//     {
//         // buying allowed hai even operationno pe
//         int buykaro = -prices[index] + solve(index + 1, operationno + 1, k, prices);
//         int skipkaro = 0 + solve(index + 1, operationno, k, prices);
//         profit = max(buykaro, skipkaro);
//     }
//     else
//     {
//         int sellkaro = prices[index] + solve(index + 1, operationno + 1, k, prices);
//         int skipkaro = 0 + solve(index + 1, operationno, k, prices);
//         profit = max(sellkaro, skipkaro);
//     }
//     return profit;
// }

// int solvemem(int index, int operationno, int k, vector<int> &prices, vector<vector<int>> &dp)
// {
//     if (index == prices.size())
//         return 0;
//     if (operationno == 2 * k)
//         return 0;
//     if (dp[index][operationno] > 0)
//         return dp[index][operationno];
//     int profit;
//     if (!(operationno & 1))
//     {
//         // buying allowed hai even operationno pe
//         int buykaro = -prices[index] + solvemem(index + 1, operationno + 1, k, prices, dp);
//         int skipkaro = 0 + solvemem(index + 1, operationno, k, prices, dp);
//         profit = max(buykaro, skipkaro);
//     }
//     else
//     {
//         int sellkaro = prices[index] + solvemem(index + 1, operationno + 1, k, prices, dp);
//         int skipkaro = 0 + solvemem(index + 1, operationno, k, prices, dp);
//         profit = max(sellkaro, skipkaro);
//     }
//     return dp[index][operationno] = profit;
// }

// int solvetab(int k, vector<int> &prices)
// {
//     int n = prices.size();
//     vector<vector<int>> dp(n + 1, vector<int>(2 * k + 1, 0));
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int operationno = 0; operationno < 2 * k; operationno++)
//         {
//             int profit;
//             if (!(operationno & 1))
//             {
//                 // buying allowed hai even operationno pe
//                 int buykaro = -prices[index] + dp[index + 1][operationno + 1];
//                 int skipkaro = 0 + dp[index + 1][operationno];
//                 profit = max(buykaro, skipkaro);
//             }
//             else
//             {
//                 int sellkaro = prices[index] + dp[index + 1][operationno + 1];
//                 int skipkaro = 0 + dp[index + 1][operationno];
//                 profit = max(sellkaro, skipkaro);
//             }
//             dp[index][operationno] = profit;
//         }
//     }
//     return dp[0][0];
// }

// int maxProfit(int k, vector<int> &prices)
// {
//     int n = prices.size();
//     int index = 0, operationno = 0;
//     // rec
//     // return solve(index, operationno, k, prices);

//     // rec+mem
//     // vector<vector<int>> dp(n+1, vector<int>((2*k)+1, 0));
//     // return solvemem(index, operationno, k, prices, dp);

//     // tabulation
//     return solvetab(k, prices);
// }

//  *************   BUYING AND SELLING GIVING  A TRANSACTION FEE    ***************
// int solve(vector<int> &prices, int index, int n, int buyhoga, int fee)
// {
//     if (index >= n)
//         return 0;
//     int profit = 0;
//     if (buyhoga)
//     {
//         int buy = -prices[index] + solve(prices, index + 1, n, 0, fee);
//         int ignoreb = 0 + solve(prices, index + 1, n, 1, fee);
//         profit = max(buy, ignoreb);
//     }
//     else
//     {
//         int sell = prices[index] + solve(prices, index + 1, n, 1, fee) - fee;
//         int ignores = 0 + solve(prices, index + 1, n, 0, fee);
//         profit = max(sell, ignores);
//     }
//     return profit;
// }

// int solvemem(vector<int> &prices, int index, int n, int buyhoga, vector<vector<int>> &dp, int fee)
// {
//     if (index >= n)
//         return 0;
//     if (dp[index][buyhoga] != -1)
//         return dp[index][buyhoga];
//     int profit = 0;
//     if (buyhoga)
//     {
//         int buy = -prices[index] + solvemem(prices, index + 1, n, 0, dp, fee);
//         int ignoreb = 0 + solvemem(prices, index + 1, n, 1, dp, fee);
//         profit = max(buy, ignoreb);
//     }
//     else
//     {
//         int sell = prices[index] + solvemem(prices, index + 1, n, 1, dp, fee) - fee;
//         int ignores = 0 + solvemem(prices, index + 1, n, 0, dp, fee);
//         profit = max(sell, ignores);
//     }
//     return dp[index][buyhoga] = profit;
// }

// int solvetab(vector<int> &prices, int fee)
// {
//     int n = prices.size();
//     vector<vector<int>> dp(n + 1, vector<int>(2, 0));
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int buyornot = 0; buyornot <= 1; buyornot++)
//         {
//             int profit = 0;
//             if (buyornot)
//             {
//                 int buy = -prices[index] + dp[index + 1][0];
//                 int ignoreb = 0 + dp[index + 1][1];
//                 profit = max(buy, ignoreb);
//             }
//             else
//             {
//                 int sell = prices[index] + dp[index + 1][1] - fee;
//                 int ignores = 0 + dp[index + 1][0];
//                 profit = max(sell, ignores);
//             }
//             dp[index][buyornot] = profit;
//         }
//     }
//     return dp[0][1];
// }

// int solveopti(vector<int> &prices, int fee)
// {
//     int n = prices.size();
//     vector<int> curr(2, 0), next(2, 0);
//     for (int index = n - 1; index >= 0; index--)
//     {
//         for (int buyornot = 0; buyornot <= 1; buyornot++)
//         {
//             int profit = 0;
//             if (buyornot)
//             {
//                 int buy = -prices[index] + next[0];
//                 int ignoreb = 0 + next[1];
//                 profit = max(buy, ignoreb);
//             }
//             else
//             {
//                 int sell = prices[index] + next[1] - fee;
//                 int ignores = 0 + next[0];
//                 profit = max(sell, ignores);
//             }
//             curr[buyornot] = profit;
//         }
//         next = curr;
//     }
//     return next[1];
// }

// int maxProfit(vector<int> &prices, int fee)
// {
//     int n = prices.size();
//     int buyhoga = 1;
//     int index = 0;
//     return solve(prices, index, n, buyhoga, fee);

//     // rec+mem
//     // vector<vector<int>> dp(n+1, vector<int>(2, -1));
//     // return solvemem(prices, index, n, buyhoga, dp, fee);

//     // tab
//     // return solvetab(prices, fee);

//     // space opti
//     // return solveopti(prices, fee);
// }

//  ************    LONGEST COMMON SUBSEQUENCE  ****************
// Given two strings text1 and text2, return the length of their longest common subsequence.If there is no common subsequence, return 0.
// A subsequence of a string is a new string generated from the original string with some characters(can be none) deleted without changing the relative
// order of the remaining characters.

// int solve(string text1, int i, string text2, int j)
// {
//     if (i >= text1.size() || j >= text2.size())
//         return 0;
//     int ans = 0;
//     if (text1[i] == text2[j])
//         ans = 1 + solve(text1, i + 1, text2, j + 1);
//     else
//     {

//         ans = max(solve(text1, i + 1, text2, j), solve(text1, i, text2, j + 1));
//     }
//     return ans;
// }

// int solvemem(string &text1, int i, string &text2, int j, vector<vector<int>> &dp)
// {
//     if (i >= text1.size() || j >= text2.size())
//         return 0;
//     if (dp[i][j] != -1)
//         return dp[i][j];
//     int ans = 0;
//     if (text1[i] == text2[j])
//         ans = 1 + solvemem(text1, i + 1, text2, j + 1, dp);
//     else
//     {

//         ans = max(solvemem(text1, i + 1, text2, j, dp), solvemem(text1, i, text2, j + 1, dp));
//     }
//     return dp[i][j] = ans;
// }

// int solvetab(string &text1, string &text2)
// {
//     vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, 0));
//     for (int i = text1.size() - 1; i >= 0; i--)
//     {
//         for (int j = text2.size() - 1; j >= 0; j--)
//         {
//             int ans = 0;
//             if (text1[i] == text2[j])
//                 ans = 1 + dp[i + 1][j + 1];
//             else
//             {

//                 ans = max(dp[i + 1][j], dp[i][j + 1]);
//             }
//             dp[i][j] = ans;
//         }
//     }
//     return dp[0][0];
// }

// int spaceopti(string &text1, string &text2)
// {
//     vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, 0));
//     vector<int> curr(text2.size() + 1, 0), next(text2.size() + 1, 0);
//     for (int i = text1.size() - 1; i >= 0; i--)
//     {
//         for (int j = text2.size() - 1; j >= 0; j--)
//         {
//             int ans = 0;
//             if (text1[i] == text2[j])
//                 ans = 1 + next[j + 1];
//             else
//             {

//                 ans = max(next[j], curr[j + 1]);
//             }
//             curr[j] = ans;
//         }
//         next = curr;
//     }
//     return next[0];
// }

// int longestCommonSubsequence(string text1, string text2)
// {

//     // recursion
//     // return solve(text1, 0, text2, 0);

//     // recursion+memoisation
//     // vector<vector<int>> dp(text1.length(), vector<int> (text2.length(), -1));
//     // return solvemem(text1, 0, text2, 0, dp) ;

//     //  tabulation
//     return solvetab(text1, text2);

//     // space opti
//     return spaceopti(text1, text2);
// }

//  ************  LONGEST PALINDROMIC SUBSEQUENCE  ****************

// int solve(string text1, int i, string text2, int j)
// {
//     if (i >= text1.size() || j >= text2.size())
//         return 0;
//     int ans = 0;
//     if (text1[i] == text2[j])
//         ans = 1 + solve(text1, i + 1, text2, j + 1);
//     else
//     {

//         ans = max(solve(text1, i + 1, text2, j), solve(text1, i, text2, j + 1));
//     }
//     return ans;
// }

// int solvemem(string &text1, int i, string &text2, int j, vector<vector<int>> &dp)
// {
//     if (i >= text1.size() || j >= text2.size())
//         return 0;
//     if (dp[i][j] != -1)
//         return dp[i][j];
//     int ans = 0;
//     if (text1[i] == text2[j])
//         ans = 1 + solvemem(text1, i + 1, text2, j + 1, dp);
//     else
//     {

//         ans = max(solvemem(text1, i + 1, text2, j, dp), solvemem(text1, i, text2, j + 1, dp));
//     }
//     return dp[i][j] = ans;
// }

// int solvetab(string &text1, string &text2)
// {
//     vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, 0));
//     for (int i = text1.size() - 1; i >= 0; i--)
//     {
//         for (int j = text2.size() - 1; j >= 0; j--)
//         {
//             int ans = 0;
//             if (text1[i] == text2[j])
//                 ans = 1 + dp[i + 1][j + 1];
//             else
//             {

//                 ans = max(dp[i + 1][j], dp[i][j + 1]);
//             }
//             dp[i][j] = ans;
//         }
//     }
//     return dp[0][0];
// }

// int spaceopti(string &text1, string &text2)
// {
//     vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, 0));
//     vector<int> curr(text2.size() + 1, 0), next(text2.size() + 1, 0);
//     for (int i = text1.size() - 1; i >= 0; i--)
//     {
//         for (int j = text2.size() - 1; j >= 0; j--)
//         {
//             int ans = 0;
//             if (text1[i] == text2[j])
//                 ans = 1 + next[j + 1];
//             else
//             {

//                 ans = max(next[j], curr[j + 1]);
//             }
//             curr[j] = ans;
//         }
//         next = curr;
//     }
//     return next[0];
// }

// int longestPalindromeSubseq(string s)
// {

//     string rev = s;
//     reverse(rev.begin(), rev.end());
//     // recursion
//     // return solve(s, 0, rev, 0);

//     // recursion+memoisation
//     // vector<vector<int>> dp(s.length(), vector<int> (rev.length(), -1));
//     // return solvemem(s, 0, rev, 0, dp) ;

//     //  tabulation
//     // return solvetab(s, rev);

//     // space opti
//     return spaceopti(s, rev);
// }

//  *******************(**EDIT DISTANCE**)Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.************
// int solve(string &word1, int i, string &word2, int j)
// {
//     if (i >= word1.size())
//         return word2.size() - j;
//     if (j >= word2.size())
//         return word1.size() - i;

//     int ans = 0;
//     if (word1[i] == word2[j])
//         ans = solve(word1, i + 1, word2, j + 1);
//     else
//     {
//         // insert
//         int insertans = 1 + solve(word1, i, word2, j + 1);
//         // delete
//         int deleteans = 1 + solve(word1, i + 1, word2, j);
//         // replace
//         int replaceans = 1 + solve(word1, i + 1, word2, j + 1);
//         ans = min(insertans, min(deleteans, replaceans));
//     }
//     return ans;
// }

// int solvemem(string &word1, int i, string &word2, int j, vector<vector<int>> &dp)
// {
//     if (i >= word1.size())
//         return word2.size() - j;
//     if (j >= word2.size())
//         return word1.size() - i;
//     if (dp[i][j] != -1)
//         return dp[i][j];

//     int ans = 0;
//     if (word1[i] == word2[j])
//         ans = solvemem(word1, i + 1, word2, j + 1, dp);
//     else
//     {
//         // insert
//         int insertans = 1 + solvemem(word1, i, word2, j + 1, dp);
//         // delete
//         int deleteans = 1 + solvemem(word1, i + 1, word2, j, dp);
//         // replace
//         int replaceans = 1 + solvemem(word1, i + 1, word2, j + 1, dp);
//         ans = min(insertans, min(deleteans, replaceans));
//     }
//     return dp[i][j] = ans;
// }

// int solvetab(string &word1, string &word2)
// {
//     vector<vector<int>> dp(word1.length() + 1, vector<int>(word2.length() + 1, 0));
//     for (int j = 0; j <= word2.length(); j++)
//     {
//         dp[word1.length()][j] = word2.length() - j;
//     }
//     for (int i = 0; i <= word1.length(); i++)
//     {
//         dp[i][word2.length()] = word1.length() - i;
//     }

//     for (int i = word1.length() - 1; i >= 0; i--)
//     {
//         for (int j = word2.length() - 1; j >= 0; j--)
//         {
//             int ans = 0;
//             if (word1[i] == word2[j])
//                 ans = dp[i + 1][j + 1];
//             else
//             {
//                 // insert
//                 int insertans = 1 + dp[i][j + 1];
//                 // delete
//                 int deleteans = 1 + dp[i + 1][j];
//                 // replace
//                 int replaceans = 1 + dp[i + 1][j + 1];
//                 ans = min(insertans, min(deleteans, replaceans));
//             }
//             dp[i][j] = ans;
//         }
//     }
//     return dp[0][0];
// }

// int spaceopti(string &word1, string &word2)
// {
//     vector<int> curr(word2.length() + 1, 0);
//     vector<int> next(word2.length() + 1, 0);

//     for (int j = 0; j < word2.length(); j++)
//     {
//         next[j] = word2.length() - j;
//     }

//     for (int i = word1.length() - 1; i >= 0; i--)
//     {
//         for (int j = word2.length() - 1; j >= 0; j--)
//         {

//             // catch here(this just next line is a base case)
//             curr[word2.length()] = word1.length() - i;
//             int ans = 0;
//             if (word1[i] == word2[j])
//                 ans = next[j + 1];
//             else
//             {
//                 // insert
//                 int insertans = 1 + curr[j + 1];
//                 // delete
//                 int deleteans = 1 + next[j];
//                 // replace
//                 int replaceans = 1 + next[j + 1];
//                 ans = min(insertans, min(deleteans, replaceans));
//             }
//             curr[j] = ans;
//         }
//         next = curr;
//     }
//     return next[0];
// }

// int minDistance(string word1, string word2)
// {
//     if (word1.length() == 0)
//         return word2.length();
//     if (word2.length() == 0)
//         return word1.length();

//     // rec
//     // return solve(word1, 0, word2, 0);

//     // rec+mem
//     // vector<vector<int>> dp(word1.length()+1, vector<int> (word2.length()+1, -1));
//     // return solvemem(word1, 0, word2, 0, dp);

//     // tabulation
//     // return solvetab(word1, word2);

//     // space opti
//     return spaceopti(word1, word2);
// }

// ***********  Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.///////

// vector<int> nextSmallerElement(vector<int> arr, int n)
// {
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);

//     for (int i = n - 1; i >= 0; i--)
//     {
//         int curr = arr[i];
//         while (s.top() != -1 && arr[s.top()] >= curr)
//         {
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(i);
//     }
//     return ans;
// }

// vector<int> prevSmallerElement(vector<int> arr, int n)
// {
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);

//     for (int i = 0; i < n; i++)
//     {
//         int curr = arr[i];
//         while (s.top() != -1 && arr[s.top()] >= curr)
//         {
//             s.pop();
//         }
//         ans[i] = s.top();
//         s.push(i);
//     }
//     return ans;
// }

// int largestRectangleArea(vector<int> &heights)
// {
//     int n = heights.size();
//     vector<int> next(n);
//     next = nextSmallerElement(heights, n);
//     vector<int> prev(n);
//     prev = prevSmallerElement(heights, n);

//     int area = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int l = heights[i];
//         if (next[i] == -1)
//         {
//             next[i] = n;
//         }
//         int b = next[i] - prev[i] - 1;
//         int newarea = l * b;
//         area = max(area, newarea);
//     }
//     return area;
// }

// int maximalRectangle(vector<vector<char>> &matrix)
// {
//     int maxi = INT_MIN;

//     vector<int> histogram(matrix[0].size(), 0);

//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < histogram.size(); j++)
//         {
//             if (matrix[i][j] == '1')
//                 histogram[j]++;
//             else
//                 histogram[j] = 0;
//         }
//         maxi = max(maxi, largestRectangleArea(histogram));
//     }
//     return maxi;
// }

// ************ WILD CARD MATCHING ***********************
// Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

// '?' Matches any single character.
// '*' Matches any sequence of characters (including the empty sequence).
// The matching should cover the entire input string (not partial).

// bool solve(string &s, string &p, int i, int j)
// {
//     if (i < 0 && j < 0)
//         return true;
//     if (j < 0 && i >= 0)
//         return false;
//     if (i < 0 && j >= 0)
//     {
//         for (int k = 0; k <= j; k++)
//         {
//             if (p[k] != '*')
//                 return false;
//         }
//         return true;
//     }
//     bool ans;

//     if (s[i] == p[j] || p[j] == '?')
//         ans = solve(s, p, i - 1, j - 1);

//     else if (p[j] == '*')
//         ans = (solve(s, p, i, j - 1) || (solve(s, p, i - 1, j)));
//     else
//         ans = false;
//     return ans;
// }

// bool solvemem(string &s, string &p, int i, int j, vector<vector<int>> &dp)
// {
//     if (i < 0 && j < 0)
//         return true;
//     if (j < 0 && i >= 0)
//         return false;
//     if (i < 0 && j >= 0)
//     {
//         for (int k = 0; k <= j; k++)
//         {
//             if (p[k] != '*')
//                 return false;
//         }
//         return true;
//     }
//     if (dp[i][j] != -1)
//         return dp[i][j];
//     bool ans;

//     if (s[i] == p[j] || p[j] == '?')
//         ans = solvemem(s, p, i - 1, j - 1, dp);

//     else if (p[j] == '*')
//         ans = (solvemem(s, p, i, j - 1, dp) || (solvemem(s, p, i - 1, j, dp)));
//     else
//         ans = false;
//     return dp[i][j] = ans;
// }

// bool solvetab(string &s, string &p)
// {
//     vector<vector<int>> dp(s.length() + 1, vector<int>(p.length() + 1, 0));
//     dp[0][0] = true;

//     for (int j = 1; j <= p.length(); j++)
//     {
//         bool flag = true;
//         for (int k = 1; k <= j; k++)
//         {
//             if (p[k - 1] != '*')
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         dp[0][j] = flag;
//     }

//     for (int i = 1; i <= s.length(); i++)
//     {
//         for (int j = 1; j <= p.length(); j++)
//         {

//             if (s[i - 1] == p[j - 1] || p[j - 1] == '?')
//                 dp[i][j] = dp[i - 1][j - 1];

//             else if (p[j - 1] == '*')
//                 dp[i][j] = (dp[i][j - 1] || dp[i - 1][j]);
//             else
//                 dp[i][j] = false;
//         }
//     }
//     return dp[s.length()][p.length()];
// }

// bool spaceopti(string &s, string &p)
// {
//     vector<int> curr(p.length() + 1, 0);
//     vector<int> prev(p.length() + 1, 0);

//     prev[0] = true;

//     for (int j = 1; j <= p.length(); j++)
//     {
//         bool flag = true;
//         for (int k = 1; k <= j; k++)
//         {
//             if (p[k - 1] != '*')
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         prev[j] = flag;
//     }

//     for (int i = 1; i <= s.length(); i++)
//     {
//         for (int j = 1; j <= p.length(); j++)
//         {

//             if (s[i - 1] == p[j - 1] || p[j - 1] == '?')
//                 curr[j] = prev[j - 1];

//             else if (p[j - 1] == '*')
//                 curr[j] = (curr[j - 1] || prev[j]);
//             else
//                 curr[j] = false;
//         }
//         prev = curr;
//     }
//     return prev[p.length()];
// }

// bool isMatch(string s, string p)
// {
//     // rec
//     // return solve(s, p, s.length()-1, p.length()-1);

//     // rec+mem
//     // vector<vector<int>> dp(s.length()+1, vector<int>(p.length()+1, -1));
//     // return solvemem(s, p, s.length()-1, p.length()-1, dp);

//     //  tabulation
//     // return solvetab(s, p);

//     // space opti
//     return spaceopti(s, p);
// }

// **************   GREEDY ALGORITHM***********
//  N MEETINGS IN A ROOM
//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution
// {
// public:
//     // Function to find the maximum number of meetings that can
//     // be performed in a meeting room.

//     static bool cmp(pair<int, int> a, pair<int, int> b)
//     {
//         return a.second < b.second;
//     }

//     int maxMeetings(int start[], int end[], int n)
//     {
//         vector<pair<int, int>> v;
//         for (int i = 0; i < n; i++)
//         {
//             pair<int, int> p = {start[i], end[i]};
//             v.push_back(p);
//         }
//         sort(v.begin(), v.end(), cmp);

//         int count = 1;
//         int ansend = v[0].second;
//         for (int i = 1; i < n; i++)
//         {
//             if (v[i].first > ansend)
//             {
//                 count++;
//                 ansend = v[i].second;
//             }
//         }
//         return count;
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int start[n], end[n];
//         for (int i = 0; i < n; i++)
//             cin >> start[i];

//         for (int i = 0; i < n; i++)
//             cin >> end[i];

//         Solution ob;
//         int ans = ob.maxMeetings(start, end, n);
//         cout << ans << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//*******************   START IMPORTANT QUESTIONS   ********************************************
// Convert BST to Min Heap
// Input:       4
//                 /   \
//               2     6
//             /  \   /  \
//           1   3  5    7
// Output:  1
//                /   \
//              2     5
//            /  \   /  \
//          3   4  6    7

// #include <iostream>
// #include <vector>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *left, *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = this->right = NULL;
//     }
// };

// node *getnum(int num)
// {
//     node *makenode = new node(num);
//     return makenode;
// }

// void getvctr(node *root, int v[], int &i)
// {
//     if (root == NULL)
//         return;
//     getvctr(root->left, v, i);
//     v[i++] = (root->data);
//     getvctr(root->right, v, i);
// }

// void nowmakepreorder(node *root, int arr[], int &index)
// {

//     if (root == NULL)
//         return;
//     root->data = arr[index++];
//     nowmakepreorder(root->left, arr, index);
//     nowmakepreorder(root->right, arr, index);
// }

// void nowgetpreorder(node *ro)
// {
//     if (ro == NULL)
//         return;
//     cout << ro->data << " ";
//     nowgetpreorder(ro->left);
//     nowgetpreorder(ro->right);
// }

// int main()
// {
//     node *root = new node(4);
//     root->left = getnum(2);
//     root->right = getnum(6);
//     root->left->left = getnum(1);
//     root->left->right = getnum(3);
//     root->right->left = getnum(5);
//     root->right->right = getnum(7);
//     int sz = 7;
//     int vctr[sz];
//     int i = 0;
//     getvctr(root, vctr, i);

//     for (int i = 0; i < 7; i++)
//     {
//         cout << vctr[i] << " ";
//     }
//     int index = 0;
//     nowmakepreorder(root, vctr, index);
//     nowgetpreorder(root);
//     return 0;
// }

//  Shortest Unique prefix for every word
// Given an array of words, find all shortest unique prefixes to represent each word in the given array. Assume that no word is prefix of another.

// Example 1:

// Input:
// N = 4
// arr[] = {"zebra", "dog", "duck", "dove"}
// Output: z dog du dov
// Explanation:
// z => zebra
// dog => dog
// duck => du
// dove => dov

//  USING NORMAL APPROACH

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     unordered_map<string, int> mappp;
//     string arr[4] = {"zebra", "dog", "duck", "dove"};
//     for (int i = 0; i < 4; i++)
//     {
//         string prefix = "";
//         for (char ch : arr[i])
//         {
//             prefix += ch;
//             mappp[prefix]++;
//         }
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         string prefix = "";
//         // string str[];
//         for (char ch : arr[i])
//         {
//             prefix += ch;
//             if (mappp[prefix] == 1)
//             {
//                 // str->push_back(prefix);
//                 (i != 3) ? cout << prefix << " ," : cout << prefix;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// USING TRIE APPROACH

// class trienode
// {
// public:
//     trienode *children[26];
//     int cnt;
//     trienode()
//     {
//         for (int i = 0; i < 26; i++)
//         {
//             this->children[i] = NULL;
//         }
//         this->cnt = 0;
//     }
// };

// class Solution
// {
// public:
//     void insert_string(trienode *root, string &str)
//     {

//         trienode *temp = root;
//         for (int i = 0; i < str.size(); i++)
//         {
//             int val = str[i] - 'a';
//             if (temp->children[val] == NULL)
//             {
//                 temp->children[val] = new trienode();
//             }
//             temp = temp->children[val];
//             temp->cnt++;
//         }
//     }

//     string getstring(trienode *root, string &str)
//     {
//         string res = "";
//         trienode *temp = root;
//         for (int i = 0; i < str.size(); i++)
//         {
//             int val = str[i] - 'a';
//             res += str[i];
//             temp = temp->children[val];
//             if (temp->cnt == 1)
//                 return res;
//         }
//         return res;
//     }

//     vector<string> findPrefixes(string arr[], int n)
//     {
//         // code here
//         trienode *root = new trienode();
//         for (int i = 0; i < n; i++)
//         {
//             insert_string(root, arr[i]);
//         }

//         vector<string> ans;
//         for (int i = 0; i < n; i++)
//         {
//             string strt = getstring(root, arr[i]);
//             ans.push_back(strt);
//         }
//         return ans;
//     }
// };

// third approach

// #include <iostream>
// using namespace std;

// class trienode
// {
// public:
//     trienode *child[26];
//     bool is;
//     trienode()
//     {
//         this->is = false;
//         for (int i = 0; i < 26; i++)
//         {
//             this->child[i] = NULL;
//         }
//     }
// };

// void insert(trienode *node, string word)
// {
//     if (word.length() == 0)
//     {
//         node->is = true;
//         return;
//     }
//     int index = word[0] - 'a';
//     trienode *pointer;
//     if (node->child[index] != NULL)
//     {
//         pointer = node->child[index];
//     }
//     else
//     {
//         pointer = new trienode();
//         node->child[index] = pointer;
//     }
//     insert(pointer, word.substr(1));
// }

// bool found(trienode *node, string word)
// {
//     if ((word.length()) == 0)
//         return node->is;
//     int index = word[0] - 'a';
//     trienode *child;
//     if (node->child[index] != NULL)
//     {
//         child = node->child[index];
//     }
//     else
//         return false;

//     return found(child, word.substr(1));
// }

// int main(int argc, char const *argv[])
// {
//     trienode *node = new trienode();
//     insert(node, "zebra");
//     insert(node, "dog");
//     insert(node, "duck");
//     insert(node, "dove");
//     cout << found(node, "duck");
//     return 0;
// }

// CLONING A GRAPH
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
// class Solution
// {
// public:
//     Node *clonenode(Node *node, unordered_map<Node *, Node *> &mapppp)
//     {
//         if (mapppp.find(node) != mapppp.end())
//         {
//             return mapppp[node];
//         }

//         Node *clonedNode = new Node(node->val);
//         mapppp[node] = clonedNode;

//         for (Node *neighbor : node->neighbors)
//         {
//             clonedNode->neighbors.push_back(clonenode(neighbor, mapppp));
//         }

//         return clonedNode;
//     }

//     Node *cloneGraph(Node *node)
//     {
//         if (node == nullptr)
//             return nullptr;
//         unordered_map<Node *, Node *> mapppp;
//         return clonenode(node, mapppp);
//     }
// };

// FLOYYD-WARSHALL GRAPH ALGORITHM-------
// class Solution
// {
// public:
//     void shortest_distance(vector<vector<int>> &matrix)
//     {
//         // Code here

//         int n = matrix.size();
//         int m = matrix[0].size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (matrix[i][j] == -1)
//                     matrix[i][j] = 1e9;
//             }
//         }

//         for (int k = 0; k < m; k++)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = 0; j < m; j++)
//                 {
//                     matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
//                 }
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (matrix[i][j] == 1e9)
//                     matrix[i][j] = -1;
//             }
//         }
//     }
// };

//  NUMBER OF SPANNING TREESM POSSIBLE -------------
// STEP 1: Create Adjacency Matrix for the given graph.
// STEP 2: Replace all the diagonal elements with the degree of nodes. For eg. element at (1,1) position of adjacency matrix will be replaced by the degree of node 1, element at (2,2) position of adjacency matrix will be replaced by the degree of node 2, and so on.
// STEP 3: Replace all non-diagonal 1’s with -1.
// STEP 4: Calculate co-factor for any element.
// STEP 5: The cofactor that you get is the total number of spanning tree for that graph.

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     vector<vector<int>> graph = {{0, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 1}, {1, 1, 1, 0}};
//     unordered_map<int, list<int>> mappp;
//     for (int i = 0; i < graph.size(); i++)
//     {
//         int u = graph[i]
//     }
//     return 0;
// }

// MINIMUM TIME TAKEN BY A JOB TO BE COMPLETED GIVEN BY A DIRECTED ACYCLIC GRAPH-------------
// #include <bits/stdc++.h>
// using namespace std;

// class graph
// {
// public:
//     unordered_map<int, list<int>> adj;

//     void addedge(int u, int v, int point)
//     {
//         adj[u].push_back(v);
//         if (point == 1)
//         {
//             adj[v].push_back(u);
//         }
//     }

//     void print()
//     {
//         for (auto i : adj)
//         {
//             cout << i.first << "->";
//             for (auto j : i.second)
//             {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//     }

//     void findedge(vector<int> &vctr)
//     {
//         for (auto i : adj)
//         {
//             for (auto j : i.second)
//             {
//                 vctr[j]++;
//             }
//         }
//     }

//     void finalansfunc(queue<int> q, vector<int> &minTime, vector<int> &finalans, vector<int> vctr)
//     {
//         while (!q.empty())
//         {
//             int front = q.front();
//             q.pop();
//             finalans.push_back(front);
//             for (auto nghbr : adj[front])
//             {
//                 vctr[nghbr]--;
//                 if (vctr[nghbr] == 0)
//                 {
//                     q.push(nghbr);
//                 }
//                 minTime[nghbr] = max(minTime[nghbr], minTime[front] + 1); // Assume each job takes 1 unit of time
//             }
//         }
//     }
// };

// int main()
// {
//     graph g;
//     int n = 7, e = 7;
//     g.addedge(1, 2, 0);
//     g.addedge(2, 3, 0);
//     g.addedge(2, 4, 0);
//     g.addedge(2, 5, 0);
//     g.addedge(3, 6, 0);
//     g.addedge(4, 6, 0);
//     g.addedge(5, 7, 0);
//     g.print();

//     vector<int> vctr(n);
//     g.findedge(vctr);
//     queue<int> q;
//     for (int i = 0; i < vctr.size(); i++)
//     {
//         if (vctr[i] == 0)
//         {
//             q.push(i);
//         }
//     }

//     vector<int> minTime(n);
//     vector<int> finalans;

//     g.finalansfunc(q, minTime, finalans, vctr);

//     cout << "Minimum time taken by each job:\n";
//     for (auto j : minTime)
//     {
//         cout << j << " ";
//     }
//     cout << endl;

//     cout << "Order of jobs:\n";
//     for (auto j : finalans)
//     {
//         cout << j << " ";
//     }
//     cout << endl;

//     return 0;
// }

//  CHECKING FOR A BIPARTITE GRAPH
// #include <bits/stdc++.h>
// using namespace std;

// bool bipartitechck(unordered_map<int, list<int>> &adj, int node, int color[])
// {
//     queue<int> q;
//     color[node] = 0;
//     q.push(node);
//     while (!q.empty())
//     {
//         int front = q.front();
//         q.pop();
//         for (auto nghbr : adj[front])
//         {
//             if (color[nghbr] == -1)
//             {
//                 color[nghbr] = 1 - color[front];
//                 q.push(nghbr);
//             }
//             else if (color[nghbr] == color[front])
//                 return false;
//         }
//     }
//     return true;
// }

// bool check(unordered_map<int, list<int>> &adj, int n)
// {
//     int color[n];
//     memset(color, -1, sizeof color);
//     // for (int i = 0; i < n; i++)
//     //     color[i] = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (color[i] == -1)
//         {
//             if (!bipartitechck(adj, i, color))
//                 return false;
//         }
//     }
//     return true;
// }

// int main(int argc, char const *argv[])
// {
//     int n, m, u, v;
//     cout << "enter number of vertices" << endl;
//     cin >> n;
//     cout << "enter number of edges" << endl;
//     cin >> m;
//     unordered_map<int, list<int>> adj(n);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     if (check(adj, n))
//     {
//         cout << true;
//     }
//     else
//     {
//         cout << false;
//     }
//     return 0;
// }
