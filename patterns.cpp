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
