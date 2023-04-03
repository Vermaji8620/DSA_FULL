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
