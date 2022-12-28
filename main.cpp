/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string a = "file2.txt";
    ofstream fil;
    fil.open(a, ofstream::app);
    if (!fil.is_open())
    {
        cout << "!!!ERROR!!" << "\n";
    }
    else
    {
        fil << "File work" << "\n";
        cout << "Vvedite chislo" << "\n";
    }
    fil.close();*/
    /*ifstream fi;
    fi.open(a);
    if (!fi.is_open())
    {
        cout << "!!!ERROR!!!" << "\n";
    }
    else
    {
        cout << "!Work_with_file!" << "\n";
    }
    fi.close();
}*/


/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{*/
    /*int t; cin >> t;
    string a = "in.txt";
    string a1 = "out.txt";
    ofstream in;
    ifstream out;
    in.open(a);
    if (!in.is_open())
    {
        cout << "!!!ERROR!!!" << "\n";
    }
    else
    {
        cout << "!Work_with_file!" << "\n";
    }
    out.open(a1);
    if (!out.is_open())
    {
        cout << "!!!ERROR!!!" << "\n";
    }
    else
    {
        cout << "!Work_with_file!" << "\n";

    }
    int i;
    int *A = (int*)malloc(t * sizeof(int));
    for (i = 0; i < t; i++)
    {
        cin >> A[i];
    }*/
    /*string a = "t.txt";
    ifstream t;
    int p = 0;
    int s = 1;
    t.open(a);
    if (!t.is_open())
    {
        cout << "!!!ERROR!!!" << "\n";
    }
    else
    {
        cout << "!Work_with_file!" << "\n";
        char p1;
        while (t.get (p1))
        {
            p += p1;
            s *= p1;
        }
    }
    cout << p << "\t" << s;
    t.close();*/
    /*string a = "dd.txt";
    string a1 = "odd.txt";
    char c;
    char c1[100];
    ofstream dd;
    ifstream odd;
    odd.open(a1);
    if (!odd.is_open())
    {
        cout << "!!!ERROR!!!" << "\n";
    }
    else
    {
        cout << "!Work_with_file!" << "\n";
        while (odd.get(c))
        {
            c1 = c;
        }
    }
    odd.close();
    dd.open(a);
    if (!dd.is_open())
    {
        cout << "!!!ERROR!!!" << "\n";
    }
    else
    {
        cout << "!Work_with_file!" << "\n";
        while (dd.get(c1))
        {
            cout << c1 << "\t";
        }
    }
    dd.close();*/
/*}*/


/*#include <iostream>
using namespace std;
int fiban(int a)
{
    int b = 0, c = 1, d;
    if (a == 0)
     {
        d = b;
        cout << d << "\t";
    }
    if (a == 1)
    {
        d = b;
        cout << d << "  ";
        d = c;
        cout << d;
    }
    if (a >= 2)
    {
        cout << b << "  " << c << "  ";
        for (int i = 0; i < a; i++)
        {
            d = b + c;
            cout << d << "  ";
            b = c;
            c = d;
        }
    }
}
int main()
{
    int a;
    cin >> a;
    cout << fiban(a);
}*/


/*#include <iostream>
using namespace std;
int main()
{
    int n; // nuzhnoe kolichestvo poezdok
    cin >> n;
    int m; // kolichestvo poezdok abonementa
    cin >> m;
    int a; // tsena bileta
    cin >> a;
    int b; // tsena abonementa
    cin >> b;
    int k = (n / m);
    int o = (n % m);
    int t, t1, t2, n1 = n;
    t = n * a;
    t2 = b;
    while (n1 > m)
    {
        t2 += b;
        n1 -= m;
    }
    t1 = k * b + o * a;
    if (t <= t1 && t <= t2) cout << t;
    else if (t1 < t && t1 <= t2) cout << t1;
    else if (t2 < t && t2 < t1) cout << t2;
}*/


/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    string k = "k.txt";
    int a;
    cin >> a;
    ofstream k1;
    k1.open (k);
    int *g = (int *) malloc (a * sizeof (int));
    g[0] = 1;
    k1 << g[0] << " ";
    if (!k1.is_open ())
    {
        cout << "!!!ERROR!!!";
    }
    else
    {
        cout << "Work with file";
        for (int i = 1; i < a; i++)
        {
            g[i] = g[i - 1] * 10;
            k1 << g[i] << " ";
        }
    }
    k1.close ();
}*/


/*#include <iostream>
using namespace std;
int main ()
{
    int k;
    cin >> k;
    int *A = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++)
    {
        cin >> A[i];
    }
    int k19;
    k19 = A[k - 1];
    for (int i = 0; i < k - 2; i++)
    {
        A[k - 1 - i] = A[k - 2 - i];
    }
    A[0] = k19;
    for (int i = 0; i < k; i++)
    {
        cout << A[i] <<"\t";
    }
}*/


/*#include <iostream>
using namespace std;
int main()
{
    int s, r;
    cin >> s;
    int *A = (int*)malloc(s * sizeof(int));
    for (int i = 0; i < s; i++)
    {
        cin >> A[i];
    }
    cin >> r;
    int *B = (int*)malloc(r * sizeof(int));
    for (int i = 0; i < r; i++)
    {
        cin >> B[i];
    }
    int s1;
    if (s > r)
    {
        s1 = r;
        bool *C = (bool*)malloc(s1 * sizeof(bool));
        for (int i = 0; i < r; i++)
        {
            for (int f = 0; f < s; f++)
            {
                if (A[i] == B[f]) C[i] = 1;
                if (A[i] != B[f]) f++;
            }
            int k = 0;
            k += C[i];
            k /= r;
            if (k == 1) {cout << "A belongs B" << "\n";
            }
            cout << C[i] << "  ";
        }
    }
    else if (s < r)
    {
        s1 = s;
        bool *C = (bool*)malloc(s1 * sizeof(bool));
        for (int i = 0; i < s; i++)
        {
            for (int f = 0; f < r; f++)
            {
                if (B[i] == A[f]) C[i] = 1;
                if (B[i] != A[f]) f++;
            }
            int k1 = 0;
            k1 += C[i];
            k1 /= s;
            if (k1 == 1)
            {
                cout << "B belongs A" << "\n";
            }
            cout << C[i] << "  ";
        }
    }
    else
    {
        bool *C = (bool*)malloc(s1 * sizeof(bool));
        for (int i = 0; i < s; i++)
        {
            if (A[i] == B[i]) {C[i] = 1;}
            if (A[i] != B[i]) {C[i] = 0;}
            cout << C[i] << "\t";
        }
    }
    delete[] A;
    delete[] B;
}*/


/*#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int main ()
{
    int s;
    cin >> s;
    int *x = (int*)malloc(s * sizeof(int));
    for (int i = 0; i < s; i++)
    {
        cin >> x[i];
    }
    int D = 0, M = 0;
    for (int i = 0; i < s; i++)
    {
        M += x[i];
    }
    M /= s;
    string k = "u.txt";
    ofstream d;
    d.open(k);
    if (!d.is_open())
    {
        cout << "!!!ERROR!!!" << "\n";
    }
    else
    {
        cout << "!Work_with_file!" << "\n";
        for (int i = 0; i < s; i++)
        {
            D += pow((x[i] - M), 2);
        }
    }
    d << D;
}*/


/*#include <iostream>
using namespace std;
int main ()
{
    int k, n;
    cin >> n >> k;
    int *O = (int*)malloc(n * sizeof(int));
    O[0] = 1;
    int c = 0;
    if (n % 2 == 1)
    {
        n++;
        for (int i = 1; i < n / 2; i++)
        {
            O[i] = O[0] + (c + 1) * 2;
        }
        O[n / 2] = 2;
        for (int i = n / 2; i < n; i++)
        {
            O[i] = O[n / 2] + 2 * c;
            c++;
        }
        n--;
    }
    else
    {
        O[0] = 1;
        for (int i = 1; i < n / 2; i++)
        {
            O[i] = O[0] + i * 2;
        }
        O[n / 2] = 2;
        for (int i = n / 2; i < n; i++)
        {
            O[i] = O[n / 2] + 2 * c;
            c++;
        }
    }
    cout << O[k - 1];
}*/


/*#include <iostream>
using namespace std;
int main ()
{
    int n, k;
    cin >> n >> k;
    while (k != 0)
    {
        if (n % 10 > 0)
        {
            n--;
        }
        else if (n % 10 == 0)
        {
            n /= 10;
        }
        k--;
    }
    cout << n;
}*/


/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int H;
    int L;
    cin >> H >> L;
    float g = (pow(H*H-L*L)/(2*H);
    cout << fixed;
    cout.precision(9);
    cout << g << "\n";
}*/


/*#include <iostream> // Vector
#include <vector>
using namespace std;
int main()
{
    vector <int > myVector;
    int a, b;
    cin >> b;
    for (a = 0; a < b; a++)
    {
        myVector.push_back(a);
    }
    auto iter = myVector.begin();
    cout << myVector.size() << "\n";
    myVector.insert(iter + 3, 55);
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << "\t";
    }
}*/


/*#include <iostream> // Ukazateli
using namespace std;
int main()
{
    int a = 10;
    cout << a << "\n";
    int *pa = &a;
    cout << *pa << "  " << pa << "\n";
    int *px = &a;
    cout << *px << "  " << px << "\n";
    *px = 2;
    cout << a << "  " << px << "\n";
}*/


/*#include <iostream> //human(getter-setter)
#include <string>
using namespace std;
class humen
{
private:
    int age;
    bool sex;
    string name;
public:
    humen(int voz, bool gen, string pogonyalo)
    {
        cout << "Вызван конструктор!" << "\n";
        age = voz;
        sex = gen;
        name = pogonyalo;
    }*/
    /*int GetAGE()
    {
        return age;
    }
    void SetAGE(int voz)
    {
        age = voz ;
    }
    bool Getsex()
    {
        return sex;
    }
    void Setsex(bool gen)
    {
        sex = gen;
    }
    string Getname()
    {
        return name;
    }
    void Setname(string pogonyalo)
    {
        name = pogonyalo;
    }*/
    /*void printazh()
    {
        cout << name << "\t" << age << "\t";
        if (sex == 1) cout << "Мужской" << "\n";
        else cout << "Женский" << "\n";
    }
    ~humen()
    {
        cout << "Вызван деструктор!" << "\t";
    }
};
int main()
{
    setlocale (LC_ALL, "ru");
    humen human(19, 1, "Азизек");
    humen human1(20, 0, "Жанна");*/
    /*human.SetAGE(20);
    human.Setsex(0);
    human.Setname("Азизбек");*/
    /*human.printazh();
    human1.printazh();
}*/
     


/*#include <iostream> //this
using namespace std;
class myclass
{
public:
    int data;
    myclass(int data)
    {
        this -> data = data;
        cout << "Вызов конструктора: " << this << "\n";
    }
    ~myclass()
    {
        cout << "Вызов деструктора: " << this << endl;
    }
};
void fun(myclass val)
{
    cout << "Вызов функции fun \n";
}
myclass fun2()
{
    cout << "Вызов функции fun \n";
    myclass temp(2);
    return temp;
}*/
/*class point
{
    int x, y;
public:
    point()
    {
        x = 0;
        y = 0;
        cout << this << " constructor \n";
    }
    void Setx(int valuex) {x = valuex;}
    void Getx() {cout << x << "\n";}
    void Sety(int y) {this -> y = y;}
    void GetY() {cout << y << "\n";}
    point (int valuex, int valuey)
    {
        x = valuex;
        y = valuey;
        cout << this << " constructor \n";
    }
    void print()
    {
        cout << "x = " << x << "\t" << "y = " << y <<"\n";
    }
};
*/
/*int main()
{
    setlocale (LC_ALL, "ru");*/
    /*point a;
    a.print();
    a.Sety(9);
    cout << "\n";
    point b(4, 11);
    b.print();*/
    /*myclass a(4);
    fun(a);*/
    /*fun2();
}*/


/*#include <iostream>
#include <vector>
using namespace std;
void sort(int k)
{
    int *I = (int*)malloc(k * sizeof(int));
    for (int j = 0; j < k - 1; j++)
    {
        int z = 0;
        if (I[j] > I[j + 1])
        {
            z = I[j + 1];
            I[j + 1] = I[j];
            I[j] = z;
        }
        cout << I[j] << "\t";
    }
    cout << "\n";
}
void Sch(int k)
{
    int t;
    int *I = (int*)malloc(k * sizeof(int));
    for (int j = 0; j < k; j++)
    {
        if (I[j] == I[j + 1] && I[j] == I[j + 2])
        {
            t = I[j];
        }
    }
    cout << t <<"\n";
}
int main()
{
    int s;
    cin >> s;
    int *I = (int*)malloc(s * sizeof(int));
    for (int i = 0; i < s; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> I[j];
        }
        for (int j = 0; j < k - 1; j++)
        {
            sort(k);
            Sch(k);
        }
    }
}*/



/*#include <iostream> //ZBCH
#include <ctime>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int* A = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        A[i] = rand()%size;
    }
    int t = 0;
    for (int i = 0; i < size; i++)
    {
        t += A[i];
    }
    t /= size;
    cout << t;
}*/
